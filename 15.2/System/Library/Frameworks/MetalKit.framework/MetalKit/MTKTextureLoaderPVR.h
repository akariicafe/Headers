@class NSData;

@interface MTKTextureLoaderPVR : MTKTextureLoaderData {
    unsigned int _pvrFormat;
    unsigned int _numSurfaces;
    NSData *_imageData;
    struct MTLPixelFormatInfo { char *name; unsigned int flags; unsigned long long castClass; union { struct MTLNormalPixelFormatInfo { unsigned long long pixelBytes; unsigned char componentCount; unsigned char alignment; unsigned long long pixelBytesRender; unsigned long long pixelBytesRenderMSAA; } normal; struct MTLCompressedPixelFormatInfo { unsigned long long blockBytes; unsigned long long blockWidth; unsigned long long blockHeight; unsigned long long blockDepth; } compressed; } type; } _pixelFormatInfo;
}

+ (BOOL)isPVRFile:(id)a0;

- (void)dealloc;
- (id)initWithData:(id)a0 options:(id)a1 error:(id *)a2;
- (void)determineBlockSize:(unsigned long long *)a0 blocksWide:(unsigned long long *)a1 blocksHigh:(unsigned long long *)a2 bytesPerBlock:(unsigned long long *)a3 fromFormat:(unsigned int)a4 width:(unsigned long long)a5 andHeight:(unsigned long long)a6;
- (id)getDataForArrayElement:(unsigned long long)a0 face:(unsigned long long)a1 level:(unsigned long long)a2 depthPlane:(unsigned long long)a3 bytesPerRow:(unsigned long long *)a4 bytesPerImage:(unsigned long long *)a5;
- (BOOL)determineFormat:(unsigned int)a0 options:(id)a1;

@end
