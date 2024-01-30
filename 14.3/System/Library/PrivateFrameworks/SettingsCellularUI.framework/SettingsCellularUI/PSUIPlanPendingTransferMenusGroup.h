@class PSSpecifier, NSString, CTCellularPlanPendingTransfer, CTCellularPlanManager, PSListController, PSUICellularPlanManagerCache;

@interface PSUIPlanPendingTransferMenusGroup : NSObject <PSSpecifierGroup>

@property (retain, nonatomic) PSSpecifier *parentSpecifier;
@property (retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (weak, nonatomic) PSListController *listController;
@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager;
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (void).cxx_destruct;
- (id)specifiers;
- (void)addSpecifierForHeaderString:(id)a0;
- (id)activatePlanSpecifier;
- (id)planPendingTransferLabel:(id)a0;
- (id)planPendingTransferNumber:(id)a0;
- (void)removePlanPendingTransfer:(id)a0;
- (id)cancelConsentRequestSpecifier;
- (id)planActivationInfo;
- (id)initWithHostController:(id)a0 parentSpecifier:(id)a1;

@end
