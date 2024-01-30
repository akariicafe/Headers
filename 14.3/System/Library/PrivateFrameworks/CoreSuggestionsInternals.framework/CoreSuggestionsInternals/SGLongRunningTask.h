@class NSDate, SGLongRunningTaskManager;

@interface SGLongRunningTask : NSObject {
    SGLongRunningTaskManager *_manager;
    NSDate *_deadline;
    _Atomic BOOL _deferRequested;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldDefer;
- (void)markFinished;
- (void)requestDefer;
- (id)initWithDeadline:(id)a0 manager:(id)a1;

@end
