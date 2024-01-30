@class CTCellularPlanManager, CTCellularPlanPendingTransfer;

@interface PSUIPlanPendingTransferActivationButtonSpecifier : PSSpecifier

@property (retain, nonatomic) CTCellularPlanPendingTransfer *plan;
@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager;

- (void).cxx_destruct;
- (id)initWithListController:(id)a0 planPendingTransfer:(id)a1;
- (void)setSpecifierProperties;
- (void)activatePlanPendingTransfer:(id)a0;

@end
