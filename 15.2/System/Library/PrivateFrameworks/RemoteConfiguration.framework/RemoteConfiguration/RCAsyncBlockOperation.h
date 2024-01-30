@interface RCAsyncBlockOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

+ (id)asyncBlockOperationWithMainThreadBlock:(id /* block */)a0;
+ (id)asyncBlockOperationWithBlock:(id /* block */)a0;

- (BOOL)isFinished;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (id)init;

@end
