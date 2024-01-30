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

- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canBecomeFocused;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_buttonPressed:(id)a0;
- (BOOL)shouldShowBadge;
- (float)charge;
- (void)setBadgeHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setCharge:(float)a0;

@end
