@class RTRoutineManager, NSString, PSSpecifier;

@interface PUILocationSystemServicesListController : PUILocationServicesListController

@property (retain, nonatomic) RTRoutineManager *routineManager;
@property (retain, nonatomic) PSSpecifier *productImprovementGroup;
@property (retain, nonatomic) NSString *currentCoreRoutineStatus;
@property (retain, nonatomic) NSString *coreRoutineAppKey;
@property (retain, nonatomic) NSString *specifierIDBeforeCoreRoutine;

+ (id)wirelessBundles;
+ (id)homeKitBundles;
+ (id)improveMapsBundles;
+ (id)locationBasedAlertBundles;
+ (id)routingAndTrafficBundles;
+ (id)systemCustomizationBundles;
+ (int)systemServicesLocationUsage;

- (void)dealloc;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_areCoalescedBundlesAuthorized:(id)a0;
- (id)_homeKitBundles;
- (void)_performHomeKitConsistencyCheck;
- (id)_productImprovementByBundlePath;
- (id)_areLocationBasedAlertsAuthorized;
- (id)_isHomeKitAuthorized;
- (id)_isRoutingAndTrafficAuthorized;
- (id)_isSystemCustomizationAuthorized;
- (id)_isWirelessAuthorized;
- (id)_locationBasedAlertBundles;
- (void)_performConsistencyCheckForBundles:(id)a0 name:(id)a1;
- (void)_performConsistencyCheckValue:(id)a0 bundles:(id)a1 name:(id)a2;
- (void)_performLocationBasedAlertsConsistencyCheck;
- (void)_performRoutingAndTrafficConsistencyCheck;
- (void)_performSystemCustomizationConsistencyCheck;
- (void)_performWirelessConsistencyCheck;
- (id)_readAddressCorrectionAuthorizationStatus:(id)a0;
- (id)_routingAndTrafficBundles;
- (void)_setAddressCorrectionAuthorizationStatus:(id)a0 specifier:(id)a1;
- (void)_setCoalescedBundlesAuthorized:(id)a0 bundles:(id)a1;
- (void)_setHomeKitAuthorized:(id)a0;
- (void)_setLocationBasedAlertsAuthorized:(id)a0;
- (void)_setRoutingAndTrafficAuthorized:(id)a0;
- (void)_setSystemCutomizationAuthorized:(id)a0;
- (void)_setWirelessAuthorized:(id)a0;
- (void)_showAddressCorrectionPage;
- (id)coreRoutineEnabledStatus:(id)a0;
- (BOOL)hasUltraWideBand;
- (void)insertCoreRoutineSpecifier;
- (id)isStatusEnabled:(id)a0;
- (void)setStatusEnabled:(id)a0 specifier:(id)a1;
- (void)updateCoreRoutineEnabledStatusAndInsertSpecifier:(BOOL)a0;
- (void)updateCoreRoutineSigLocationSpecifier;
- (void)updateImproveMapsSpecifierWithCompletion:(id /* block */)a0;

@end
