@interface NUImageFactory : NSObject

+ (struct CGImage { } *)newCGImageFromBufferImage:(id)a0;
+ (id)newCIImageFromBufferImage:(id)a0;
+ (id)_newCIImageFromImage:(id)a0;
+ (id)bufferImageWithLayout:(id)a0 format:(id)a1 colorSpace:(id)a2;
+ (struct CGImage { } *)newCGImageFromImageStorage:(id)a0 colorSpace:(id)a1;
+ (id)surfaceImageWithLayout:(id)a0 format:(id)a1 colorSpace:(id)a2;

@end
