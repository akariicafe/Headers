@class NSArray, UILabel, NSLayoutConstraint, UIButton;

@interface PUSearchResultsSectionHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) NSArray *smallAndMediumTextSizeConstraints;
@property (retain, nonatomic) NSArray *largeTextSizeConstraints;
@property (retain, nonatomic) NSLayoutConstraint *titleCompactLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleRegularLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonCompactTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonRegularTrailingConstraint;
@property (nonatomic) BOOL largeTextSizeConstraintsAreActive;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIButton *button;

+ (double)headerViewHeight;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setupConstraintsForTextSize;
- (void)setupLargeTextConstaints;
- (void)setupSmallAndMediumTextConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;

@end
