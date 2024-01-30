@class NSString, UIButton;

@interface PKPaymentPreferenceButtonCell : PKPaymentPreferenceCell {
    UIButton *_button;
}

@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSString *buttonTitle;

- (void)buttonTapped:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)pk_childrenForAppearance;

@end
