@class NSConditionLock, NSRunLoop;

@interface _SYStreamerThread : NSThread {
    NSRunLoop *_threadRunLoop;
    struct __CFRunLoopSource { } *_stopRLS;
    NSConditionLock *_startupLock;
}

@property (readonly, nonatomic) NSRunLoop *runLoop;

+ (id)streamerThread;

- (void)main;
- (void).cxx_destruct;
- (id)init;
- (void)_waitForStartup;

@end
