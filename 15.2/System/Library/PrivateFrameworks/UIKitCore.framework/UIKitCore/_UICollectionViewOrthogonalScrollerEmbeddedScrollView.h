@class NSString, UIFocusContainerGuide, UICollectionView;

@interface _UICollectionViewOrthogonalScrollerEmbeddedScrollView : UIScrollView <_UICollectionViewOrthogonalScrollView> {
    UIFocusContainerGuide *_sectionFocusContainerGuide;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long section;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } baseContentInsets;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic, getter=isTracking) BOOL tracking;
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (readonly, nonatomic, getter=isDecelerating) BOOL decelerating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)_edgesPropagatingSafeAreaInsetsToDescendants;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })_panGestureVelocityInView:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })_panGestureLocationInView:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })_pointByRemovingBaseContentInsetsFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_focusedItem:(id)a0 isMinX:(BOOL *)a1 isMaxX:(BOOL *)a2 isMinY:(BOOL *)a3 isMaxY:(BOOL *)a4;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inCoordinateSpace:(id)a1;
- (struct CGPoint { double x0; double x1; })_pointByApplyingBaseContentInsetsToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
