@interface VFX.VFXRenderer : NSObject {
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ performMetalCaptureDuringSnapshot;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ scene;
@property (nonatomic, retain) void /* unknown type, empty encoding */ texture;
@property (nonatomic, retain) void /* unknown type, empty encoding */ depthTexture;
@property (nonatomic, retain) void /* unknown type, empty encoding */ backgroundColor;
@property (nonatomic) BOOL additiveWritesToAlpha;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCommandQueue:(id)a0;
- (void)encodeWithCommandBuffer:(id)a0;
- (void)finalizeEncoding;
- (id)snapshotWithSize:(struct CGSize { double x0; double x1; })a0 deltaTime:(double)a1;
- (id)snapshotImageWithSize:(struct CGSize { double x0; double x1; })a0 deltaTime:(double)a1;

@end
