@class TSDLayoutGeometry, TSDBezierPath;

@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent> {
    TSDLayoutGeometry *mDynamicLayoutGeometry;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBoundsForStandardKnobs;
    TSDBezierPath *mCachedWrapPath;
    TSDBezierPath *mCachedExternalWrapPath;
}

@property (readonly, nonatomic) int wrapContainerMode;

- (struct CGSize { double x0; double x1; })minimumSize;
- (void)dealloc;
- (void)setGeometry:(id)a0;
- (void)invalidate;
- (BOOL)supportsRotation;
- (void)dragBy:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)allowsConnections;
- (id)computeLayoutGeometry;
- (id)descendentWrappables;
- (id)i_computeWrapPath;
- (id)i_externalWrapPath;
- (id)i_wrapPath;
- (void)invalidateExteriorWrap;
- (id)layoutGeometryFromInfo;
- (void)processChangedProperty:(int)a0;
- (void)p_invalidateDescendentWrapPaths;
- (id)reliedOnLayouts;
- (BOOL)canFlip;
- (id)computeInfoGeometryDuringResize;
- (id)additionalDependenciesForChildLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrame;
- (void)beginDynamicOperation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStandardKnobs;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (void)endDynamicOperation;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (id)p_childWrapPathsFrom:(id)a0;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_invalidateParentForWrap;
- (BOOL)providesGuidesForChildLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPresentingAnnotationPopoverForSelection:(id)a0;
- (BOOL)resizeMayChangeAspectRatio;
- (void)setDynamicGeometry:(id)a0;
- (BOOL)supportsFlipping;
- (BOOL)supportsParentRotation;
- (void)takeRotationFromTracker:(id)a0;
- (id)visibleGeometries;
- (void)wrappableChildInvalidated;

@end
