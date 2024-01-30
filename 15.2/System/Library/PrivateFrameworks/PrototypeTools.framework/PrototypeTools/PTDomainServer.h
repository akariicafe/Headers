@class NSString, NSDictionary, NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PTDomainServer : NSObject <PTDomainServer, PTSettingsKeyPathObserver, _PTSettingsRestoreDefaultsObserver, NSXPCListenerDelegate, PTEditingServerDataSource, PTEditingServerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_unregisteredClients;
    NSMutableDictionary *_clientsByDomainID;
    NSMutableDictionary *_domainInfoByID;
    NSMutableDictionary *_testRecipeInfoByID;
    NSMutableDictionary *_settingsArchivesByDomainID;
    NSMutableSet *_loadedDomainIDs;
    NSMutableDictionary *_localSettingsByClassName;
    NSMutableSet *_dirtyDomainIDs;
    BOOL _persistScheduled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *domainInfoByID;
@property (readonly, nonatomic) NSDictionary *testRecipeInfoByID;

- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)persistChanges;
- (void).cxx_destruct;
- (id)init;
- (void)_queue_removeClient:(id)a0;
- (void)registerTestRecipeWithInfo:(id)a0;
- (void)registerRootSettingsProxyDefinition:(id)a0 forDomainID:(id)a1;
- (void)registerDomainWithInfo:(id)a0;
- (void)settingsWillRestoreDefaults:(id)a0;
- (void)settingsDidRestoreDefaults:(id)a0;
- (id)_queue_archiveForDomainID:(id)a0;
- (void)_queue_persistChanges;
- (id)_queue_proxyDefinitionForDomainID:(id)a0;
- (void)_queue_applyArchiveValue:(id)a0 forKeyPath:(id)a1 domainID:(id)a2;
- (void)_queue_restoreDefaultsForDomainID:(id)a0;
- (void)_queue_invokeOutletAtKeyPath:(id)a0 domainID:(id)a1;
- (void)_queue_sendArchiveValue:(id)a0 forKeyPath:(id)a1 domainID:(id)a2;
- (void)_queue_schedulePersistChanges;
- (void)_queue_sendRestoreDefaultsForDomainID:(id)a0;
- (id)rootSettingsArchiveForDomainID:(id)a0;
- (id)rootSettingsProxyDefinitionForDomainID:(id)a0;
- (id)activeTestRecipeID;
- (void)applyArchiveValue:(id)a0 forRootSettingsKeyPath:(id)a1 domainID:(id)a2;
- (void)restoreDefaultValuesForDomainID:(id)a0;
- (void)invokeOutletAtKeyPath:(id)a0 domainID:(id)a1;
- (void)sendEvent:(long long)a0 forTestRecipeID:(id)a1;
- (void)setActiveTestRecipeID:(id)a0;
- (id)localSettingsOfClass:(Class)a0;

@end
