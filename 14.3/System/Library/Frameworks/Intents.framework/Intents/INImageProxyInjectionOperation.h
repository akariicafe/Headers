@protocol INImageProxyInjecting;

@interface INImageProxyInjectionOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
}

@property (retain, nonatomic) id<INImageProxyInjecting> injector;
@property (copy, nonatomic) id /* block */ imageProxyRequestBlock;
@property (copy, nonatomic) id /* block */ copyReturnBlock;

- (void).cxx_destruct;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;

@end
