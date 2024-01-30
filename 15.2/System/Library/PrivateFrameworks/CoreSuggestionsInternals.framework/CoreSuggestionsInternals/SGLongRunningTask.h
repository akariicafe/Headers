@class NSDate, SGLongRunningTaskManager;

@interface SGLongRunningTask : NSObject {
    SGLongRunningTaskManager *_manager;
    NSDate *_deadline;
    _Atomic BOOL _deferRequested;
}

- (void)requestDefer;
- (BOOL)shouldDefer;
- (id)initWithDeadline:(id)a0 manager:(id)a1;
- (void).cxx_destruct;
- (void)markFinished;
- (id)init;

@end
