@class CTCellularPlanPendingTransfer, UIActivityIndicatorView;

@interface PSUIPlanPendingTransferActivatingTableCell : PSUIDanglingPlanTableCell

@property (retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)_setStatusLabelText;

@end
