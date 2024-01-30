@class UILayoutGuide, UIImageView, CNUINavigationListStyleApplier, NSLayoutConstraint, UILabel;
@protocol CNUINavigationListStyle;

@interface CNUINavigationListViewCell : UITableViewCell

@property (nonatomic, getter=isAccessoryControlExpanded) BOOL accessoryControlExpanded;
@property (nonatomic, getter=isContentViewConstraintsLoaded) BOOL contentViewConstraintsLoaded;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *subtitleLabelFirstBaselineAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *subtitleLabelLeadingAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *subtitleLabelTrailingAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelFirstBaselineAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelLeadingAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelTrailingAnchorConstraint;
@property (readonly, nonatomic) UILayoutGuide *accessoryImageViewLayoutGuide;
@property (readonly, nonatomic) UILayoutGuide *titleImageViewLayoutGuide;
@property (nonatomic) BOOL showSeparator;
@property (readonly, nonatomic) UIImageView *accessoryImageView;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UIImageView *titleImageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) id<CNUINavigationListStyle> navigationListStyle;
@property (retain, nonatomic) CNUINavigationListStyleApplier *styleApplier;

+ (id)disclosureImage;
+ (id)accessoryImageViewAccessibilityLabel;
+ (id)expandedAccessoryImageViewAccessibilityLabel;
+ (id)highlightedDisclosureImage;
+ (double)subtitleLabelFirstBaselineAnchorConstraintConstantForSubtitle:(id)a0 navigationListStyle:(id)a1;
+ (double)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)a0;
+ (double)contentViewBottomAnchorConstraintConstantForNavigationListStyle:(id)a0;
+ (struct CGSize { double x0; double x1; })desiredContentSizeForTitle:(id)a0 subTitle:(id)a1 navigationListStyle:(id)a2;
+ (id)reuseIdentifier;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)updateConstraintsConstants;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSeparatorStyle:(long long)a0;
- (void)updateVisualStateAnimated:(BOOL)a0;
- (void)setAccessoryControlExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)loadContentView;
- (void)dealloc;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)styleUpdated;
- (id)initWithCoder:(id)a0;
- (void)applyStyle;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (double)minimumContentHeight;
- (double)contentViewBottomAnchorConstraintConstant;
- (double)subtitleLabelFirstBaselineAnchorConstraintConstant;
- (void)setupAccessoryImageViewInView:(id)a0;
- (double)titleLabelFirstBaselineAnchorConstraintConstant;
- (void)loadContentViewConstraints;

@end
