@class NSObject, NSSet, NSArray, NSString, TSPData, TSUColor, TSDImageFillCachedImage;
@protocol OS_dispatch_queue;

@interface TSDImageFill : TSDFill <TSDMixing, TSSPresetSource, TSPStyleObjectDataContainer, NSCopying, NSMutableCopying> {
    TSDImageFillCachedImage *mStandardSizeTintedImage;
    TSDImageFillCachedImage *mHalfSizeTintedImage;
    TSDImageFillCachedImage *mQuarterSizeTintedImage;
    TSUColor *mReferenceColor;
    TSUColor *mCachedReferenceColor;
    BOOL mShouldSkipFurtherAttemptsToCalculateReferenceColor;
    BOOL mHasIndicatedInterestInProvider;
    NSObject<OS_dispatch_queue> *mTempRenderLock;
    struct CGImage { } *mTempRenderCopy;
    struct CGImage { } *mSourceOfTempRenderCopy;
    long long mTempRenderCount;
}

@property (class, readonly, nonatomic) NSSet *presetKinds;

@property (nonatomic) unsigned long long technique;
@property (retain, nonatomic, setter=p_setImageData:) TSPData *p_imageData;
@property (nonatomic, setter=p_setTechnique:) unsigned long long p_technique;
@property (retain, nonatomic, setter=p_setTintColor:) TSUColor *p_tintColor;
@property (nonatomic, setter=p_setFillSize:) struct CGSize { double x0; double x1; } p_fillSize;
@property (readonly, retain, nonatomic) TSPData *imageData;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fillSize;
@property (readonly, copy, nonatomic) TSUColor *tintColor;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) BOOL canCopyData;
@property (readonly, nonatomic) TSUColor *storedReferenceColor;
@property (readonly, nonatomic) NSArray *referencedDataList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(unsigned long long)a2;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (long long)fillType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)referenceColor;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)copyWithNewImageData:(id)a0;
- (void)paintPath:(const struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (id)presetKind;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)paintPath:(const struct CGPath { } *)a0 naturalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2 isPDF:(BOOL)a3;
- (BOOL)drawsInOneStep;
- (struct CGSize { double x0; double x1; })renderedImageSizeForObjectSize:(struct CGSize { double x0; double x1; })a0;
- (id)p_validatedImageProvider;
- (void)p_setFillSizeForApplicationData;
- (id)p_standardSizeCachedImage;
- (BOOL)p_shouldApplyTintedImage;
- (id)p_quarterSizeCachedImage;
- (id)p_halfSizeCachedImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_drawnRectForImageSize:(struct CGSize { double x0; double x1; })a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2;
- (struct CGSize { double x0; double x1; })p_sizeOfFillImageForDestRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (void)p_drawBitmapImage:(struct CGImage { } *)a0 withOrientation:(long long)a1 inContext:(struct CGContext { } *)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)p_drawPDFWithProvider:(id)a0 inContext:(struct CGContext { } *)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)imageDataAtFillSize;
- (void)i_commonInit;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (id)initWithImageData:(id)a0 technique:(unsigned long long)a1 tintColor:(id)a2 size:(struct CGSize { double x0; double x1; })a3;
- (void)drawFillInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 clippingToPath:(const struct CGPath { } *)a2;
- (id)initForUnarchiving;
- (void)i_setStoredReferenceColor:(id)a0;
- (void)i_commonSetup;
- (void)i_updateStoredReferenceColorIfNeeded;
- (id)referenceColorForFontArchiving;
- (id)initWithImageData:(id)a0 technique:(unsigned long long)a1 tintColor:(id)a2 size:(struct CGSize { double x0; double x1; })a3 referenceColor:(id)a4;
- (id)p_tintedImageWithScale:(double)a0;
- (void)p_clearTintedImageCache;
- (struct CGSize { double x0; double x1; })p_imageDataNaturalSize;
- (void)p_updateCachedReferenceColorIfNeeded;
- (id)p_calculateReferenceColor;
- (id)p_cachedImageForSize:(struct CGSize { double x0; double x1; })a0 inContext:(struct CGContext { } *)a1 orContentsScaleProvider:(id)a2;
- (void)p_paintPath:(const struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1 rectForFill:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)flushImageCache;
- (BOOL)canApplyToRenderable;
- (BOOL)canApplyToRenderableByAddingSubrenderables;

@end
