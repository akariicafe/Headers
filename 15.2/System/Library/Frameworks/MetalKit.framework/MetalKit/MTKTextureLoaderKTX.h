@class NSData;

@interface MTKTextureLoaderKTX : MTKTextureLoaderData {
    NSData *_imageData;
    struct MTLPixelFormatInfo { char *name; unsigned int flags; unsigned long long castClass; union { struct MTLNormalPixelFormatInfo { unsigned long long pixelBytes; unsigned char componentCount; unsigned char alignment; unsigned long long pixelBytesRender; unsigned long long pixelBytesRenderMSAA; } normal; struct MTLCompressedPixelFormatInfo { unsigned long long blockBytes; unsigned long long blockWidth; unsigned long long blockHeight; unsigned long long blockDepth; } compressed; } type; } _pixelFormatInfo;
    BOOL _packedRowStride;
}

+ (BOOL)isKTXFile:(id)a0;

- (void)dealloc;
- (id)initWithData:(id)a0 options:(id)a1 error:(id *)a2;
- (id)getDataForArrayElement:(unsigned long long)a0 face:(unsigned long long)a1 level:(unsigned long long)a2 depthPlane:(unsigned long long)a3 bytesPerRow:(unsigned long long *)a4 bytesPerImage:(unsigned long long *)a5;
- (unsigned long long)determineFormatFromType:(unsigned int)a0 format:(unsigned int)a1 internalFormat:(unsigned int)a2 baseInternalFormat:(unsigned int)a3;
- (BOOL)parseKeyValueBytes:(const char *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (BOOL)parseKey:(id)a0 value:(id)a1 error:(id *)a2;
- (unsigned long long)determineFormatFromSizedFormat:(unsigned long long)a0;

@end
