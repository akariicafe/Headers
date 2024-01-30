@class UIFocusContainerGuide, UICollectionView;

@interface _UICollectionViewOrthogonalScrollerEmbeddedScrollView : UIScrollView {
    UIFocusContainerGuide *_sectionFocusContainerGuide;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long section;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_focusedItem:(id)a0 isMinX:(BOOL *)a1 isMaxX:(BOOL *)a2 isMinY:(BOOL *)a3 isMaxY:(BOOL *)a4;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_configureSectionFocusContainerGuide;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inCoordinateSpace:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
