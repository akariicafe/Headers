@class NSString, NAUILayoutConstraintSet, UILayoutGuide, UILabel, UIView;

@interface HUQuickControlCollectionViewCellContainerView : UIView

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) NAUILayoutConstraintSet *constraintSet;
@property (readonly, nonatomic) NAUILayoutConstraintSet *preferredContentFrameConstraintSet;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) unsigned long long titlePosition;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } preferredContentLayoutFrameInset;
@property (readonly, nonatomic) UILayoutGuide *preferredContentFrameLayoutGuide;

+ (id)_titleFont;
+ (BOOL)requiresConstraintBasedLayout;
+ (double)preferredChromeHeightForTitlePosition:(unsigned long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_configureConstraintSets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 titlePosition:(unsigned long long)a1;

@end
