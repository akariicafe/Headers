@class RTRoutineManager, NSString, PSSpecifier;

@interface PUILocationSystemServicesListController : PUILocationServicesListController

@property (retain, nonatomic) RTRoutineManager *routineManager;
@property (retain, nonatomic) PSSpecifier *productImprovementGroup;
@property (retain, nonatomic) NSString *currentCoreRoutineStatus;
@property (retain, nonatomic) NSString *coreRoutineAppKey;
@property (retain, nonatomic) NSString *specifierIDBeforeCoreRoutine;

+ (int)systemServicesLocationUsage;
+ (id)wirelessBundles;
+ (id)locationBasedAlertBundles;
+ (id)homeKitBundles;
+ (id)routingAndTrafficBundles;
+ (id)systemCustomizationBundles;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)specifiers;
- (id)_locationBasedAlertBundles;
- (id)_homeKitBundles;
- (id)_routingAndTrafficBundles;
- (void)updateCoreRoutineSigLocationSpecifier;
- (void)updateCoreRoutineEnabledStatusAndInsertSpecifier:(BOOL)a0;
- (void)insertCoreRoutineSpecifier;
- (id)coreRoutineEnabledStatus:(id)a0;
- (void)_setCoalescedBundlesAuthorized:(id)a0 bundles:(id)a1;
- (void)_performLocationBasedAlertsConsistencyCheck;
- (void)_performHomeKitConsistencyCheck;
- (void)_performRoutingAndTrafficConsistencyCheck;
- (void)_performSystemCustomizationConsistencyCheck;
- (void)_performWirelessConsistencyCheck;
- (BOOL)hasUltraWideBand;
- (BOOL)_areCoalescedBundlesAuthorized:(id)a0;
- (void)_performConsistencyCheckForBundles:(id)a0 name:(id)a1;
- (id)_productImprovementByBundlePath;
- (void)_setLocationBasedAlertsAuthorized:(id)a0;
- (id)_areLocationBasedAlertsAuthorized;
- (void)_setHomeKitAuthorized:(id)a0;
- (id)_isHomeKitAuthorized;
- (void)_setWirelessAuthorized:(id)a0;
- (id)_isWirelessAuthorized;
- (void)_setRoutingAndTrafficAuthorized:(id)a0;
- (id)_isRoutingAndTrafficAuthorized;
- (void)_setSystemCutomizationAuthorized:(id)a0;
- (id)_isSystemCustomizationAuthorized;
- (void)setStatusEnabled:(id)a0 specifier:(id)a1;
- (id)isStatusEnabled:(id)a0;
- (void)updateImproveMapsSpecifierWithCompletion:(id /* block */)a0;
- (void)_setAddressCorrectionAuthorizationStatus:(id)a0 specifier:(id)a1;
- (id)_readAddressCorrectionAuthorizationStatus:(id)a0;
- (void)_showAddressCorrectionPage;

@end
