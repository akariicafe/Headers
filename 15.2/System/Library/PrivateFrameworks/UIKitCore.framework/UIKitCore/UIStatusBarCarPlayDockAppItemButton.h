@class NSString, UIImageView, NSLayoutConstraint;

@interface UIStatusBarCarPlayDockAppItemButton : UIButton <NSCopying> {
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_widthConstraint;
}

@property (nonatomic, getter=isActive) BOOL active;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *iconHighlightImageView;
@property (retain, nonatomic) UIImageView *badgeView;
@property (readonly, nonatomic) BOOL itemHasBundleIdentifier;
@property (nonatomic) BOOL hasBadge;

- (float)charge;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCharge:(float)a0;
- (void)_buttonPressed:(id)a0;
- (BOOL)shouldShowBadge;
- (void)setBadgeHidden:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;

@end
