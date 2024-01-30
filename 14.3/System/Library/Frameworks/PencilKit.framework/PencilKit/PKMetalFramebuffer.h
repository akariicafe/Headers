@protocol MTLTexture, MTLDevice;

@interface PKMetalFramebuffer : NSObject {
    BOOL _isPurgeable;
}

@property (readonly, nonatomic) id<MTLTexture> colorTexture;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) BOOL memoryless;
@property (readonly, nonatomic) BOOL backedByIOSurface;
@property (readonly, nonatomic) unsigned long long sampleCount;
@property (readonly, nonatomic) struct __IOSurface { } *ioSurface;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (struct __IOSurface { } *)createIOSurface;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned long long)a1 device:(id)a2 memoryless:(BOOL)a3 backedByIOSurface:(BOOL)a4 sampleCount:(unsigned long long)a5;
- (BOOL)makeNonPurgeable;
- (void)makePurgeable;
- (void)createColorTextureIfNecessary;

@end
