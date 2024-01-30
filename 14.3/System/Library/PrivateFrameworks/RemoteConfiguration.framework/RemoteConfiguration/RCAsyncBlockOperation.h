@interface RCAsyncBlockOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

+ (id)asyncBlockOperationWithBlock:(id /* block */)a0;
+ (id)asyncBlockOperationWithMainThreadBlock:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)isAsynchronous;
- (void)start;

@end
