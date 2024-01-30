@class UISwitch, UIVisualEffectView, UIView;

@interface CPSPermissionItemView : UIStackView {
    UIVisualEffectView *_switchWithLabelVisualEffectView;
    UIView *_switchWithLabelBackgroundView;
    UISwitch *_permissionSwitch;
    BOOL _blurEffectNeedsUpdate;
}

@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic) BOOL hasBlurEffect;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 label:(id)a1 description:(id)a2;
- (void)setUpSwitchWithLabel:(id)a0;

@end
