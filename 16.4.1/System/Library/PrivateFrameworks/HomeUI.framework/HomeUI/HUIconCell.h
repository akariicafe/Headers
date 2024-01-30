@class UIColor, UIView, NSArray, HFItem, NSString, HUIconCellContentMetrics, UILayoutGuide, UILabel, HUIconView;
@protocol HUResizableCellDelegate;

@interface HUIconCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>

@property (retain, nonatomic) NSArray *staticConstraints;
@property (retain, nonatomic) NSArray *dynamicConstraints;
@property (retain, nonatomic) NSArray *iconSpacingConstraints;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) UILayoutGuide *iconSpacingLayoutGuide;
@property (nonatomic) BOOL hideIcon;
@property (retain, nonatomic) UIColor *iconForegroundColor;
@property (nonatomic) BOOL iconForegroundColorFollowsTintColor;
@property (nonatomic) double iconAlpha;
@property (retain, nonatomic) HUIconCellContentMetrics *contentMetrics;
@property (nonatomic) unsigned long long iconDisplayStyle;
@property (nonatomic) BOOL iconTintColorFollowsDisabledState;
@property (nonatomic) BOOL separatorInsetLinesUpWithText;
@property (nonatomic) BOOL disableContinuousIconAnimation;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UILabel *detailTextLabel;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) BOOL disabled;

+ (BOOL)requiresConstraintBasedLayout;

- (void)_createIconView;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)_updateIcon;
- (void).cxx_destruct;
- (void)_invalidateDynamicConstraints;
- (id)_verticalConstraintsForContentSubview:(id)a0;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
