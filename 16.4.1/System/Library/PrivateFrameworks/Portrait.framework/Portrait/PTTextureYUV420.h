@protocol MTLTexture;

@interface PTTextureYUV420 : PTTexture

@property (retain) id<MTLTexture> texLuma;
@property (retain) id<MTLTexture> texChroma;

- (unsigned long long)width;
- (unsigned long long)height;
- (void).cxx_destruct;

@end
