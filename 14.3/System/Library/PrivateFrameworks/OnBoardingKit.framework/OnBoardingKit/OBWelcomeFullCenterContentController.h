@class NSLayoutConstraint, NSArray, UIView;

@interface OBWelcomeFullCenterContentController : OBWelcomeController

@property (retain, nonatomic) UIView *centerContentView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewOptionalHeightAnchor;
@property (nonatomic) double contentViewMaxHeight;
@property (retain, nonatomic) NSArray *floatingConstraintGroup;
@property (retain, nonatomic) NSArray *pinnedConstraintGroup;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)insertCenterContentView;
- (double)_availablePreScrollContentHeight;
- (void)recalculateLayoutForTraitCollectionChange;
- (void)setCenteredContentView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
