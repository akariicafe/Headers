@class VSPersistentContainer, NSString, VSRemoteNotifier, NSObject;
@protocol OS_dispatch_queue;

@interface VSDeveloperModeStore : NSObject <VSRemoteNotifierDelegate, VSDeveloperServiceProtocol>

@property (retain, nonatomic) VSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *settingsQueue;
@property (retain, nonatomic) VSRemoteNotifier *serviceChangeRemoteNotifier;
@property (retain, nonatomic) VSRemoteNotifier *settingsChangeRemoteNotifier;
@property (retain, nonatomic) VSRemoteNotifier *providersChangeRemoteNotifier;
@property (retain, nonatomic) VSRemoteNotifier *accountStoreChangeRemoteNotifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchDeveloperSettingsWithCompletionHandler:(id /* block */)a0;
- (void)_noteProvidersDidChange;
- (id)init;
- (id)settingsPropertiesURL;
- (void).cxx_destruct;
- (void)updateDeveloperSettings:(id)a0 completionHandler:(id /* block */)a1;
- (void)addDeveloperIdentityProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateExistingDeveloperIdentityProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)_noteServiceDidChange;
- (void)migrateSettingsPropertyFileIfNecessary;
- (void)removeDeveloperIdentityProviderWithUniqueID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_noteSettingsDidChange;
- (id)legacySettingsPropertiesPath;
- (void)_performIdentityProviderBlock:(id /* block */)a0;
- (void)fetchDeveloperIdentityProvidersWithCompletionHandler:(id /* block */)a0;
- (id)_nullableObjectOrNSNull:(id)a0;
- (id)_developerIdentityProviderInContext:(id)a0;
- (id)_identityProviderFetchRequest;

@end
