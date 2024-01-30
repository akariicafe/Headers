@class NSString, UIButton;

@interface PKPaymentPreferenceButtonCell : PKPaymentPreferenceCell {
    UIButton *_button;
}

@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSString *buttonTitle;

- (void).cxx_destruct;
- (void)dealloc;
- (id)pk_childrenForAppearance;
- (void)buttonTapped:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithReuseIdentifier:(id)a0;

@end
