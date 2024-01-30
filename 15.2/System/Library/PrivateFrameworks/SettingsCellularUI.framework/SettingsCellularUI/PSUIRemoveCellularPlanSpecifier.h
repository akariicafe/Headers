@class CTCellularPlanManager, PSUICellularPlanUniversalReference, PSListController, PSUICellularPlanManagerCache;

@interface PSUIRemoveCellularPlanSpecifier : PSConfirmationSpecifier

@property (retain, nonatomic) PSUICellularPlanUniversalReference *planReference;
@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager;
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache;
@property (weak, nonatomic) PSListController *hostController;
@property (nonatomic) BOOL popViewControllerOnPlanDeletion;

- (void)alignLeft;
- (id)initWithPlanUniversalReference:(id)a0 cellularPlanManager:(id)a1 planManagerCache:(id)a2 hostController:(id)a3 popViewControllerOnPlanDeletion:(BOOL)a4;
- (void)removeCellularPlanConfirmed:(id)a0;
- (void).cxx_destruct;
- (void)removeCellularPlan:(id)a0;

@end
