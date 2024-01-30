@class GKHairlineView, UICollectionViewCell;

@interface GKShowcaseCellView : UICollectionReusableView

@property (retain, nonatomic) GKHairlineView *underlineView;
@property (retain, nonatomic) UICollectionViewCell *cell;
@property (nonatomic) SEL touchedShowcaseCellAction;

+ (BOOL)requiresConstraintBasedLayout;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForText;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
