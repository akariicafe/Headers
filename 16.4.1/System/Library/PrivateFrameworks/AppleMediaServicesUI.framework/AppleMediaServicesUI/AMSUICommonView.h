@class NSString;

@interface AMSUICommonView : UIView

@property (nonatomic) unsigned long long edgesPropagatingSafeAreaInsetsToSubviews;
@property (readonly, nonatomic) NSString *accessibilityElementLabel;

- (id)accessibilityLabel;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToSubviews;
- (id)tintColor;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setup;
- (id)init;
- (void).cxx_destruct;

@end
