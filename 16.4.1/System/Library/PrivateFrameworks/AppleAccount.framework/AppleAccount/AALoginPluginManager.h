@class NSArray, NSObject;
@protocol OS_dispatch_queue, AASetupAssistantDelegateService;

@interface AALoginPluginManager : NSObject {
    NSArray *_allowedPluginBundleIDs;
    NSArray *_plugins;
    BOOL _shouldStashLoginResponse;
    NSObject<OS_dispatch_queue> *_pluginNotificationQueue;
    id<AASetupAssistantDelegateService> _idsPlugin;
}

@property (nonatomic) BOOL shouldSkipiTunesPlugin;
@property (nonatomic) BOOL shouldStashLoginResponse;

+ (id)sharedInstance;

- (id)_idsPlugin;
- (id)collectParametersForLoginRequest;
- (id)collectParametersForIdentityEstablishmentRequest;
- (void)notifyServicesOfLoginResponse:(id)a0 forAppleID:(id)a1 password:(id)a2 completion:(id /* block */)a3;
- (void)restrictToPluginBundleIDs:(id)a0;
- (void)notifyServicesOfLoginResponse:(id)a0 forAppleID:(id)a1 password:(id)a2 rawPassword:(id)a3 completion:(id /* block */)a4;
- (id)_loadPluginsLimitedToBundleIDs:(id)a0;
- (id)init;
- (id)_plugins;
- (id)_createLoginContextForAppleID:(id)a0 rawPassword:(id)a1 loginResponse:(id)a2;
- (BOOL)_notifyServicesOfLoginResponse:(id)a0 forAppleID:(id)a1 password:(id)a2 rawPassword:(id)a3;
- (void).cxx_destruct;
- (void)unstashLoginResponse;

@end
