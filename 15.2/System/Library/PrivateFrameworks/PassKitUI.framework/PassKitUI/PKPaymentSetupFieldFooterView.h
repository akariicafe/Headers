@class PKPaymentSetupFieldLabel, UIButton;
@protocol PKPaymentSetupFieldFooterViewDelegate;

@interface PKPaymentSetupFieldFooterView : UITableViewHeaderFooterView {
    UIButton *_button;
}

@property (retain, nonatomic) PKPaymentSetupFieldLabel *field;
@property (weak, nonatomic) id<PKPaymentSetupFieldFooterViewDelegate> delegate;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_buttonTapped;
- (void)_updateDisplayForFieldTypeLabel;

@end
