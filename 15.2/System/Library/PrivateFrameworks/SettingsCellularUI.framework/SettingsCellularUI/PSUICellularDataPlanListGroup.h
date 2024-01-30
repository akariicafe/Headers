@class PSSpecifier, NSString, PSListController;

@interface PSUICellularDataPlanListGroup : NSObject <PSSpecifierGroup>

@property (weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void).cxx_destruct;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (void)setUpPendingTransferPlanSpecifiers:(id)a0;
- (void)addNewPlanPressed:(id)a0;
- (void)selectPlanWithSpecifier:(id)a0;
- (void)listController:(id)a0 didSelectSpecifier:(id)a1;

@end
