@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CURunLoopThread : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    struct __CFRunLoop { } *_runLoop;
    BOOL _runLoopValid;
    NSMutableArray *_startBlocks;
    BOOL _threadRunning;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) id /* block */ threadInitializeHandler;
@property (copy, nonatomic) id /* block */ threadFinalizeHandler;

- (void)performBlock:(id /* block */)a0;
- (void)_threadMain;
- (void)dealloc;
- (id)init;
- (void)activate;
- (void)invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (BOOL)_scheduleStopThread;

@end
