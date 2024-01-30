@class TSDLayoutGeometry, TSDInfoGeometry, TSDMaskLayout, TSDImageInfo, TSDImageAdjustments;

@interface TSDImageLayout : TSDMediaLayout {
    TSDLayoutGeometry *mImageGeometry;
    TSDMaskLayout *mMaskLayout;
    struct CGPath { } *mPathToStroke;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mLayoutToImageTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mLayoutToMaskTransform;
    BOOL mMaskIntersectsImage;
    struct CGSize { double width; double height; } mLastParentLimitedSize;
    unsigned long long mHasAlpha;
    TSDLayoutGeometry *mBaseImageLayoutGeometry;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDInfoGeometry *mBaseInfoGeometry;
    long long mMaskEditMode;
    BOOL mScalingInMaskMode;
    BOOL mInInstantAlphaMode;
    BOOL mIsUpdatingImageAdjustments;
    TSDImageAdjustments *mDynamicImageAdjustments;
}

@property (readonly, nonatomic) TSDImageInfo *imageInfo;
@property (readonly, nonatomic) TSDInfoGeometry *currentInfoGeometry;
@property (readonly, nonatomic) TSDLayoutGeometry *imageGeometry;
@property (readonly, nonatomic) TSDLayoutGeometry *originalImageGeometry;
@property (readonly, nonatomic) TSDLayoutGeometry *imageGeometryInRoot;
@property (readonly, nonatomic) BOOL hasMaskingPath;
@property (readonly, nonatomic) const struct CGPath { } *pathToStroke;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } layoutToImageTransform;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } layoutToMaskTransform;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } imageDataToVisualSizeTransform;
@property (readonly, nonatomic) TSDMaskLayout *maskLayout;

- (id)initWithInfo:(id)a0;
- (BOOL)isInvisible;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)hasAlpha;
- (BOOL)supportsRotation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInfluencingExteriorWrap;
- (id)computeLayoutGeometry;
- (id)i_computeWrapPath;
- (id)layoutGeometryFromInfo;
- (void)updateChildrenFromInfo;
- (id)smartPathSource;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeAlignmentFrameInRoot:(BOOL)a0;
- (void)dynamicImageAdjustmentsChangeDidBegin;
- (void)dynamicImageAdjustmentsChangeDidEnd;
- (void)dynamicImageAdjustmentsUpdateToValue:(id)a0;
- (id)imageAdjustments;
- (BOOL)isDynamicallyChangingImageAdjustments;
- (void)offsetGeometryBy:(struct CGPoint { double x0; double x1; })a0;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pathBoundsWithoutStroke;
- (struct CGSize { double x0; double x1; })sizeOfFrameRectIncludingCoverage;
- (double)scaleForInlineClampingUnrotatedSize:(struct CGSize { double x0; double x1; })a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (id)childInfosForChildLayouts;
- (double)descentForInlineLayout;
- (void)transferLayoutGeometryToInfo:(id)a0 withAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 assertIfInDocument:(BOOL)a2;
- (void)p_calculateClampModelValuesWithAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 andPerformBlock:(id /* block */)a1;

@end
