@class PKPaymentSetupFieldLabel, UIButton;
@protocol PKPaymentSetupFieldFooterViewDelegate;

@interface PKPaymentSetupFieldFooterView : UITableViewHeaderFooterView {
    UIButton *_button;
}

@property (retain, nonatomic) PKPaymentSetupFieldLabel *field;
@property (weak, nonatomic) id<PKPaymentSetupFieldFooterViewDelegate> delegate;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateDisplayForFieldTypeLabel;
- (void)_buttonTapped;

@end
