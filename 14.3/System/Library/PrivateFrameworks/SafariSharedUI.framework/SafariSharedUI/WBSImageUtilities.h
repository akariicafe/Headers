@interface WBSImageUtilities : NSObject

+ (id)squareThumbnailImageFromImage:(id)a0 thumbnailWidthInPixels:(double)a1;
+ (struct CGSize { double x0; double x1; })imageSizeScalingSize:(struct CGSize { double x0; double x1; })a0 proportionallyToFitSize:(struct CGSize { double x0; double x1; })a1;
+ (id)resizedImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
+ (id)flatImage:(id)a0 withColor:(id)a1;
+ (id)handoffIconForDeviceType:(id)a0;
+ (id)_pixelDataForImage:(id)a0;
+ (BOOL)image:(id)a0 isEqualToImage:(id)a1;

@end
