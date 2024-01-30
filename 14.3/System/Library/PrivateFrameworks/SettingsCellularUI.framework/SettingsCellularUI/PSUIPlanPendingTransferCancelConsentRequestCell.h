@class CTCellularPlanManager, CTCellularPlanPendingTransfer, UILabel, UIButton;

@interface PSUIPlanPendingTransferCancelConsentRequestCell : PSTableCell

@property (retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer;
@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *rightMargin;
@property (retain, nonatomic) UILabel *requestSentLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (void)cancelPressed;

@end
