@class TSDMovieInfo, TSDInfoGeometry;

@interface TSDMovieLayout : TSDMediaLayout {
    TSDInfoGeometry *_dynamicInfoGeometry;
}

@property (readonly, nonatomic) TSDMovieInfo *movieInfo;

- (id)initWithInfo:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsRotation;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (id)i_computeWrapPath;
- (void)processChangedProperty:(int)a0;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeAlignmentFrameInRoot:(BOOL)a0;
- (double)scaleForInlineClampingUnrotatedSize:(struct CGSize { double x0; double x1; })a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;

@end
