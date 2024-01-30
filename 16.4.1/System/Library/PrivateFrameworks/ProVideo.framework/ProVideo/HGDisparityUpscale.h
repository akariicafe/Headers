@protocol MTLTexture, MTLDevice;

@interface HGDisparityUpscale : NSObject {
    struct CGSize { double width; double height; } _colorSize;
    struct CGSize { double width; double height; } _depthSize;
    id<MTLDevice> _device;
    id<MTLTexture> _depthTex;
}

- (void)dealloc;
- (id)initWithDevice:(id)a0 disparitySize:(struct CGSize { double x0; double x1; })a1 colorSize:(struct CGSize { double x0; double x1; })a2 portraitUtil:(id)a3;
- (id)newTextureArrayFromTexture:(id)a0;
- (id)upscaleDisparity:(id)a0 inRGBA:(id)a1 commandBuffer:(id)a2;

@end
