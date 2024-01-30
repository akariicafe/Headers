@class NSString, NSArray;

@interface TSDGLFrameBufferTextureConfig : NSObject {
    BOOL _isTextureNameGenerated;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) int GLInternalFormat;
@property (readonly, nonatomic) unsigned int GLFormat;
@property (readonly, nonatomic) unsigned int GLType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int attachment;
@property (readonly, nonatomic) NSArray *textureParameters;
@property (readonly, nonatomic) struct __IOSurface { } *backingSurface;
@property (readonly, nonatomic) unsigned int target;

+ (id)textureConfigWithSize:(struct CGSize { double x0; double x1; })a0 attachment:(unsigned int)a1 textureParameters:(id)a2 name:(id)a3;
+ (id)textureConfigWithSize:(struct CGSize { double x0; double x1; })a0 internalFormat:(int)a1 format:(unsigned int)a2 type:(unsigned int)a3 attachment:(unsigned int)a4 textureParameters:(id)a5 name:(id)a6;
+ (id)textureConfigWithSize:(struct CGSize { double x0; double x1; })a0 internalFormat:(int)a1 format:(unsigned int)a2 type:(unsigned int)a3 attachment:(unsigned int)a4 textureParameters:(id)a5 name:(id)a6 backingSurface:(struct __IOSurface { } *)a7;
+ (id)textureConfigWithSize:(struct CGSize { double x0; double x1; })a0 name:(id)a1;
+ (id)textureConfigWithSize:(struct CGSize { double x0; double x1; })a0 textureParameters:(id)a1 name:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 internalFormat:(int)a1 format:(unsigned int)a2 type:(unsigned int)a3 attachment:(unsigned int)a4 textureParameters:(id)a5 name:(id)a6 backingSurface:(struct __IOSurface { } *)a7;

@end
