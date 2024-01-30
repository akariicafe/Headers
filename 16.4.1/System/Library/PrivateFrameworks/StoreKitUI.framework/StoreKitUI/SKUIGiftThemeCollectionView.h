@interface SKUIGiftThemeCollectionView : UICollectionView

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } visibleBoundsInsets;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleBounds;

@end
