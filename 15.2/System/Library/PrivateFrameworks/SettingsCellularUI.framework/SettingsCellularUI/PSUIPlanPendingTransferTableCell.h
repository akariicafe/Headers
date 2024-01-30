@class UIImageView, CTCellularPlanPendingTransfer;

@interface PSUIPlanPendingTransferTableCell : PSUIDanglingPlanTableCell

@property (retain, nonatomic) UIImageView *view;
@property (retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;

@end
