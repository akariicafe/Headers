@class UIScrollView;
@protocol SXTextTangierInteractiveCanvasControllerDataSource;

@interface SXTextTangierInteractiveCanvasController : TSWPInteractiveCanvasController

@property (nonatomic) BOOL startedEditing;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL mightScrollToTop;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<SXTextTangierInteractiveCanvasControllerDataSource> dataSource;
@property (nonatomic) BOOL forceLayoutAndRenderOnThread;
@property (nonatomic) BOOL isSelecting;

+ (void)createCanvasWithDelegate:(id)a0 outICC:(id *)a1 outLayerHost:(id *)a2 iccClass:(Class)a3 layerHostClass:(Class)a4;

- (void)teardown;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (id)hitRep:(struct CGPoint { double x0; double x1; })a0 withGesture:(id)a1 passingTest:(id /* block */)a2;
- (void)setSelection:(id)a0 onModel:(id)a1 withFlags:(unsigned long long)a2;
- (void)endUISession;
- (id)topLevelRepsForHitTesting;
- (id)i_topLevelLayersForTiling;
- (BOOL)p_currentlyScrolling;
- (void)didBeginEditingText;
- (id)closestRepToPoint:(struct CGPoint { double x0; double x1; })a0 forStorage:(id)a1;
- (BOOL)p_shouldLayoutAndRenderOnThreadForcePendingLayout:(BOOL)a0;

@end
