@class TSDLayoutGeometry, TSUBezierPath, NSOrderedSet;

@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent> {
    TSDLayoutGeometry *mDynamicLayoutGeometry;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBoundsForStandardKnobs;
    TSUBezierPath *mCachedWrapPath;
    TSUBezierPath *mCachedPathForClippingConnectionLines;
    NSOrderedSet *mCachedGroupedChildren;
    BOOL mHasInvalidated;
}

- (struct CGSize { double x0; double x1; })minimumSize;
- (BOOL)supportsRotation;
- (void).cxx_destruct;
- (BOOL)canFlip;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (BOOL)isDraggable;
- (void)dragBy:(struct CGPoint { double x0; double x1; })a0;
- (void)invalidate;
- (id)computeLayoutGeometry;
- (void)updateChildrenFromInfo;
- (id)layoutGeometryFromInfo;
- (id)descendentWrappables;
- (id)i_computeWrapPath;
- (id)i_wrapPath;
- (void)invalidateExteriorWrap;
- (void)processChangedProperty:(int)a0;
- (BOOL)allowsConnections;
- (BOOL)supportsInspectorPositioning;
- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStandardKnobs;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrame;
- (void)setDynamicGeometry:(id)a0;
- (id)additionalDependenciesForChildLayout:(id)a0;
- (BOOL)resizeMayChangeAspectRatio;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (id)computeInfoGeometryDuringResize;
- (id)reliedOnLayouts;
- (BOOL)providesGuidesForChildLayouts;
- (id)visibleGeometries;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (BOOL)supportsFlipping;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_invalidateParentForWrap;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInRootForSelectionPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)a0;
- (BOOL)descendentWrappablesContainsWrappable:(id)a0;
- (id)childInfosForChildLayouts;
- (id)pathForClippingConnectionLines;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCaptionPositioning;
- (BOOL)supportsParentFlipping;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInRootForCalculatingActivityLineEndpoint;
- (BOOL)shouldBeIncludedInParentFrameForCulling;
- (void)i_clearInvalidationCache;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrameForCaptionEdgeInsetsCalculation;
- (void)transferLayoutGeometryToInfo:(id)a0 withAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 assertIfInDocument:(BOOL)a2;
- (void)updateLayoutGeometryInPreparationForPartitioning;
- (id)i_wrapPathIncludingTitleAndCaption;
- (id)p_groupInfo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeBoundsForStandardKnobs;
- (id)p_groupedChildren;
- (id)p_childWrapPathsFrom:(id)a0 inDescendents:(id)a1 includingTitleAndCaption:(BOOL)a2;

@end
