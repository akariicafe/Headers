@class HMFUnfairLock, HMDHAPAccessory, NSString, HMDNetworkRouterController, NSMutableSet, NSObject, NSNotificationCenter, HMDHome;
@protocol OS_dispatch_queue, HMDNetworkRouterFirewallRuleManager;

@interface HMDNetworkRouterClientManager : NSObject <HMFLogging, HMDDevicePreferenceDataSource, HMDNetworkRouterFirewallRuleManagerClient>

@property (readonly) HMFUnfairLock *lock;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) id<HMDNetworkRouterFirewallRuleManager> firewallRuleManager;
@property (weak) HMDHAPAccessory *networkRouterAccessory;
@property (readonly, weak) HMDHome *home;
@property (readonly) HMDNetworkRouterController *routerController;
@property (nonatomic) BOOL started;
@property (nonatomic) BOOL managedNetworkEnabled;
@property (nonatomic) BOOL staleClientIdentifiersResetNeeded;
@property (nonatomic) BOOL staleClientIdentifiersResetInProgress;
@property (nonatomic) BOOL startPending;
@property (readonly) NSMutableSet *accessoriesInReconfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)assertAirplay2RuleToConfigurationForAccessory:(id)a0 firewallConfiguration:(id)a1;

- (void)_start;
- (void)_stop;
- (void).cxx_destruct;
- (void)stop;
- (BOOL)supportsDeviceWithCapabilities:(id)a0;
- (id)watchedAccessoryIdentifiersForFirewallRuleManager:(id)a0;
- (void)migrateAccessory:(id)a0 toCredentialType:(long long)a1 rotate:(BOOL)a2 completion:(id /* block */)a3;
- (void)handleAccessoryConnected:(id)a0;
- (void)handleAccessoryRemoved:(id)a0;
- (id)initWithNetworkRouterAccessory:(id)a0 workQueue:(id)a1 firewallRuleManager:(id)a2 notificationCenter:(id)a3;
- (void)evaluateManagement;
- (void)replaceActiveNetworkRouterAccessory:(id)a0;
- (void)__registerForNetworkRouterAccessoryReachable:(id)a0;
- (void)__deregisterForNetworkRouterAccessoryReachable:(id)a0;
- (void)_evaluateManagement;
- (void)_resetStaleClientIdentifiersBeforeStart;
- (void)handleRouterAccessoryReachable:(id)a0;
- (void)_handleRouterAccessoryReachable:(id)a0;
- (void)handleAccessoryAdded:(id)a0;
- (void)handleAccessoryFirmwareVersionUpdated:(id)a0;
- (void)handleNetworkProtectionGroupActivated:(id)a0;
- (void)handleNetworkProtectionGroupDeactivated:(id)a0;
- (void)handleNetworkProtectionGroupProtectionChanged:(id)a0;
- (void)handleHomeNetworkProtectionChanged:(id)a0;
- (void)handleFirewallRulesUpdated:(id)a0;
- (void)_startManagingAccessory:(id)a0 initialHomeSetup:(BOOL)a1;
- (void)_reconcileClientConfigurationForReachableAccessory:(id)a0 clientReconfigurationAllowed:(BOOL)a1;
- (void)_reconcileClientConfigurationForAccessory:(id)a0 clientStatus:(id)a1 networkRouterUUID:(id)a2 clientReconfigurationAllowed:(BOOL)a3;
- (void)_replaceNetworkClientIdentifierForAccessory:(id)a0 networkClientIdentifier:(id)a1 networkRouterUUID:(id)a2 clientStatus:(id)a3 clientReconfigurationAllowed:(BOOL)a4;
- (void)_replaceClientConfigurationForAccessory:(id)a0 credential:(id)a1 clientStatus:(id)a2 clientReconfigurationAllowed:(BOOL)a3;
- (void)_createClientConfigurationForAccessory:(id)a0 credential:(id)a1 clientStatus:(id)a2 clientReconfigurationAllowed:(BOOL)a3;
- (void)_updateClientConfigurationForAllAccessoriesWithClientReconfigurationAllowed:(BOOL)a0;
- (void)_updateOrCreateClientConfigurationForAccessory:(id)a0 preferReconcile:(BOOL)a1 clientReconfigurationAllowed:(BOOL)a2;
- (void)_updateExistingClientConfiguration:(id)a0 forAccessory:(id)a1 clientStatus:(id)a2 clientReconfigurationAllowed:(BOOL)a3;
- (void)_updateClientConfiguration:(id)a0 forAccessory:(id)a1 protectionMode:(long long)a2 clientStatus:(id)a3 skipIfFingerprintMatches:(BOOL)a4 clientReconfigurationAllowed:(BOOL)a5;
- (void)_migrateAccessory:(id)a0 withConfiguration:(id)a1 clientStatus:(id)a2 fromCredentialType:(long long)a3 toCredentialType:(long long)a4 rotate:(BOOL)a5 completion:(id /* block */)a6;
- (void)_getNetworkConfigurationForAccessory:(id)a0 targetProtectionMode:(long long)a1 completion:(id /* block */)a2;
- (void)_fetchFirewallRulesForAccessory:(id)a0 completion:(id /* block */)a1;
- (void)_registerForChangesToManagedAccessory:(id)a0;
- (void)_deregisterForChangesToManagedAccessory:(id)a0;
- (void)_registerForNetworkProtectionChangesToGroup:(id)a0;
- (void)_unregisterForNetworkProtectionChangesToGroup:(id)a0;
- (id)_transactionBlockForAccessoriesWithStaleClientIdentifier;

@end
