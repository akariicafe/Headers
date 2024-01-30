@interface TKNetwork : NSObject

@property (readonly, nonatomic) double timeoutInterval;

+ (void)setShared:(id)a0;
+ (id)shared;

- (void)updateNetworkActivity:(long long)a0;
- (id)loadRequest:(id)a0 priority:(long long)a1 completion:(id /* block */)a2;
- (id)downloadRequest:(id)a0 priority:(long long)a1 completion:(id /* block */)a2;
- (id)downloadImage:(id)a0 priority:(long long)a1 completion:(id /* block */)a2;

@end
