@class KNLiveVideoInfo;

@interface KNLiveVideoLayout : TSDStyledLayout {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedAlignmentFrame;
    BOOL _isCachedAlignmentFrameValid;
}

@property (readonly, nonatomic) KNLiveVideoInfo *liveVideoInfo;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoMaskBounds;
@property (readonly, nonatomic) BOOL shouldRenderFrameStroke;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) long long effectiveMaskKind;
@property (readonly, nonatomic) double maskCornerRadius;
@property (readonly, nonatomic) BOOL isVideoMaskPathRectangular;

- (id)initWithInfo:(id)a0;
- (id)stroke;
- (void)setGeometry:(id)a0;
- (BOOL)supportsRotation;
- (id)computeLayoutGeometry;
- (void)processChangedProperty:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStandardKnobs;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrame;
- (BOOL)isStrokeBeingManipulated;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrameInRoot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoBoundsForNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_invalidateAlignmentFrame;
- (double)scaleForInlineClampingUnrotatedSize:(struct CGSize { double x0; double x1; })a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_computeAlignmentFrameInRoot:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })p_normalizedOffset;
- (id)p_makeRoundedRectangleMaskPathSource;
- (id)videoMaskPathForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
