@class NSDateFormatter, NSObject;
@protocol OS_dispatch_queue;

@interface WFLoggerCircularBuffer : WFLoggerBase {
    char *_wiFiLoggingLogBufferRef;
    long long _wiFiLoggingLogBufferIndex;
    long long _wiFiLoggingLogBufferMaxSize;
    unsigned int _dumpId;
    NSDateFormatter *_tsFormatter;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void)dump;
- (void)WFLog:(unsigned long long)a0 privacy:(unsigned long long)a1 cfStrMsg:(struct __CFString { } *)a2;
- (id)init;
- (void)WFLog:(unsigned long long)a0 privacy:(unsigned long long)a1 message:(const char *)a2 valist:(char *)a3;
- (void)dealloc;

@end
