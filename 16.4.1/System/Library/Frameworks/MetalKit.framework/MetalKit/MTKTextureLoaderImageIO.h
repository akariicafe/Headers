@class NSData;

@interface MTKTextureLoaderImageIO : MTKTextureLoaderData {
    struct CGImageBlockSet { } *_blockSet;
    struct __CFData { } *_cfData;
    struct MTLPixelFormatInfo { char *name; unsigned int flags; unsigned long long castClass; union { struct MTLNormalPixelFormatInfo { unsigned long long pixelBytes; unsigned char componentCount; unsigned char alignment; unsigned long long pixelBytesRender; unsigned long long pixelBytesRenderMSAA; } normal; struct MTLCompressedPixelFormatInfo { unsigned long long blockBytes; unsigned long long blockWidth; unsigned long long blockHeight; unsigned long long blockDepth; } compressed; } type; } _pixelFormatInfo;
    unsigned long long _bytesPerRow;
    NSData *_imageData;
    BOOL _expandRGBToRGBA;
}

- (void)dealloc;
- (id)initWithData:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)decodeCGImage:(struct CGImage { } *)a0 options:(id)a1;
- (BOOL)decodeCGImageDataProvider:(struct CGImage { } *)a0 options:(id)a1;
- (BOOL)decodeCGImageImageProvider:(struct CGImage { } *)a0 CGImageProvider:(struct CGImageProvider { } *)a1 options:(id)a2;
- (BOOL)determineCGImageBlockFormatWithComponentType:(int)a0 alphaInfo:(unsigned int)a1 andPixelSizeBytes:(unsigned long long)a2 andColorSpace:(struct CGColorSpace { } *)a3 isOptimized:(BOOL)a4 options:(id)a5;
- (id)getDataForArrayElement:(unsigned long long)a0 face:(unsigned long long)a1 level:(unsigned long long)a2 depthPlane:(unsigned long long)a3 bytesPerRow:(unsigned long long *)a4 bytesPerImage:(unsigned long long *)a5;
- (id)initWithCGImage:(struct CGImage { } *)a0 options:(id)a1 error:(id *)a2;

@end
