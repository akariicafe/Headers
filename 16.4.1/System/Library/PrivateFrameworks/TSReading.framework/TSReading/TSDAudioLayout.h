@interface TSDAudioLayout : TSDMediaLayout

- (id)initWithInfo:(id)a0;
- (id)movieInfo;
- (BOOL)supportsRotation;
- (BOOL)allowsConnections;
- (id)layoutGeometryFromInfo;
- (BOOL)shouldDisplayGuides;
- (int)wrapType;
- (BOOL)canFlip;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrame;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeAlignmentFrameInRoot:(BOOL)a0;
- (BOOL)resizeMayChangeAspectRatio;

@end
