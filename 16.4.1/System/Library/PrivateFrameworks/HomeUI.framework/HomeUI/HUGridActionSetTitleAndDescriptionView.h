@class NSArray, UILabel, NSLayoutConstraint;

@interface HUGridActionSetTitleAndDescriptionView : UIView

@property (retain, nonatomic) NSArray *titleAndDescriptionConstraints;
@property (retain, nonatomic) NSLayoutConstraint *titleDescriptionSpacingConstraint;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (nonatomic) double titleDescriptionLineSpacing;

+ (BOOL)requiresConstraintBasedLayout;

- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 titleLabelSuperview:(id)a1;
- (void)setTitleAndDescriptionLabelTintColor:(id)a0;
- (void)updateTitleText:(id)a0 descriptionText:(id)a1;

@end
