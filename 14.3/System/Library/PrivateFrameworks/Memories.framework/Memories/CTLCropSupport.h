@interface CTLCropSupport : NSObject

+ (struct CGSize { double x0; double x1; })playbackSizeForAsset:(id)a0;
+ (id)fetchNewCGImageForAsset:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)sourceImageForAsset:(id)a0;
+ (struct CGImage { } *)createCGImageWithSourceCGImage:(id)a0 normalizedSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 destinationSize:(struct CGSize { double x0; double x1; })a2;
+ (struct CGImage { } *)croppedImageForAsset:(id)a0 normalizedSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 destinationSize:(struct CGSize { double x0; double x1; })a2;
+ (BOOL)writeImage:(struct CGImage { } *)a0 toURL:(id)a1 fileType:(id)a2;
+ (struct CGImage { } *)createScaledImageForImage:(struct CGImage { } *)a0 scale:(double)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateSuggestedCropRectWithAsset:(id)a0 aspectRatio:(double)a1 destinationSize:(struct CGSize { double x0; double x1; })a2;
+ (id)rectAndColorStringFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 colorIndex:(long long)a1;
+ (struct CGImage { } *)createScaledImageForImage:(struct CGImage { } *)a0 scale:(double)a1 rectAndColors:(id)a2;
+ (BOOL)createImageFileWithAsset:(id)a0 fileType:(id)a1 normalizedSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 destinationSize:(struct CGSize { double x0; double x1; })a3 scale:(double)a4 url:(id)a5 error:(id *)a6;
+ (BOOL)createImageFileWithAsset:(id)a0 fileType:(id)a1 scale:(double)a2 rects:(id)a3 url:(id)a4 error:(id *)a5;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateCropRectWithAsset:(id)a0 aspectRatio:(double)a1 destinationSize:(struct CGSize { double x0; double x1; })a2 cropMethodType:(long long)a3;

@end
