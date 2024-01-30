@interface DCIMImageUtilities : NSObject

+ (BOOL)generateThumbnailsFromData:(id)a0 inputSize:(struct CGSize { double x0; double x1; })a1 preCropLargeThumbnailSize:(struct CGSize { double x0; double x1; })a2 postCropLargeThumbnailSize:(struct CGSize { double x0; double x1; })a3 preCropSmallThumbnailSize:(struct CGSize { double x0; double x1; })a4 postCropSmallThumbnailSize:(struct CGSize { double x0; double x1; })a5 outSmallThumbnailImageRef:(struct CGImage **)a6 outLargeThumbnailImageRef:(struct CGImage **)a7 outLargeThumbnailJPEGData:(id *)a8;

@end
