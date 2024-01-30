@class TSDInfoGeometry;

@interface TSDMovieLayout : TSDMediaLayout {
    TSDInfoGeometry *mDynamicInfoGeometry;
}

- (id)initWithInfo:(id)a0;
- (void)dealloc;
- (BOOL)supportsRotation;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (id)i_computeWrapPath;
- (void)processChangedProperty:(int)a0;
- (id)movieInfo;
- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (void)takeRotationFromTracker:(id)a0;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeAlignmentFrameInRoot:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullReflectionFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullReflectionBoundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
