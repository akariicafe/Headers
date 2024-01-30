@class WLKServerConfigurationResponse, NSURLSessionConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface WLKConfigurationManager : NSObject {
    NSObject<OS_dispatch_queue> *_fetchQueue;
    WLKServerConfigurationResponse *_config;
    NSURLSessionConfiguration *_sharedCacheSessionConfiguration;
}

+ (id)sharedInstance;

- (id)_config;
- (id)_configuration;
- (id)init;
- (void).cxx_destruct;
- (id)_stringForCachePolicy:(unsigned long long)a0;
- (id)_utsk;
- (id)_init;
- (void)_invalidateCache;
- (void)fetchConfigurationWithOptions:(long long)a0 cachePolicy:(unsigned long long)a1 queryParameters:(id)a2 completion:(id /* block */)a3;
- (void)fetchConfigurationWithCompletionHandler:(id /* block */)a0;
- (void)_handleLibraryDidChangeNotification:(id)a0;
- (void)_setConfig:(id)a0;
- (id)_configurationWithOptions:(long long)a0 cachePolicy:(unsigned long long)a1 queryParameters:(id)a2;
- (void)_invalidateNetworkCache;
- (void)_setUtsk:(id)a0;

@end
