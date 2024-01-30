@interface AXMOutputComponent : NSObject

@property (class, readonly, nonatomic) BOOL isSupported;

@property (nonatomic) long long componentState;

- (BOOL)canHandleRequest:(id)a0;
- (void)transitionToState:(long long)a0 completion:(id /* block */)a1;
- (id)init;
- (id)description;
- (void)handleRequest:(id)a0 completion:(id /* block */)a1;

@end
