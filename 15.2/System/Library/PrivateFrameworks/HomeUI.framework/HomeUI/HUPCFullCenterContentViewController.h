@class NSLayoutConstraint, NSArray, UIView;

@interface HUPCFullCenterContentViewController : PRXCardContentViewController

@property (retain, nonatomic) UIView *centerContentView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewOptionalHeightAnchor;
@property (nonatomic) double contentViewMaxHeight;
@property (retain, nonatomic) NSArray *floatingConstraintGroup;
@property (retain, nonatomic) NSArray *pinnedConstraintGroup;

- (void)viewDidLoad;
- (void)setCenteredContentView:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)insertCenterContentView;
- (void)recalculateLayoutForTraitCollectionChange;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;

@end
