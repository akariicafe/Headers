@class PSSpecifier, PSListController;

@interface PSUISubscriptionContextMenusProductionFactory : NSObject <PSUISubscriptionContextMenusFactory>

@property (weak, nonatomic) PSListController *hostController;
@property (weak, nonatomic) PSSpecifier *parentSpecifier;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (nonatomic) BOOL popViewControllerOnPlanRemoval;

- (void).cxx_destruct;
- (BOOL)shouldPopViewControllerOnPlanRemoval;
- (id)createCallingSubgroup;
- (id)createCarrierSpaceSubgroup;
- (id)createNetworkSelectionSubgroup;
- (id)createMyNumberSubgroup;
- (id)createNetworkSettingsSubgroup;
- (id)createSimSubgroup;
- (id)createCallCache;
- (id)createSimStatusCache;
- (id)createCarrierBundleCache;
- (id)createDataCache;
- (id)createCellularPlanManagerCache;
- (id)createCellularPlanManager;
- (id)createDataModeSubgroup;
- (id)createRoamingSpecifiersSubgroup;
- (id)initWithHostController:(id)a0 parentSpecifier:(id)a1 groupSpecifier:(id)a2 popViewControllerOnPlanRemoval:(BOOL)a3;

@end
