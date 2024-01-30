@class NSString, NSMutableArray;

@interface ARRunLoop : NSObject {
    NSString *_name;
    struct __CFRunLoop { } *_runloop;
    struct __CFRunLoopObserver { } *_runLoopEnterObserver;
    struct __CFRunLoopObserver { } *_runLoopExitObserver;
    struct __CFArray { } *_autoreleasePoolStack;
    NSMutableArray *_earlyRunloopBlocks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _started;
}

@property BOOL cancelled;

- (void)start;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)_startThread;
- (void)_runloop_handleActivity:(unsigned long long)a0;
- (void)runOnRunLoop:(id /* block */)a0;
- (void)_runloop_pushAutoreleasePool;
- (void)_runloop_popAutoreleasePool;

@end
