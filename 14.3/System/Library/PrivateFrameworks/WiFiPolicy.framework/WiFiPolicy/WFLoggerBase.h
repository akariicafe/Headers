@class NSString, WFLogger, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface WFLoggerBase : NSObject <WFLogProtocol> {
    WFLogger *_ctxt;
    unsigned char _internalInstall;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (readonly) unsigned char WFIsInternalInstall;
@property (copy, getter=getLogLifespanInDays) NSNumber *logLifespanInDays;
@property (getter=getLogPrivacy) unsigned long long logPrivacy;
@property (getter=getLogLevelEnable) unsigned long long logLevelEnable;
@property (getter=getLogLevelPersist) unsigned long long logLevelPersist;
@property (getter=getMaxFileSizeInMB) unsigned long long maxSizeInKb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
