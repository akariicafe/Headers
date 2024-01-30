@class PSSpecifier, NSString, PSListController;

@interface PSUICellularDataPlanDetailGroup : NSObject <PSSpecifierGroup>

@property (weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configurePlanSpecifiers:(id)a0 planItem:(id)a1 target:(id)a2;
+ (id)accountManageButtonForPlanItem:(id)a0 target:(id)a1;
+ (id)specifiersFromCellularPlanItem:(id)a0 target:(id)a1;

- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (void).cxx_destruct;
- (id)specifiers;
- (void)managePlanPressed:(id)a0;
- (id)getPlanPurchaseDate:(id)a0;
- (id)getPlanExpireDate:(id)a0;
- (id)getPlanStatusDate:(id)a0;
- (id)getPlanCellDataNumber:(id)a0;
- (id)localizedManageAccountAlertTitle:(id)a0;
- (id)removeCellularPlanConfirmationTitle:(id)a0;
- (id)removeCellularPlanConfirmationMessage:(id)a0;
- (id)lastUpdatedText;
- (id)getPlanDetailedStatus:(id)a0;
- (id)getPlanStatus:(id)a0;
- (id)getPlanStatusDataOnly:(id)a0;

@end
