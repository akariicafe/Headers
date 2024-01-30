@interface DocumentManagerExecutables.DOCOperation : NSOperation {
    void /* unknown type, empty encoding */ synchronizationQueue;
    void /* unknown type, empty encoding */ callbackQueue;
    void /* unknown type, empty encoding */ _isFinished;
    void /* unknown type, empty encoding */ _isExecuting;
    void /* unknown type, empty encoding */ finishedBlock;
}

@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL executing;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;

@end
