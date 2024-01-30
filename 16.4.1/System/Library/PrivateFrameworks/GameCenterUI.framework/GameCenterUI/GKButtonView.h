@class UIButton, NSMutableArray, GKCollectionViewDataSource;

@interface GKButtonView : UICollectionReusableView

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSMutableArray *buttonConstraints;
@property (retain, nonatomic) GKCollectionViewDataSource *dataSource;
@property (nonatomic) SEL action;

+ (BOOL)requiresConstraintBasedLayout;
+ (void)registerSupplementaryViewClassesForKind:(id)a0 withCollectionView:(id)a1;

- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)buttonPressed:(id)a0;

@end
