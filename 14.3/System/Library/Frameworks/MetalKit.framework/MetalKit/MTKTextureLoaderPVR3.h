@class NSData;

@interface MTKTextureLoaderPVR3 : MTKTextureLoaderData {
    int _pvrCompressedFormat;
    struct MTLPixelFormatInfo { char *name; unsigned int flags; unsigned long long castClass; union { struct MTLNormalPixelFormatInfo { unsigned long long pixelBytes; unsigned char componentCount; unsigned char alignment; unsigned long long pixelBytesRender; unsigned long long pixelBytesRenderMSAA; } normal; struct MTLCompressedPixelFormatInfo { unsigned long long blockBytes; unsigned long long blockWidth; unsigned long long blockHeight; unsigned long long blockDepth; } compressed; } type; } _pixelFormatInfo;
    unsigned int _metaDataSize;
    NSData *_imageData;
}

+ (BOOL)isPVR3File:(id)a0;

- (void)dealloc;
- (id)initWithData:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)parseMetadataWithError:(id *)a0;
- (unsigned long long)determineFormat:(unsigned long long)a0 colorSpace:(unsigned int)a1 channelType:(unsigned int)a2 options:(id)a3;
- (void)determineBlockSize:(unsigned long long *)a0 blocksWide:(unsigned long long *)a1 blocksHigh:(unsigned long long *)a2 bytesPerBlock:(unsigned long long *)a3 fromFormat:(unsigned int)a4 width:(unsigned long long)a5 andHeight:(unsigned long long)a6;
- (id)getDataForArrayElement:(unsigned long long)a0 face:(unsigned long long)a1 level:(unsigned long long)a2 depthPlane:(unsigned long long)a3 bytesPerRow:(unsigned long long *)a4 bytesPerImage:(unsigned long long *)a5;

@end
