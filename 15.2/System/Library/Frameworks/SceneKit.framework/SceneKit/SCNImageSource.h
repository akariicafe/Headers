@interface SCNImageSource : NSObject

- (BOOL)isOpaque;
- (id)textureSource;
- (void)connectToProxy:(struct __C3DImageProxy { } *)a0;
- (BOOL)isPremultiplied;

@end
