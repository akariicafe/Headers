@interface TKNetwork : NSObject

@property (readonly, nonatomic) double timeoutInterval;

+ (id)shared;
+ (void)setShared:(id)a0;

- (id)downloadImage:(id)a0 priority:(long long)a1 completion:(id /* block */)a2;
- (id)downloadRequest:(id)a0 priority:(long long)a1 completion:(id /* block */)a2;
- (id)loadRequest:(id)a0 priority:(long long)a1 completion:(id /* block */)a2;
- (void)updateNetworkActivity:(long long)a0;

@end
