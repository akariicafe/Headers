@interface WLKNetworkRequestUtilities : NSObject

+ (void)startNetworkRequest:(id)a0 account:(id)a1 sessionConfiguration:(id)a2 options:(long long)a3 completion:(id /* block */)a4;
+ (id)sharedCacheSessionConfiguration;
+ (id)configurationBaseURLString;

@end
