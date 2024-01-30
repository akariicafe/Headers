@interface SCKAsyncBlockOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

- (BOOL)isFinished;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void).cxx_destruct;

@end
