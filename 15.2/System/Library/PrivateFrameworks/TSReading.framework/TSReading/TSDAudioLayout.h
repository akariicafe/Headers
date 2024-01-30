@interface TSDAudioLayout : TSDMediaLayout

- (id)initWithInfo:(id)a0;
- (int)wrapType;
- (BOOL)supportsRotation;
- (id)layoutGeometryFromInfo;
- (BOOL)shouldDisplayGuides;
- (BOOL)allowsConnections;
- (id)movieInfo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrame;
- (BOOL)resizeMayChangeAspectRatio;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (BOOL)canFlip;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeAlignmentFrameInRoot:(BOOL)a0;

@end
