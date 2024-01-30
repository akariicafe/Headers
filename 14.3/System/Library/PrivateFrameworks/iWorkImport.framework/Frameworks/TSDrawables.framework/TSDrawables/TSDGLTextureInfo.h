@interface TSDGLTextureInfo : NSObject

@property (readonly, nonatomic) BOOL containsMipmaps;
@property (readonly, nonatomic) unsigned int name;
@property (readonly, nonatomic) unsigned int target;
@property (readonly, nonatomic) unsigned int height;
@property (readonly, nonatomic) unsigned int width;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

+ (id)textureInfoWithName:(unsigned int)a0 target:(unsigned int)a1 width:(unsigned int)a2 height:(unsigned int)a3 containsMipmaps:(BOOL)a4;

- (void)teardown;
- (id)description;
- (id)initWithName:(unsigned int)a0 target:(unsigned int)a1 width:(unsigned int)a2 height:(unsigned int)a3 containsMipmaps:(BOOL)a4;

@end
