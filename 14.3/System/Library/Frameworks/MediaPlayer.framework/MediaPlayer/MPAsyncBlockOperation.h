@interface MPAsyncBlockOperation : MPAsyncOperation

@property (readonly, copy, nonatomic) id /* block */ startHandler;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithStartHandler:(id /* block */)a0;

@end
