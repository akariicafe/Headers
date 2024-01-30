@interface NSFilePresenterAsynchronousOperation : NSOperation {
    id /* block */ _block;
    BOOL _isFinished;
    BOOL _isExecuting;
}

+ (id)operationWithBlock:(id /* block */)a0;

- (void)finish;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;

@end
