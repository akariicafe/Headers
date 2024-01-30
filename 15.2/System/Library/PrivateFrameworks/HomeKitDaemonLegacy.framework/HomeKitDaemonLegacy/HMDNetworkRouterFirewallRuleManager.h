@class NSMutableArray, NSArray, NSString, HMBLocalDatabase, NSNotificationCenter, NSObject, HMFUnfairLock;
@protocol OS_dispatch_queue, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator;

@interface HMDNetworkRouterFirewallRuleManager : HMFObject <HMDNetworkRouterFirewallRuleManagerInternal, HMFLogging, HMDNetworkRouterFirewallRuleManager, HMDNetworkRouterFirewallRuleManagerDebug>

@property (readonly, nonatomic) HMBLocalDatabase *localDatabase;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory> coordinatorFactory;
@property (readonly, nonatomic) HMFUnfairLock *propertyLock;
@property (retain, nonatomic) id<HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator> coordinator;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSMutableArray *clients;
@property (nonatomic) unsigned long long operationsInProgressCount;
@property (readonly, copy, nonatomic) NSArray *activeClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;
+ (double)defaultCloudFetchRetryInterval;
+ (double)defaultCloudFetchInterval;

- (void)listCloudRecordsForProductGroup:(id)a0 rawOutput:(BOOL)a1 completion:(id /* block */)a2;
- (void)dumpLocalRulesForProductGroup:(id)a0 ignoreOverrides:(BOOL)a1 rawOutput:(BOOL)a2 completion:(id /* block */)a3;
- (void)removeOverridesForProductGroup:(id)a0 productNumber:(id)a1 completion:(id /* block */)a2;
- (void)setOverrides:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)removeAllOverridesWithCompletion:(id /* block */)a0;
- (void)dumpPairedMetadataForProductGroup:(id)a0 productNumber:(id)a1 firmwareVersion:(id)a2 ignoreOverrides:(BOOL)a3 rawOutput:(BOOL)a4 completion:(id /* block */)a5;
- (id)initWithLocalDatabase:(id)a0;
- (void)dumpCloudRecordsForProductGroup:(id)a0 productNumber:(id)a1 rawOutput:(BOOL)a2 verifySignatures:(BOOL)a3 completion:(id /* block */)a4;
- (void)dealloc;
- (void)dumpLocalRulesForProductGroup:(id)a0 productNumber:(id)a1 firmwareVersion:(id)a2 ignoreOverrides:(BOOL)a3 rawOutput:(BOOL)a4 completion:(id /* block */)a5;
- (void)addOverrides:(id)a0 completion:(id /* block */)a1;
- (void)removeAllLocalRulesWithCompletion:(id /* block */)a0;
- (void)dumpAllLocalRulesIgnoringOverrides:(BOOL)a0 rawOutput:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchCloudChangesWithCompletion:(id /* block */)a0;
- (void)startupForClient:(id)a0 completion:(id /* block */)a1;
- (void)fetchRulesForAccessories:(id)a0 completion:(id /* block */)a1;
- (void)forceFetchCloudChangesAndForceChangeNotifications:(BOOL)a0 completion:(id /* block */)a1;
- (void)shutdownForClient:(id)a0;
- (void)fetchPairedMetadataVersionConfigurationsForAccessories:(id)a0 completion:(id /* block */)a1;
- (void)didCompleteScheduledCloudFetch;
- (id)initWithLocalDatabase:(id)a0 notificationCenter:(id)a1 workQueue:(id)a2 coordinatorFactory:(id)a3;
- (id)initWithLocalDatabase:(id)a0 coordinatorFactory:(id)a1;
- (void)_fetchCloudChangesIgnoringLastFetchedAccessories:(BOOL)a0 forceChangeNotifications:(BOOL)a1 completion:(id /* block */)a2;

@end
