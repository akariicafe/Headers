@class NSNumber, WFLoggerBase, NSObject;
@protocol OS_dispatch_queue;

@interface WFLogger : NSObject {
    WFLoggerBase *_loggerBase;
    unsigned long long _destination;
    unsigned long long _privacy;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned char _wflRunningOnWatchClassDevice;
    unsigned char _wflEnableDualLoggingOnWatchClassDevice;
}

@property (readonly, copy, getter=getLogLifespanInDays) NSNumber *logLifespanInDays;
@property (readonly, getter=getLogLevelEnable) unsigned long long logLevelEnable;
@property (readonly, getter=getLogLevelPersist) unsigned long long logLevelPersist;
@property (readonly, getter=getDestination) unsigned long long destination;
@property (readonly, getter=getLogPrivacy) unsigned long long logPrivacy;
@property (readonly, getter=getMaxFileSizeInMB) unsigned long long maxFileSizeInMB;

+ (id)sharedWFLoggerSingleton;

- (void)dump;
- (void)setDestinationOsLog:(struct __CFString { } *)a0 category:(struct __CFString { } *)a1 logLifespanInDays:(unsigned long long)a2 logLevel:(unsigned long long)a3 logPrivacy:(unsigned long long)a4;
- (void)setDestinationFileLocation:(struct __CFString { } *)a0 fileNamePrefix:(struct __CFString { } *)a1 runLoopRef:(struct __CFRunLoop { } *)a2 runLoopMode:(struct __CFString { } *)a3 classC:(unsigned char)a4 dateFormatter:(struct __CFDateFormatter { } *)a5 maxFileSizeInMB:(unsigned long long)a6 logLifespanInDays:(unsigned long long)a7;
- (void)WFLog:(unsigned long long)a0 message:(const char *)a1;
- (void)setDestinationCircularBuffer;
- (void)setDestinationFile:(struct __CFString { } *)a0 runLoopRef:(struct __CFRunLoop { } *)a1 runLoopMode:(struct __CFString { } *)a2 classC:(unsigned char)a3 dateFormatter:(struct __CFDateFormatter { } *)a4 maxFileSizeInMB:(unsigned long long)a5 logLifespanInDays:(unsigned long long)a6;
- (id)init;
- (id)loggerBase;

@end
