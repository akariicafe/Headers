@protocol MTLTexture;

@interface TSDMetalTextureInfo : NSObject

@property (readonly, nonatomic) BOOL containsMipmaps;
@property (readonly, nonatomic) id<MTLTexture> name;
@property (readonly, nonatomic) unsigned int height;
@property (readonly, nonatomic) unsigned int width;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

+ (id)textureInfoWithName:(id)a0 width:(unsigned int)a1 height:(unsigned int)a2 containsMipmaps:(BOOL)a3;
+ (id)textureInfoWithCGImage:(struct CGImage { } *)a0 forDevice:(id)a1;

- (void)teardown;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 width:(unsigned int)a1 height:(unsigned int)a2 containsMipmaps:(BOOL)a3;

@end
