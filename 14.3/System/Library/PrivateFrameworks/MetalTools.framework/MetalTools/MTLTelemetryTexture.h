@class MTLTextureDescriptor, MTLTelemetryDevice;

@interface MTLTelemetryTexture : MTLToolsTexture {
    unsigned long long mipmapClipType;
    MTLTextureDescriptor *_telemetryDescriptor;
    MTLTelemetryDevice *_telemetryDevice;
}

- (id)newTextureViewWithPixelFormat:(unsigned long long)a0 textureType:(unsigned long long)a1 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 swizzle:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)a0 textureType:(unsigned long long)a1 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)newTextureViewWithPixelFormat:(unsigned long long)a0;
- (id)initWithBaseTexture:(id)a0 device:(id)a1 descriptor:(id)a2;
- (void)initMipmapClipType;
- (void)accumTextureDistribution:(id)a0 category:(unsigned long long)a1 pixelFormat:(unsigned long long)a2 baseAddr:(unsigned long long)a3 rowBytes:(unsigned long long)a4 isLinear:(BOOL)a5;
- (id)initWithBaseTexture:(id)a0 device:(id)a1 descriptor:(id)a2 plane:(unsigned long long)a3;
- (id)initWithBaseTexture:(id)a0 device:(id)a1 texture:(id)a2 descriptor:(id)a3;
- (id)initWithBaseTexture:(id)a0 device:(id)a1 texture:(id)a2 pixelFormat:(unsigned long long)a3 textureType:(unsigned long long)a4 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 swizzle:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a7;
- (id)initWithBaseTexture:(id)a0 device:(id)a1 buffer:(id)a2 descriptor:(id)a3 offset:(unsigned long long)a4 bytesPerRow:(unsigned long long)a5;
- (id)initWithBaseTexture:(id)a0 device:(id)a1 texture:(id)a2 pixelFormat:(unsigned long long)a3;

@end
