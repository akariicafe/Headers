@class NSObject;
@protocol OS_dispatch_semaphore;

@interface __CFN_CoreSchedulingSetRunnable : NSObject {
    NSObject<OS_dispatch_semaphore> *_sem;
    id /* block */ _setup;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *_tid;
    struct __CFRunLoop { } *_rl;
    long long _performCount;
    struct __CFRunLoopSource { } *_pinnedSource;
    long long _count[5];
}

+ (void)_run:(id)a0;

- (void)dealloc;

@end
