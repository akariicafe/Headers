@class NSObject, NSString, TSPData, TSUColor, TSUFlushableCachedImage;
@protocol OS_dispatch_queue;

@interface TSDImageFill : TSDFill <TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying> {
    TSUFlushableCachedImage *mStandardSizeTintedImage;
    TSUFlushableCachedImage *mHalfSizeTintedImage;
    TSUFlushableCachedImage *mQuarterSizeTintedImage;
    TSUColor *mReferenceColor;
    BOOL mHasIndicatedInterestInProvider;
    NSObject<OS_dispatch_queue> *mTempRenderLock;
    struct CGImage { } *mTempRenderCopy;
    struct CGImage { } *mSourceOfTempRenderCopy;
    long long mTempRenderCount;
}

@property (nonatomic) int technique;
@property (readonly, retain, nonatomic) TSPData *imageData;
@property (readonly, retain, nonatomic) TSPData *originalImageData;
@property (readonly, nonatomic) BOOL interpretsUntaggedImageDataAsGeneric;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fillSize;
@property (readonly, copy, nonatomic) TSUColor *tintColor;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) NSString *presetKind;

+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(int)a2;

- (BOOL)isOpaque;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)referenceColor;
- (unsigned long long)hash;
- (int)fillType;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (SEL)mapThemeAssetSelector;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (long long)mixingTypeWithObject:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)p_paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (void)paintPath:(struct CGPath { } *)a0 naturalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2 isPDF:(BOOL)a3;
- (BOOL)drawsInOneStep;
- (struct CGSize { double x0; double x1; })renderedImageSizeForObjectSize:(struct CGSize { double x0; double x1; })a0;
- (void)addBitmapsToRenderingQualityInfo:(id)a0 forShapeRep:(id)a1 inContext:(struct CGContext { } *)a2;
- (void)applyToCALayer:(id)a0 withScale:(double)a1;
- (BOOL)canApplyToCALayer;
- (id)p_validatedImageProvider;
- (id)initWithImageData:(id)a0 technique:(int)a1 tintColor:(id)a2 size:(struct CGSize { double x0; double x1; })a3 originalImageData:(id)a4;
- (void)p_setFillSizeForApplicationData;
- (id)p_standardSizeCachedImage;
- (BOOL)p_shouldApplyTintedImage;
- (id)p_quarterSizeCachedImage;
- (id)p_halfSizeCachedImage;
- (BOOL)canApplyToCALayerByAddingSublayers;
- (id)p_cachedImageForSize:(struct CGSize { double x0; double x1; })a0 inContext:(struct CGContext { } *)a1 orLayer:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_drawnRectForImageSize:(struct CGSize { double x0; double x1; })a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2;
- (struct CGSize { double x0; double x1; })p_sizeOfFillImageForDestRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (void)p_drawBitmapImage:(struct CGImage { } *)a0 withOrientation:(long long)a1 inContext:(struct CGContext { } *)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)p_drawPDFWithProvider:(id)a0 inContext:(struct CGContext { } *)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGImage { } *)p_newTintedImageWithScale:(double)a0;
- (struct CGImage { } *)p_newStandardSizeImage;
- (struct CGImage { } *)p_newHalfSizeImage;
- (struct CGImage { } *)p_newQuarterSizeImage;
- (id)initWithGenericImageData:(id)a0 technique:(int)a1 tintColor:(id)a2 size:(struct CGSize { double x0; double x1; })a3 originalImageData:(id)a4;
- (id)imageDataAtFillSize;
- (BOOL)shouldBeReappliedToCALayer:(id)a0;
- (void)i_flushCaches;

@end
