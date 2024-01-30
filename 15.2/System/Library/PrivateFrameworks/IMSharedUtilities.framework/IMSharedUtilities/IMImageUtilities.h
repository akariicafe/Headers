@interface IMImageUtilities : NSObject

+ (BOOL)persistCPBitmapWithImage:(struct CGImage { } *)a0 url:(id)a1;
+ (void)sampleImageEdges:(char *)a0 usingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forMostlyWhitePixels:(unsigned long long *)a2 otherPixels:(unsigned long long *)a3 bytesPerRow:(long long)a4;
+ (struct CGImage { } *)newThumbnailForTargetSize:(struct CGSize { double x0; double x1; })a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageSource:(struct CGImageSource { } *)a2 atIndex:(unsigned long long)a3 mode:(long long)a4 scale:(double)a5;
+ (struct CGSize { double x0; double x1; })imageSourcePxSize:(struct CGImageSource { } *)a0;
+ (struct CGImage { } *)newThumbnailForTargetSize:(struct CGSize { double x0; double x1; })a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageSource:(struct CGImageSource { } *)a2 mode:(long long)a3 scale:(double)a4;
+ (double)scaleFactorForThumbnailWithSize:(struct CGSize { double x0; double x1; })a0 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 targetPxSize:(struct CGSize { double x0; double x1; })a2 shouldScaleUpPreview:(BOOL)a3 maxUpScale:(double)a4;
+ (struct CGSize { double x0; double x1; })imageRefPxSize:(struct CGImage { } *)a0;
+ (BOOL)persistPreviewToDiskCache:(struct CGImage { } *)a0 previewURL:(id)a1 error:(id *)a2;

@end
