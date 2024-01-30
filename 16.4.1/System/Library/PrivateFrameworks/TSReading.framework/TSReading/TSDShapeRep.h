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

- (BOOL)isInvisible;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (BOOL)isDraggable;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldShowShadow;
- (void)willBeRemoved;
- (void)didUpdateLayer:(id)a0;
- (BOOL)directlyManagesLayerContent;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInUnscaledCanvas;
- (void)processChangedProperty:(int)a0;
- (unsigned long long)enabledKnobMask;
- (BOOL)shouldShowAdvancedGradientKnobs;
- (void)addBitmapsToRenderingQualityInfo:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)addSelectionKnobsToArray:(id)a0;
- (id)additionalLayersOverLayer;
- (BOOL)canBeUsedForImageMask;
- (BOOL)canDrawInParallel;
- (BOOL)canDrawShadowInOneStepWithChildren:(BOOL)a0;
- (BOOL)canMakePathEditable;
- (BOOL)canUseSpecializedHitRegionForKnob:(id)a0;
- (struct CGPoint { double x0; double x1; })centerForGuideLayerPlacement;
- (BOOL)directlyManagesVisibilityOfKnob:(id)a0;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(BOOL)a1 withStroke:(BOOL)a2 withOpacity:(BOOL)a3 forAlphaOnly:(BOOL)a4 drawChildren:(BOOL)a5;
- (void)drawInLayerContext:(struct CGContext { } *)a0;
- (id)editablePathSource;
- (BOOL)i_editMenuOverlapsEndKnobs;
- (id)imageOfStroke:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (BOOL)intersectsUnscaledRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateEffectLayersForChildren;
- (BOOL)isEditingChildRep;
- (BOOL)isEditingPath;
- (BOOL)isPathEditable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layerFrameInScaledCanvas;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layerFrameInScaledCanvasRelativeToParent;
- (void)layoutInRootChangedFrom:(id)a0 to:(id)a1 translatedOnly:(BOOL)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })naturalToEditablePathSpaceTransform;
- (id)overlayLayers;
- (BOOL)p_beginApplyOpacity:(struct CGContext { } *)a0 forDrawingInOneStep:(BOOL)a1;
- (void)p_beginDynamicallyResizingOrMovingLineEnd;
- (BOOL)p_canApplyFillToLayer;
- (BOOL)p_canApplyStrokeToLayer;
- (void)p_drawChildrenWithoutOpacityInContext:(struct CGContext { } *)a0;
- (void)p_drawInContext:(struct CGContext { } *)a0 withContent:(BOOL)a1 withStroke:(BOOL)a2 withOpacity:(BOOL)a3;
- (void)p_drawLineEndForHead:(BOOL)a0 withDelta:(struct CGPoint { double x0; double x1; })a1 andStroke:(id)a2 inContext:(struct CGContext { } *)a3 useFastDrawing:(BOOL)a4;
- (BOOL)p_drawsSelfInOneStep;
- (void)p_endApplyOpacity:(struct CGContext { } *)a0 apply:(BOOL)a1;
- (void)p_endDynamicallyResizingOrMovingLineEnd;
- (BOOL)p_pathIsAxisAlignedRect;
- (id)pathSourceForSelectionHighlightBehavior;
- (void)recursivelyDrawChildrenInContext:(struct CGContext { } *)a0;
- (id)shapeInfo;
- (id)shapeLayout;
- (double)shortestDistanceToPoint:(struct CGPoint { double x0; double x1; })a0 countAsHit:(BOOL *)a1;
- (BOOL)shouldExpandHitRegionWhenSmall;
- (BOOL)shouldHideSelectionHighlightDueToRectangularPath;
- (BOOL)shouldShowAdditionalKnobs;
- (BOOL)shouldShowSelectionHighlight;
- (BOOL)shouldShowSmartShapeKnobs;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetRectForEditMenu;
- (void)updatePositionsOfKnobs:(id)a0;
- (void)willUpdateLayer:(id)a0;

@end
