@interface VUIDirectScrollCollectionView : UICollectionView

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (BOOL)canBecomeFocused;
- (double)_tapScrollDelta;
- (void)_upArrowAction:(id)a0;
- (void)_downArrowAction:(id)a0;

@end
