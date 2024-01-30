@class TSUOnce, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface TSDBitmapImageProvider : TSDImageProvider {
    struct CGImageSource { } *mImageSource;
    struct CGImage { } *mImage;
    struct CGImage { } *mLargestSafeImage;
    NSMutableDictionary *mResampledImages;
    unsigned long long mImageGamut;
    struct CGSize { double width; double height; } mNaturalSize;
    long long mOrientation;
    BOOL mIsOpaque;
    BOOL mIsValid;
    BOOL mIsRawImage;
    unsigned long long mDPI;
    NSObject<OS_dispatch_queue> *mImageQueue;
    TSUOnce *mCheckIfValidOnce;
    NSObject<OS_dispatch_semaphore> *mFlushableContentLock;
    BOOL mHasFlushableContent;
    unsigned long long mEstimatedSize;
}

@property (readonly, nonatomic) struct CGImage { } *CGImageOfAnySize;
@property (readonly, nonatomic) struct CGImage { } *CGImageOfLargestSafeSize;
@property (readonly, nonatomic) long long orientation;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) unsigned long long imageDPI;
@property (readonly, nonatomic) unsigned long long validationStatus;
@property (readonly, nonatomic) struct CGImageSource { } *CGImageSource;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } dpiAdjustedFillSize;

+ (struct CGImage { } *)CGImageForImageData:(id)a0;
+ (id)TSUImageForImageData:(id)a0;
+ (struct CGSize { double x0; double x1; })naturalSizeForImageData:(id)a0;

- (struct CGSize { double x0; double x1; })naturalSize;
- (void)flush;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isValid;
- (void)drawImageInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGImage { } *)CGImageForNaturalSize;
- (struct CGSize { double x0; double x1; })dpiAdjustedNaturalSize;
- (unsigned long long)imageGamut;
- (void)i_commonInit;
- (void)p_loadImageMetadata;
- (void)p_loadSourceRefIfNecessary;
- (struct CGImage { } *)p_newImageFromSource:(struct CGImageSource { } *)a0;
- (void)p_loadFullSizedImageIfNecessary;
- (struct CGImageSource { } *)p_newCGImageSourceForTemporaryUse;
- (struct CGImageSource { } *)p_newCGImageSource;
- (void)p_configureOrientationAndSizeFromImageSource:(struct CGImageSource { } *)a0 andImage:(struct CGImage { } *)a1;
- (BOOL)i_hasFlushableContent;
- (unsigned long long)i_flushableMemoryEstimate;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0 inContext:(struct CGContext { } *)a1 orContentsScaleProvider:(id)a2;
- (struct CGImage { } *)CGImageResampledToSize:(struct CGSize { double x0; double x1; })a0 lowQuality:(BOOL)a1;
- (long long)p_reciprocalScaleForImageSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGImage { } *)p_resampledImageOfReciprocalScale:(unsigned long long)a0;
- (void)p_loadLargestSafeImageIfNecessary;
- (struct CGImageSource { } *)p_newImageOfSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGImage { } *)p_createResampledImageWithReciprocalScale:(unsigned long long)a0;
- (void)p_updateEstimatedSize;
- (BOOL)p_shouldScaleRetinaImages;
- (struct CGImage { } *)p_newImageOfSize:(struct CGSize { double x0; double x1; })a0 fromSource:(struct CGImageSource { } *)a1;
- (void)p_configureRawBehaviorFromImageSource:(struct CGImageSource { } *)a0;

@end
