@class PSUICoreTelephonyDataCache, PSUICoreTelephonyCarrierBundleCache, PSUISIMSubgroup, PSUICoreTelephonyCallCache, PSUIMyNumberSubgroup, PSUIDevicePasscodeState, PSUICallingSubgroup, PSUICarrierSpaceGroup, CTCellularPlanManager, NSString, PSUIDataModeSubgroup, PSUICellularPlanManagerCache, PSSimStatusCache, PSUINetworkSelectionSubgroup, PSUINetworkSettingsSubgroup, PSListController, PSSpecifier, PSUICellularDataOptionsController;

@interface PSUISubscriptionContextMenusGroup : NSObject <PSSpecifierGroup>

@property (weak, nonatomic) PSListController *listController;
@property (nonatomic) BOOL popViewControllerOnFinished;
@property (retain, nonatomic) PSUICallingSubgroup *callingSubgroup;
@property (retain, nonatomic) PSUICarrierSpaceGroup *carrierSpaceSubgroup;
@property (retain, nonatomic) PSUINetworkSelectionSubgroup *networkSelectionSubgroup;
@property (retain, nonatomic) PSUIMyNumberSubgroup *myNumberSubgroup;
@property (retain, nonatomic) PSUINetworkSettingsSubgroup *networkSettingsSubgroup;
@property (retain, nonatomic) PSUISIMSubgroup *simSubgroup;
@property (retain, nonatomic) PSUIDataModeSubgroup *dataModeSubgroup;
@property (retain, nonatomic) PSUICoreTelephonyCallCache *callCache;
@property (retain, nonatomic) PSSimStatusCache *simStatusCache;
@property (retain, nonatomic) PSUICoreTelephonyCarrierBundleCache *carrierBundleCache;
@property (retain, nonatomic) PSUICoreTelephonyDataCache *dataCache;
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache;
@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager;
@property (retain, nonatomic) PSUICellularDataOptionsController *roamingSpecifiersSubgroup;
@property (retain, nonatomic) PSUIDevicePasscodeState *passcodeStatusCache;
@property (retain, nonatomic) PSSpecifier *parentSpecifier;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void).cxx_destruct;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (id)initWithFactory:(id)a0;
- (void)viewWillAppear;
- (BOOL)planManagerCacheHasMoreThanOnePlanItem;

@end
