@class TSDInfoGeometry, TSDPathSource, TSDImageLayout;

@interface TSDMaskLayout : TSDLayout {
    struct { unsigned char path : 1; unsigned char tightPathBounds : 1; } mMaskInvalidFlags;
    struct CGPath { } *mCachedPath;
    struct CGPath { } *mCachedPathNoScale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mCachedTightPathBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mCachedTightPathBoundsNoScale;
    double mOriginalPathScale;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDPathSource *mDynamicPathSource;
    BOOL mScalingInMaskMode;
}

@property (nonatomic) double pathScale;
@property (readonly, nonatomic) TSDImageLayout *imageLayout;

- (struct CGPath { } *)path;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidatePath;
- (id)initWithInfo:(id)a0;
- (void)invalidate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pathBounds;
- (id)computeLayoutGeometry;
- (id)infoGeometry;
- (id)dependentLayouts;
- (id)pathSource;
- (struct CGPath { } *)p_cachedPath;
- (id)maskInfo;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_cachedTightPathBoundsNoScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_cachedTightPathBounds;
- (void)p_calculateCachedPathIfNecessary;
- (struct CGPath { } *)p_cachedPathNoScale;
- (void)p_calculateTightPathBoundsIfNecessary;
- (id)computeInfoGeometryFromPureLayoutGeometry:(id)a0;
- (BOOL)shouldBeIncludedInParentFrameForCulling;

@end
