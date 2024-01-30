@class NSString, UIBezierPath, NSMutableDictionary, CALayer, PKSelectionModificationKnob, PKStrokeSelection;
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
}

@property (retain, nonatomic) PKStrokeSelection *strokeSelection;
@property (weak, nonatomic) id<PKSelectionRenderingDelegate> renderingDelegate;
@property (retain, nonatomic) UIBezierPath *lassoPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedStrokePathCache;

- (void).cxx_destruct;
- (id)_accessibilityUserTestingChildren;
- (struct CGColor { } *)_highlightColor;
- (void)_setupSelectionAdornment;
- (struct CGPoint { double x0; double x1; })editMenuLocation;
- (void)_didEndDraggingSelection;
- (void)_didBeginDraggingSelection;
- (void)_setupHighlightIfNecessary;
- (void)setKnobsVisible:(BOOL)a0;
- (void)_createPathAroundStrokes:(id)a0 inDrawing:(id)a1 isLive:(BOOL)a2 liveScrollOffset:(struct CGPoint { double x0; double x1; })a3;
- (id)_newKnobWithLocation:(long long)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformFromStrokeSpaceToViewInDrawing:(id)a0 isLive:(BOOL)a1;
- (double)_highlightWidthForStroke:(id)a0;
- (void)_updateKnobPositionsForStrokes:(id)a0 strokeSpaceToViewTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (BOOL)_isBrushSelecting:(long long)a0;
- (void)_updateKnobAppearanceForDragAtKnobLocation:(long long)a0 point:(struct CGPoint { double x0; double x1; })a1 knobDragMode:(long long)a2 selectionType:(long long)a3 touchType:(long long)a4;
- (id)_knobForKnobLocation:(long long)a0;
- (void)_updateKnobAppearanceForDragAtKnobLocation:(long long)a0 point:(struct CGPoint { double x0; double x1; })a1 otherKnobPoint:(struct CGPoint { double x0; double x1; })a2 selectionType:(long long)a3 touchType:(long long)a4;
- (double)_scaleForSelectionType:(long long)a0 touchType:(long long)a1;
- (void)_resetKnobAppearance;
- (void)_setupKnobsIfNecessary;
- (id)initWithStrokeSelection:(id)a0 renderingDelegate:(id)a1;
- (id)initForLiveSelectionWithRenderingDelegate:(id)a0;
- (id)adornmentLayer;
- (void)_renderLiveSelectionPath:(const struct CGPath { } *)a0 forStrokes:(id)a1 inDrawing:(id)a2 liveScrollOffset:(struct CGPoint { double x0; double x1; })a3;
- (id)_affordanceForLocationInSelectionView:(struct CGPoint { double x0; double x1; })a0 inputType:(long long)a1;
- (void)_willBeginDragKnobLocation:(long long)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 knobDragMode:(long long)a2;
- (void)_brushSelectWithKnob:(long long)a0 toLocation:(struct CGPoint { double x0; double x1; })a1 knobDragMode:(long long)a2 selectionType:(long long)a3 touchType:(long long)a4;
- (void)_dragKnob:(long long)a0 toLocation:(struct CGPoint { double x0; double x1; })a1 otherKnobLocation:(struct CGPoint { double x0; double x1; })a2 knobDragMode:(long long)a3;
- (void)_didEndDragKnobLocation:(long long)a0 knobDragMode:(long long)a1;

@end
