@class UILabel;

@interface PKPaymentAuthorizationNavigationBar : UINavigationBar {
    UILabel *_environmentLabel;
}

+ (id)_leftBarButtonItemWithImage:(id)a0;
+ (id)applePayBarButtonItem;
+ (id)cardOnFileBarButtonItemForRequestor:(unsigned long long)a0;

- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)didUpdateInterfaceStyle;

@end
