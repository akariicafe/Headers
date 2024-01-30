@interface SCKAsyncBlockOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (id)initWithBlock:(id /* block */)a0;
- (void)start;
- (void).cxx_destruct;

@end
