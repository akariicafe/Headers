@class NSLayoutConstraint, UIColor, UIView;

@interface TPTableViewCell : UITableViewCell

@property (nonatomic, getter=isAccessiblityConstraintsEnabled) BOOL accessiblityConstraintsEnabled;
@property (nonatomic, getter=isConstraintsLoaded) BOOL constraintsLoaded;
@property (nonatomic, getter=isForegroundViewLoaded) BOOL foregroundViewLoaded;
@property (retain, nonatomic) UIView *foregroundView;
@property (readonly, nonatomic) NSLayoutConstraint *foregroundViewLeadingAnchorLayoutConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *foregroundViewTrailingAnchorLayoutConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *foregroundViewTopAnchorLayoutConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *foregroundViewBottomAnchorLayoutConstraint;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } intrinsicSeparatorInset;

+ (BOOL)requiresConstraintBasedLayout;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInsetForContentSizeCategory:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadContentView;
- (void)updateConstraintsConstants;
- (void)updateFonts;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)loadConstraints;
- (void)unloadConstraints;

@end
