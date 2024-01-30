@interface VUIDirectScrollCollectionView : UICollectionView

- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)_downArrowAction:(id)a0;
- (void)_upArrowAction:(id)a0;
- (double)_tapScrollDelta;

@end
