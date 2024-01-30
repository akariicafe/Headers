@interface WLKNetworkRequestUtilities : NSObject

+ (id)_sharedCacheSessionConfiguration;
+ (id)configurationBaseURLString;
+ (void)startNetworkRequest:(id)a0 account:(id)a1 sessionConfiguration:(id)a2 options:(long long)a3 completion:(id /* block */)a4;
+ (id)_defaultAppSessionConfiguration;
+ (id)defaultSessionConfiguration;

@end
