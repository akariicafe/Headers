@interface SSObserver : NSObject

@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (copy, nonatomic) id /* block */ resultBlock;

+ (id)observerWithResultBlock:(id /* block */)a0 completionBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
+ (id)observerWithResultBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (void)_sendFailure:(id)a0 usingQueue:(id)a1;
- (void)_sendCompletionUsingQueue:(id)a0;
- (void)_sendResult:(id)a0 usingQueue:(id)a1;

@end
