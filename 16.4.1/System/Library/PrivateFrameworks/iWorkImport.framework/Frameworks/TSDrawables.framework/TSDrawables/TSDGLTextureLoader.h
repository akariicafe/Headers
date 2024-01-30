@interface TSDGLTextureLoader : NSObject

+ (id)p_textureInfoFromCGImage:(struct CGImage { } *)a0 generateMipmaps:(BOOL)a1;
+ (id)textureWithCGImage:(struct CGImage { } *)a0 generateMipmaps:(BOOL)a1 error:(id *)a2;
+ (id)textureWithContentsOfFile:(id)a0 generateMipmaps:(BOOL)a1 error:(id *)a2;

@end
