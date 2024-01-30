@class NSString, UIBezierPath, CAShapeLayer, PKStrokeSelection;
@protocol PKSelectionRenderingDelegate;

@interface PKLassoRenderer : NSObject <PKSelectionRendering> {
    CAShapeLayer *_lassoLayer;
    CAShapeLayer *_whiteLassoLayer;
    struct CGPoint { double x; double y; } _editMenuLocation;
}

@property (retain, nonatomic) PKStrokeSelection *strokeSelection;
@property (weak, nonatomic) id<PKSelectionRenderingDelegate> renderingDelegate;
@property (copy, nonatomic) id /* block */ calculateSelectionHullBlock;
@property (retain, nonatomic) UIBezierPath *lassoPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (struct CGColor { } *)_selectionColor;
- (id)_accessibilityUserTestingChildren;
- (void)_setupSelectionAdornment;
- (struct CGPoint { double x0; double x1; })editMenuLocation;
- (void)_didEndDraggingSelection;
- (void)_didBeginDraggingSelection;
- (id)initWithStrokeSelection:(id)a0 renderingDelegate:(id)a1;
- (id)initForLiveSelectionWithRenderingDelegate:(id)a0;
- (id)adornmentLayer;
- (void)_renderLiveSelectionPath:(struct CGPath { } *)a0 forStrokes:(id)a1 inDrawing:(id)a2 liveScrollOffset:(struct CGPoint { double x0; double x1; })a3;
- (void)_setupLiveLasso;
- (void)_updateLassoForAccessibility:(id)a0;
- (void)_setupAnimatedLasso;
- (void)addAnimationsToSelectionLayer:(id)a0 whiteLayer:(id)a1;
- (void)_updateSelectionPath:(struct CGPath { } *)a0;
- (void)_setupLassoLayerAppearanceWithBezierPath:(id)a0;
- (void)_setupAccessibilityObservers;
- (void)_setupAnimatedLassoForStrokes:(id)a0 lassoLayer:(id)a1 whiteLassoLayer:(id)a2 isSelection:(BOOL)a3 lassoStroke:(id)a4;
- (struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint *x0; } x2; })pointsOfInterestForStrokes:(id)a0;
- (id)_expandBezierPathIfNecessary:(id)a0;

@end
