@class NSLayoutConstraint, NSArray, UIView;

@interface OBWelcomeFullCenterContentController : OBWelcomeController

@property (retain, nonatomic) UIView *centerContentView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewOptionalHeightAnchor;
@property (nonatomic) double contentViewMaxHeight;
@property (retain, nonatomic) NSArray *floatingConstraintGroup;
@property (retain, nonatomic) NSArray *pinnedConstraintGroup;

- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)setCenteredContentView:(id)a0;
- (double)_availablePreScrollContentHeight;
- (void)insertCenterContentView;
- (void)recalculateLayoutForTraitCollectionChange;

@end
