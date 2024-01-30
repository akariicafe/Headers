@interface BPSThumbnailGenerator : NSObject

+ (id)scaledImageForImage:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
+ (BOOL)writeScaledCPBitmapForImage:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 withPath:(id)a3;
+ (BOOL)writeScaledPNGForImage:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 withPath:(id)a3;

@end
