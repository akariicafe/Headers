@class NSArray, NSString, HUGridLayoutOptions, UILabel, UIButton;

@interface HUGridSectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSArray *headerCellConstraints;
@property (retain, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)_invalidateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTitleLabel;

@end
