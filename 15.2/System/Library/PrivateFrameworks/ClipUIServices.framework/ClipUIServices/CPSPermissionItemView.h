@class UISwitch, UIVisualEffectView, UIView;

@interface CPSPermissionItemView : UIStackView {
    UIVisualEffectView *_switchWithLabelVisualEffectView;
    UIView *_switchWithLabelBackgroundView;
    UISwitch *_permissionSwitch;
    BOOL _blurEffectNeedsUpdate;
}

@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic) BOOL hasBlurEffect;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setUpSwitchWithLabel:(id)a0;
- (id)initWithTitle:(id)a0 label:(id)a1 description:(id)a2;

@end
