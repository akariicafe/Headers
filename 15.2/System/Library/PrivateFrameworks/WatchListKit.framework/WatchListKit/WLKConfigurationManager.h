@class WLKServerConfigurationResponse, WLKSharedFileStorage, NSObject;
@protocol OS_dispatch_queue;

@interface WLKConfigurationManager : NSObject {
    NSObject<OS_dispatch_queue> *_fetchQueue;
    WLKServerConfigurationResponse *_config;
    WLKSharedFileStorage *_fileCache;
}

+ (id)sharedInstance;

- (id)_configuration;
- (id)_utsk;
- (void)_handleLibraryDidChangeNotification:(id)a0;
- (void)_invalidateNetworkCache;
- (void)_invalidateCache;
- (void).cxx_destruct;
- (id)_configurationWithOptions:(long long)a0 cachePolicy:(unsigned long long)a1 queryParameters:(id)a2;
- (void)fetchConfigurationWithOptions:(long long)a0 cachePolicy:(unsigned long long)a1 queryParameters:(id)a2 completion:(id /* block */)a3;
- (id)init;
- (id)_init;
- (id)_config;
- (void)_setUtsk:(id)a0;
- (id)_stringForCachePolicy:(unsigned long long)a0;
- (void)fetchConfigurationWithCompletionHandler:(id /* block */)a0;
- (void)_setConfig:(id)a0;

@end
