@class NSString, UIBezierPath, CAShapeLayer, PKStrokeSelection;
@protocol PKSelectionRenderingDelegate;

@interface PKSelectionHighlightRenderer : NSObject <PKSelectionRendering> {
    CAShapeLayer *_highlightLayer;
}

@property (retain, nonatomic) PKStrokeSelection *strokeSelection;
@property (weak, nonatomic) id<PKSelectionRenderingDelegate> renderingDelegate;
@property (retain, nonatomic) UIBezierPath *lassoPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_accessibilityUserTestingChildren;
- (id)_highlightColor;
- (void)_setupSelectionAdornment;
- (struct CGPoint { double x0; double x1; })editMenuLocation;
- (void)_didEndDraggingSelection;
- (void)_didBeginDraggingSelection;
- (void)_setupHighlightIfNecessary;
- (id)initWithStrokeSelection:(id)a0 renderingDelegate:(id)a1;
- (id)initForLiveSelectionWithRenderingDelegate:(id)a0;
- (id)adornmentLayer;
- (void)_renderLiveSelectionPath:(const struct CGPath { } *)a0 forStrokes:(id)a1 inDrawing:(id)a2 liveScrollOffset:(struct CGPoint { double x0; double x1; })a3;
- (id)_bezierPathForStrokes:(id)a0;

@end
