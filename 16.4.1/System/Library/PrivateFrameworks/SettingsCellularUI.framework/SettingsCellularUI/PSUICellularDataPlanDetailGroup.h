@class TSSIMSetupFlow, PSSpecifier, NSString, PSListController;

@interface PSUICellularDataPlanDetailGroup : NSObject <TSSIMSetupDelegate, PSSpecifierGroup> {
    TSSIMSetupFlow *_flow;
}

@property (weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accountManageButtonForPlanItem:(id)a0 target:(id)a1;
+ (void)configurePlanSpecifiers:(id)a0 planItem:(id)a1 target:(id)a2;
+ (id)specifiersFromCellularPlanItem:(id)a0 target:(id)a1;

- (id)getLogger;
- (id)specifiers;
- (void).cxx_destruct;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (id)lastUpdatedText;
- (id)getPlanCellDataNumber:(id)a0;
- (id)getPlanDetailedStatus:(id)a0;
- (id)getPlanExpireDate:(id)a0;
- (id)getPlanPurchaseDate:(id)a0;
- (id)getPlanStatus:(id)a0;
- (id)getPlanStatusDataOnly:(id)a0;
- (id)getPlanStatusDate:(id)a0;
- (void)handleAccountSettingsTapped:(id)a0;
- (void)handleRemovePlanTapped:(id)a0;
- (BOOL)isFlowRunning;
- (id)localizedManageAccountAlertTitle:(id)a0;
- (void)managePlanPressed:(id)a0;
- (id)removeCellularPlanConfirmationMessage:(id)a0;
- (id)removeCellularPlanConfirmationTitle:(id)a0;
- (void)simSetupFlowCompleted:(unsigned long long)a0;

@end
