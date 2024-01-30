@class HULegibilityLabel, UIVisualEffectView, NSArray, NSString, _UILegibilitySettings;

@interface HUCameraBadgeView : UIView

@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) HULegibilityLabel *label;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) UIVisualEffectView *blurEffectView;
@property (readonly, nonatomic) UIVisualEffectView *vibrancyEffectView;
@property (retain, nonatomic) NSArray *staticConstraints;
@property (retain, nonatomic) NSArray *labelConstraints;
@property (copy, nonatomic) NSString *labelText;

+ (BOOL)requiresConstraintBasedLayout;

- (id)initWithSize:(unsigned long long)a0;
- (void)updateConstraints;
- (void).cxx_destruct;

@end
