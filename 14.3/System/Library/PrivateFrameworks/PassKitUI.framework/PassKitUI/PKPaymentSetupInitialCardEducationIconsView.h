@class UIImageView;

@interface PKPaymentSetupInitialCardEducationIconsView : UIView {
    UIImageView *_applePayIcon;
    UIImageView *_contactlessIcon;
    struct CGSize { double width; double height; } _applePayIconSize;
    struct CGSize { double width; double height; } _contactlessIconSize;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
