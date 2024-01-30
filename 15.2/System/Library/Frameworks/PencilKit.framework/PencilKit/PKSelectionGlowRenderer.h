@class NSString, NSMutableDictionary, UIBezierPath, CALayer, PKSelectionModificationKnob, PKStrokeSelection;
@protocol PKSelectionRenderingDelegate;

@interface PKSelectionGlowRenderer : NSObject <PKSelectionRendering> {
    CALayer *_highlightLayer;
    CALayer *_strokePathsTilesLayer;
    PKSelectionModificationKnob *_leftKnob;
    PKSelectionModificationKnob *_rightKnob;
    long long _knobDragMode;
    BOOL _isDraggingKnob;
    long long _draggedKnobLocation;
    NSMutableDictionary *_tiles;
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
