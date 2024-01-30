@interface MPAsyncBlockOperation : MPAsyncOperation

@property (readonly, copy, nonatomic) id /* block */ startHandler;

- (void)execute;
- (id)initWithStartHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
