@protocol MTLDevice;

@interface NUMetalRenderer : NURenderer {
    id<MTLDevice> _device;
}

- (void).cxx_destruct;
- (id)name;
- (id)initWithCIContext:(id)a0 priority:(long long)a1;
- (id)imageForSurface:(id)a0 options:(id)a1 owner:(id)a2;
- (id)renderDestinationForSurface:(id)a0 owner:(id)a1;
- (id)_textureForSurface:(id)a0 owner:(id)a1;
- (id)initWithMetalDevice:(id)a0 options:(id)a1;
- (unsigned long long)_textureFormatForPixelFormat:(id)a0;

@end
