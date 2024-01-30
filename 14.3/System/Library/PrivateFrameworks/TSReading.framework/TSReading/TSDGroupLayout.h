@class TSDLayoutGeometry, TSDBezierPath;

@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent> {
    TSDLayoutGeometry *mDynamicLayoutGeometry;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBoundsForStandardKnobs;
    TSDBezierPath *mCachedWrapPath;
    TSDBezierPath *mCachedExternalWrapPath;
}

@property (readonly, nonatomic) int wrapContainerMode;

- (void)setGeometry:(id)a0;
- (struct CGSize { double x0; double x1; })minimumSize;
- (BOOL)supportsRotation;
- (BOOL)canFlip;
- (void)dealloc;
- (void)dragBy:(struct CGPoint { double x0; double x1; })a0;
- (void)invalidate;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (id)descendentWrappables;
- (id)i_computeWrapPath;
- (id)i_wrapPath;
- (void)invalidateExteriorWrap;
- (void)processChangedProperty:(int)a0;
- (id)i_externalWrapPath;
- (BOOL)allowsConnections;
- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStandardKnobs;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrame;
- (void)setDynamicGeometry:(id)a0;
- (id)additionalDependenciesForChildLayout:(id)a0;
- (void)takeRotationFromTracker:(id)a0;
- (BOOL)resizeMayChangeAspectRatio;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (id)computeInfoGeometryDuringResize;
- (id)reliedOnLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPresentingAnnotationPopoverForSelection:(id)a0;
- (BOOL)providesGuidesForChildLayouts;
- (id)visibleGeometries;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (BOOL)supportsParentRotation;
- (BOOL)supportsFlipping;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_invalidateParentForWrap;
- (void)p_invalidateDescendentWrapPaths;
- (id)p_childWrapPathsFrom:(id)a0;
- (void)wrappableChildInvalidated;

@end
