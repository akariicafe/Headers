@class CTCellularPlanPendingTransfer;

@interface PSUIPlanPendingTransferActivatingTableCell : PSUIDanglingPlanTableCell

@property (retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)_setStatusLabelText;

@end
