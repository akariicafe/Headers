@class TSDImageAdjustments;

@interface TSDImageAdjuster : NSObject {
    TSDImageAdjustments *_imageAdjustments;
}

- (void).cxx_destruct;
- (id)initWithImageAdjustments:(id)a0;
- (struct CGImage { } *)newFilteredImageForImage:(struct CGImage { } *)a0 enhancedImage:(inout struct CGImage **)a1;
- (struct CGImage { } *)p_newImageFromCIImage:(id)a0 underlyingImage:(struct CGImage { } *)a1;

@end
