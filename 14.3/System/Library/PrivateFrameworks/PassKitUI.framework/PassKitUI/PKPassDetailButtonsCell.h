@class PKPaymentPassActionWidgetView;

@interface PKPassDetailButtonsCell : PKTableViewCell {
    PKPaymentPassActionWidgetView *_widgetView;
}

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0 widgetViewStyle:(unsigned long long)a1;
- (void)layoutSubviews;
- (void)setCurrentUser:(id)a0;
- (void)setPeerPaymentAccount:(id)a0;
- (void)setDelegate:(id)a0;
- (void)setPaymentPass:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
