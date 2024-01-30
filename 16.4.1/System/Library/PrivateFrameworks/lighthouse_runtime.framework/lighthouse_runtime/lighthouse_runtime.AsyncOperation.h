@interface lighthouse_runtime.AsyncOperation : NSOperation {
    void /* unknown type, empty encoding */ lockQueue;
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ task;
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ _isExecuting;
    void /* unknown type, empty encoding */ _isFinished;
}

@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (void)cancel;
- (void)dealloc;
- (BOOL)isAsynchronous;
- (id)init;
- (void)start;
- (void).cxx_destruct;

@end
