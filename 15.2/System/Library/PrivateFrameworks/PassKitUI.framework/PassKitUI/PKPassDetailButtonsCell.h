@class PKPaymentPassActionWidgetView;

@interface PKPassDetailButtonsCell : PKTableViewCell {
    PKPaymentPassActionWidgetView *_widgetView;
}

- (void)layoutSubviews;
- (void)setCurrentUser:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setDelegate:(id)a0;
- (void)setPeerPaymentAccount:(id)a0;
- (void).cxx_destruct;
- (void)setPaymentPass:(id)a0;
- (BOOL)hasEnabledWidgets;
- (id)initWithReuseIdentifier:(id)a0 widgetViewStyle:(unsigned long long)a1;

@end
