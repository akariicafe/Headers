@class CALayer, GKCollectionViewCell, NSArray;

@interface GKEditActionsView : UIView

@property (nonatomic) double visibleWidth;
@property (retain, nonatomic) CALayer *maskLayer;
@property (nonatomic) GKCollectionViewCell *cell;
@property (retain, nonatomic) NSArray *editActionConstraints;
@property (retain, nonatomic) NSArray *actionButtons;

- (void).cxx_destruct;
- (void)didTouchEditAction:(id)a0;
- (void)didTouchMoreEditAction:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cell:(id)a1;
- (void)prepareActionButtons;

@end
