@class NSArray, MTLRenderPassDescriptor;
@protocol MTLTexture;

@interface TSDMetalRenderTarget : NSObject

@property (readonly) NSArray *textures;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) MTLRenderPassDescriptor *passDescriptor;
@property (readonly, nonatomic) id<MTLTexture> texture;

- (void)setClearColor:(struct { double x0; double x1; double x2; double x3; })a0;
- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 metalContext:(id)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 metalContext:(id)a1 numberOfAttachments:(unsigned long long)a2;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })orthoProjectionWithVerticalFlip:(BOOL)a0;
- (void)setClearColor:(struct { double x0; double x1; double x2; double x3; })a0 atAttachmentIndex:(unsigned long long)a1;
- (void)setTextureLoadAction:(unsigned long long)a0;
- (void)setTextureLoadAction:(unsigned long long)a0 atAttachmentIndex:(unsigned long long)a1;
- (id)textureAtAttachmentIndex:(unsigned long long)a0;

@end
