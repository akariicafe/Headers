@class SCNRenderer, SCNScene, UIColor;
@protocol MTLLibrary, MTLDevice;

@interface NTKSnowglobeSceneQuad : CLKUIQuad {
    id<MTLDevice> _device;
    id<MTLLibrary> _library;
    unsigned long long _pixelFormat;
    SCNScene *_scene;
    struct CGSize { double width; double height; } _size;
    double _screenScale;
    struct { double red; double green; double blue; double alpha; } _backgroundClearColor;
    UIColor *_backgroundColor;
}

@property (readonly) SCNRenderer *renderer;

- (void).cxx_destruct;
- (BOOL)prepareForTime:(double)a0;
- (void)setupForQuadView:(id)a0;
- (void)renderWithCommandBuffer:(id)a0 passDescriptor:(id)a1;
- (id)initWithScene:(id)a0 delegate:(id)a1 device:(id)a2 screenScale:(double)a3;

@end
