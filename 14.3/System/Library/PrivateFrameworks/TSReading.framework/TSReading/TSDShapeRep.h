@class NSString;

@interface TSDShapeRep : TSDStyledRep <CALayerDelegate, TSDMagicMoveMatching> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mFrameInUnscaledCanvasRelativeToSuper;
    BOOL mFrameInUnscaledCanvasIsValid;
    BOOL mDirectlyManagesLayerContent;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mOriginalAliasedAlignmentFrameInLayerFrame;
}

@property (nonatomic) BOOL shadowOnChildrenDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)a0 incomingObject:(id)a1;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (BOOL)isInvisible;
- (BOOL)isDraggable;
- (void)willBeRemoved;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldShowShadow;
- (BOOL)directlyManagesLayerContent;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInUnscaledCanvas;
- (void)didUpdateLayer:(id)a0;
- (void)processChangedProperty:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetRectForEditMenu;
- (void)willUpdateLayer:(id)a0;
- (id)additionalLayersOverLayer;
- (id)overlayLayers;
- (void)drawInLayerContext:(struct CGContext { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layerFrameInScaledCanvas;
- (void)layoutInRootChangedFrom:(id)a0 to:(id)a1 translatedOnly:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layerFrameInScaledCanvasRelativeToParent;
- (void)recursivelyDrawChildrenInContext:(struct CGContext { } *)a0;
- (void)updatePositionsOfKnobs:(id)a0;
- (unsigned long long)enabledKnobMask;
- (BOOL)directlyManagesVisibilityOfKnob:(id)a0;
- (void)addSelectionKnobsToArray:(id)a0;
- (BOOL)isEditingPath;
- (BOOL)shouldShowSelectionHighlight;
- (BOOL)canDrawInParallel;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (BOOL)shouldExpandHitRegionWhenSmall;
- (double)shortestDistanceToPoint:(struct CGPoint { double x0; double x1; })a0 countAsHit:(BOOL *)a1;
- (BOOL)intersectsUnscaledRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addBitmapsToRenderingQualityInfo:(id)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)canUseSpecializedHitRegionForKnob:(id)a0;
- (id)shapeInfo;
- (id)shapeLayout;
- (BOOL)p_canApplyStrokeToLayer;
- (BOOL)p_canApplyFillToLayer;
- (BOOL)p_beginApplyOpacity:(struct CGContext { } *)a0 forDrawingInOneStep:(BOOL)a1;
- (void)p_endApplyOpacity:(struct CGContext { } *)a0 apply:(BOOL)a1;
- (void)p_drawInContext:(struct CGContext { } *)a0 withContent:(BOOL)a1 withStroke:(BOOL)a2 withOpacity:(BOOL)a3;
- (void)p_drawChildrenWithoutOpacityInContext:(struct CGContext { } *)a0;
- (BOOL)p_drawsSelfInOneStep;
- (void)p_drawLineEndForHead:(BOOL)a0 withDelta:(struct CGPoint { double x0; double x1; })a1 andStroke:(id)a2 inContext:(struct CGContext { } *)a3 useFastDrawing:(BOOL)a4;
- (BOOL)i_editMenuOverlapsEndKnobs;
- (BOOL)shouldHideSelectionHighlightDueToRectangularPath;
- (BOOL)shouldShowSmartShapeKnobs;
- (BOOL)shouldShowAdvancedGradientKnobs;
- (BOOL)shouldShowAdditionalKnobs;
- (id)editablePathSource;
- (BOOL)p_pathIsAxisAlignedRect;
- (BOOL)isEditingChildRep;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(BOOL)a1 withStroke:(BOOL)a2 withOpacity:(BOOL)a3 forAlphaOnly:(BOOL)a4 drawChildren:(BOOL)a5;
- (id)imageOfStroke:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (id)pathSourceForSelectionHighlightBehavior;
- (BOOL)canBeUsedForImageMask;
- (void)invalidateEffectLayersForChildren;
- (BOOL)isPathEditable;
- (BOOL)canMakePathEditable;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })naturalToEditablePathSpaceTransform;
- (struct CGPoint { double x0; double x1; })centerForGuideLayerPlacement;
- (void)p_beginDynamicallyResizingOrMovingLineEnd;
- (void)p_endDynamicallyResizingOrMovingLineEnd;
- (BOOL)canDrawShadowInOneStepWithChildren:(BOOL)a0;

@end
