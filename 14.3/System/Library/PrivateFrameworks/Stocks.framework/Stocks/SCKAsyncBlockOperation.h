@interface SCKAsyncBlockOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)isAsynchronous;
- (void)start;

@end
