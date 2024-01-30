@interface PLTableThumbnailEncoder : NSObject

+ (struct CGSize { double x0; double x1; })smallestSizeThatFitsSourceSize:(struct CGSize { double x0; double x1; })a0 withinFitFormat:(id)a1 andLargerSquareFormat:(id)a2;
+ (struct CGImage { } *)_createDownscaledImageFromSource:(struct CGImageSource { } *)a0 toSize:(struct CGSize { double x0; double x1; })a1 cropped:(BOOL)a2;
+ (id)encodeThumbnailSource:(struct CGImageSource { } *)a0 toFormat:(id)a1 withUUID:(id)a2 error:(id *)a3;
+ (id)_encodeDownscaledImage:(struct CGImage { } *)a0 toFormat:(id)a1 withUUID:(id)a2 error:(id *)a3;
+ (struct CGImage { } *)_createDownscaledImageFromSourceImage:(struct CGImage { } *)a0 toSize:(struct CGSize { double x0; double x1; })a1 cropped:(BOOL)a2;
+ (id)encodeThumbnailImage:(struct CGImage { } *)a0 toFormats:(id)a1 withUUID:(id)a2 error:(id *)a3;
+ (id)encodeThumbnailImage:(struct CGImage { } *)a0 toFormat:(id)a1 withUUID:(id)a2 error:(id *)a3;
+ (id)encodeThumbnailSource:(struct CGImageSource { } *)a0 toFormats:(id)a1 withUUID:(id)a2 error:(id *)a3;
+ (struct CGImage { } *)createCascadeSeedImageFromSourceImage:(struct CGImage { } *)a0 toFormats:(id)a1;

@end
