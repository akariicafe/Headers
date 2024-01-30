@class NSUUID, NSString, NSData, NSMutableDictionary, NSDictionary, NSObject, NSKeyedUnarchiver, NEHelper;
@protocol OS_dispatch_queue;

@interface NEConfigurationManager : NSObject {
    NSString *_description;
    BOOL _hasReadPermission;
    BOOL _isVPNPublicAPI;
    BOOL _isVPNPrivateAPI;
    BOOL _isNEHelper;
    BOOL _isSynchronous;
    BOOL _isSyncedOnQueue;
    int _changedNotifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_outerQueue;
    NSDictionary *_currentIndex;
    NSObject<OS_dispatch_queue> *_changedQueue;
    id /* block */ _changedHandler;
    NSMutableDictionary *_loadedIndex;
    NSMutableDictionary *_loadedConfigurations;
    NSKeyedUnarchiver *_decoder;
    long long _generation;
    NEHelper *_helper;
    NSData *_SCPreferencesSignature;
}

@property BOOL hasVPNAPIEntitlement;
@property (readonly) NSUUID *userUUID;
@property (copy) id /* block */ incomingMessageHandler;
@property long long configurationChangeSource;
@property (readonly) NSString *pluginType;

+ (id)networkPrivacyConfigurationName;
+ (id)sharedManager;
+ (id)sharedManagerForAllUsers;

- (void)loadConfigurationsWithCompletionQueue:(id)a0 handler:(id /* block */)a1;
- (void)syncConfigurationsWithSC:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)copyIdentities:(id)a0 fromDomain:(long long)a1 withCompletionQueue:(id)a2 handler:(id /* block */)a3;
- (void)loadConfigurationAndUserWithID:(id)a0 withCompletionQueue:(id)a1 handler:(id /* block */)a2;
- (id)initSynchronous;
- (void)handleFileRemovedWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)showLocalNetworkAlertForApp:(id)a0 withCompletionQueue:(id)a1 handler:(id /* block */)a2;
- (void)setChangedQueue:(id)a0 andHandler:(id /* block */)a1;
- (void)saveConfigurationToDisk:(id)a0 currentSignature:(id)a1 userUUID:(id)a2 isUpgrade:(BOOL)a3 completionQueue:(id)a4 completionHandler:(id /* block */)a5;
- (void)loadConfigurations:(id)a0 withFilter:(id)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchClientListenerWithBundleID:(id)a0 completionQueue:(id)a1 handler:(id /* block */)a2;
- (id)initForAllUsers;
- (void)dealloc;
- (void)removeConfigurationFromDisk:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (id)getCurrentUserUUIDForConfigurationID:(id)a0 fromIndex:(id)a1;
- (void)repopulateNetworkPrivacyConfigurationResetAll:(BOOL)a0;
- (void)loadIndexWithFilter:(id)a0 completionQueue:(id)a1 handler:(id /* block */)a2;
- (id)copyCurrentIndexWithConfigurationIDsExpunged:(id)a0;
- (void)handleApplicationsRemoved:(id)a0 completionQueue:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)loadConfigurationWithID:(id)a0 withCompletionQueue:(id)a1 handler:(id /* block */)a2;
- (id)init;
- (void)postGeneration;
- (void)fetchUpgradeInfoForPluginType:(id)a0 completionQueue:(id)a1 handler:(id /* block */)a2;
- (id)description;
- (void)showLocalNetworkAlertForApp:(id)a0 withCompletionQueue:(id)a1 query:(id)a2 hasEntitlement:(BOOL)a3 handler:(id /* block */)a4;
- (id)initWithPluginType:(id)a0;
- (void)removeConfiguration:(id)a0 withCompletionQueue:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)saveConfiguration:(id)a0 withCompletionQueue:(id)a1 handler:(id /* block */)a2;
- (void)triggerLocalAuthenticationForConfigurationWithID:(id)a0 withCompletionQueue:(id)a1 handler:(id /* block */)a2;

@end
