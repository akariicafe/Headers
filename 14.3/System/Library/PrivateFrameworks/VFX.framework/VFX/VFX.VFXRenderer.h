@interface VFX.VFXRenderer : NSObject {
    void /* unknown type, empty encoding */ renderer;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ scene;
@property (nonatomic, retain) void /* unknown type, empty encoding */ texture;
@property (nonatomic, retain) void /* unknown type, empty encoding */ depthTexture;
@property (nonatomic, retain) void /* unknown type, empty encoding */ backgroundColor;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCommandQueue:(id)a0;
- (void)encodeWithCommandBuffer:(id)a0;

@end
