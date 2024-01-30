@class HUIconView;
@protocol HFIconDescriptor;

@interface HUServiceIconCell : UICollectionViewCell

@property (readonly, nonatomic) HUIconView *iconView;
@property (nonatomic) BOOL hasConfiguredConstraints;
@property (retain, nonatomic) id<HFIconDescriptor> iconDescriptor;

+ (BOOL)requiresConstraintBasedLayout;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)_updateBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
