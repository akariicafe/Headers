@interface MPAsyncBlockOperation : MPAsyncOperation

@property (readonly, copy, nonatomic) id /* block */ startHandler;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithStartHandler:(id /* block */)a0;

@end
