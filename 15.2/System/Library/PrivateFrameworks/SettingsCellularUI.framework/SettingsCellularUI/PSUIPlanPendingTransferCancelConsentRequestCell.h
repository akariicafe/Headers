@class CTCellularPlanManager, CTCellularPlanPendingTransfer;

@interface PSUIPlanPendingTransferCancelConsentRequestCell : PSTableCell

@property (retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer;
@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager;

- (void)cancelPressed;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;

@end
