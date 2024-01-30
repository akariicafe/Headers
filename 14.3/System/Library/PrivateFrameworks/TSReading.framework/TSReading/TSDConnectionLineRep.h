@class TSDPathSource;

@interface TSDConnectionLineRep : TSDShapeRep {
    TSDPathSource *mLastPathSource;
}

+ (BOOL)canConnectToRep:(id)a0;
+ (id)infosToConnectFromSelection:(id)a0 withInteractiveCanvasController:(id)a1;

- (void)dealloc;
- (BOOL)isDraggable;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isSelectable;
- (BOOL)directlyManagesLayerContent;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetRectForEditMenu;
- (BOOL)shouldCreateKnobs;
- (unsigned long long)enabledKnobMask;
- (BOOL)shouldCreateSelectionKnobs;
- (BOOL)shouldShowCommentHighlight;
- (double)shortestDistanceToPoint:(struct CGPoint { double x0; double x1; })a0 countAsHit:(BOOL *)a1;
- (id)additionalRepsForDragging;
- (void)updateFromLayout;
- (BOOL)canUseSpecializedHitRegionForKnob:(id)a0;
- (struct CGPoint { double x0; double x1; })i_dragOffset;
- (BOOL)i_editMenuOverlapsEndKnobs;
- (BOOL)shouldShowSmartShapeKnobs;
- (BOOL)canBeUsedForImageMask;
- (BOOL)canMakePathEditable;
- (BOOL)canConnectToRep:(id)a0;
- (id)connectionLineLayout;
- (BOOL)p_isConnected;
- (BOOL)p_isConnectedToLockedObjects;
- (BOOL)p_controlKnobVisible;

@end
