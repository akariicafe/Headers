@class TSDImageAdjustments;

@interface TSDImageAdjuster : NSObject {
    TSDImageAdjustments *mImageAdjustments;
}

- (id)init;
- (void)dealloc;
- (id)initWithImageAdjustments:(id)a0;
- (struct CGImage { } *)newFilteredImageForImage:(struct CGImage { } *)a0 enhancedImage:(struct CGImage **)a1;
- (struct CGImage { } *)p_newImageFromCIImage:(id)a0 underlyingImage:(struct CGImage { } *)a1;

@end
