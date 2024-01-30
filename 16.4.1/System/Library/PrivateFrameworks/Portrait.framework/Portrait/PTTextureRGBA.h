@protocol MTLTexture;

@interface PTTextureRGBA : PTTexture

@property (retain) id<MTLTexture> texRGBA;

- (unsigned long long)width;
- (unsigned long long)height;
- (void).cxx_destruct;

@end
