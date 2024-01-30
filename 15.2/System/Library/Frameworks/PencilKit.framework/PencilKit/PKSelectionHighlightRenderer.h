@class NSString, UIBezierPath, CAShapeLayer, PKStrokeSelection;
@protocol PKSelectionRenderingDelegate;

@interface PKSelectionHighlightRenderer : NSObject <PKSelectionRendering> {
    CAShapeLayer *_highlightLayer;
    UIBezierPath *_lassoPath;
    PKStrokeSelection *_strokeSelection;
    id<PKSelectionRenderingDelegate> _renderingDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_accessibilityUserTestingChildren;
- (void).cxx_destruct;
- (void)_setupSelectionAdornment;
- (id)lassoPath;
- (struct CGPoint { double x0; double x1; })editMenuLocation;
- (void)_didEndDraggingSelection;
- (void)_didBeginDraggingSelection;
- (id)initWithStrokeSelection:(id)a0 renderingDelegate:(id)a1;
- (id)initForLiveSelectionWithRenderingDelegate:(id)a0;
- (id)adornmentLayer;
- (void)_renderLiveSelectionPath:(const struct CGPath { } *)a0 forStrokes:(id)a1 inDrawing:(id)a2 liveScrollOffset:(struct CGPoint { double x0; double x1; })a3;

@end
