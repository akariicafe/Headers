@protocol MTLTexture;

@interface PTTextureYUV420 : PTTexture

@property (retain) id<MTLTexture> texLuma;
@property (retain) id<MTLTexture> texChroma;

- (void).cxx_destruct;

@end
