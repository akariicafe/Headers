@class TSDMovieInfo;

@interface TSDAudioLayout : TSDMediaLayout

@property (class, readonly) struct CGSize { double x0; double x1; } scaledAudioSize;

@property (readonly, nonatomic) TSDMovieInfo *movieInfo;

- (BOOL)supportsRotation;
- (BOOL)canFlip;
- (int)wrapType;
- (id)initWithInfo:(id)a0;
- (id)layoutGeometryFromInfo;
- (BOOL)shouldDisplayGuides;
- (BOOL)allowsConnections;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrame;
- (BOOL)resizeMayChangeAspectRatio;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (id)visibleGeometries;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeAlignmentFrameInRoot:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCullingWithBaseFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;

@end
