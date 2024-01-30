@class NSMutableDictionary, RCKeyValueStore, NSURL, RCConfigurationSettings, RCDeviceInfo, RCAsyncSerialQueue;

@interface RCConfigurationManager : NSObject

@property (retain, nonatomic) RCConfigurationSettings *configurationSettings;
@property (retain, nonatomic) RCDeviceInfo *deviceInfo;
@property (retain, nonatomic) NSURL *contentDirectoryURL;
@property (retain, nonatomic) RCAsyncSerialQueue *configRequestSerialQueue;
@property (retain, nonatomic) RCKeyValueStore *localStore;
@property (retain, nonatomic) NSMutableDictionary *configResourceByRequestKey;

- (void)_saveConfigurationResource:(id)a0;
- (void)_fetchMultiConfigurationFromEndpointURL:(id)a0 settings:(id)a1 changeTagsByRequestKey:(id)a2 completion:(id /* block */)a3;
- (BOOL)_areAllConfigurationResourcesInvalid:(id)a0 allowedToReachEndpoint:(BOOL)a1 useBackgroundRefreshRate:(BOOL)a2 requestKeys:(id)a3;
- (void)_loadConfigurationResourcesFromStore;
- (void)_fetchConfigurationFromFallbackURLWithSettings:(id)a0 completion:(id /* block */)a1;
- (BOOL)_areAllConfigurationResourcesAvailable:(id)a0 requestKeys:(id)a1;
- (id)_endpointURLForEnvironment:(unsigned long long)a0 requestKey:(id)a1;
- (void)fetchSingleConfigurationWithSettings:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (void)fetchMultiConfigurationWithSettings:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (BOOL)_isValidConfigurationResource:(id)a0 allowedToReachEndpoint:(BOOL)a1 useBackgroundRefreshRate:(BOOL)a2;
- (void).cxx_destruct;
- (id)_decodeConfigurationResource:(id)a0;
- (void)fetchConfigurationWithSettings:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (id)initWithContentDirectoryURL:(id)a0;
- (id)_encodeConfigurationResource:(id)a0;
- (BOOL)_isAllowedToReachEndpointWithSettings:(id)a0 configurationResource:(id)a1 endpointURL:(id)a2;
- (void)_removeConfigurationResourceForRequestKey:(id)a0;

@end
