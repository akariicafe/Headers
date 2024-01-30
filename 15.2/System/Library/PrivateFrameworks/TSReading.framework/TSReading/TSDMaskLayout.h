@class TSDInfoGeometry, TSDPathSource, TSDImageLayout;

@interface TSDMaskLayout : TSDLayout {
    struct { unsigned char path : 1; unsigned char tightPathBounds : 1; } mMaskInvalidFlags;
    struct CGPath { } *mCachedPath;
    struct CGPath { } *mCachedPathNoScale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mCachedTightPathBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mCachedTightPathBoundsNoScale;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDPathSource *mDynamicPathSource;
    TSDPathSource *mPathSourceWithProvidedSize;
    BOOL mScalingInMaskMode;
}

@property (nonatomic) double pathScale;
@property (readonly, nonatomic) BOOL hasSmartPath;
@property (readonly, nonatomic) TSDImageLayout *imageLayout;

- (id)initWithInfo:(id)a0;
- (void)dragBy:(struct CGPoint { double x0; double x1; })a0;
- (void)invalidatePath;
- (void)invalidate;
- (struct CGPath { } *)path;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pathBounds;
- (id)computeLayoutGeometry;
- (BOOL)shouldDisplayGuides;
- (void)processChangedProperty:(int)a0;
- (id)infoGeometry;
- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (id)dependentLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrame;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })originalTransformForProvidingGuides;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })layoutTransformInInfoSpace:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)resizeWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 asChild:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrameForProvidingGuidesInRoot;
- (BOOL)shouldSnapWhileResizing;
- (void)setControlKnobPosition:(unsigned long long)a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (unsigned long long)numberOfControlKnobs;
- (id)pathSource;
- (struct CGPath { } *)p_cachedPath;
- (id)maskInfo;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })affineTransformForTightPathBounds;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)a0;
- (void)maskModeScaleDidBegin;
- (void)maskModeScaleDidEnd;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_cachedTightPathBoundsNoScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_cachedTightPathBounds;
- (void)p_calculateCachedPathIfNecessary;
- (struct CGPath { } *)p_cachedPathNoScale;
- (void)p_calculateTightPathBoundsIfNecessary;
- (void)takeScaledMaskGeometry:(id)a0;
- (void)dynamicMovePathKnobDidBegin;
- (void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint { double x0; double x1; })a0 withTracker:(id)a1;

@end
