@class NSObject;
@protocol OS_dispatch_semaphore;

@interface DTKTraceSessionCreator : NSObject {
    struct ktrace_session { } *_ktraceSession;
    NSObject<OS_dispatch_semaphore> *_stoppingSemaphore;
}

+ (id)getDefaultedRemotePath:(int *)a0;
+ (BOOL)shouldKeepFile;

- (void)stop;
- (void).cxx_destruct;
- (id)initWithFD:(int)a0 bitmap:(const char *)a1 useExisting:(BOOL)a2 error:(id *)a3;

@end
