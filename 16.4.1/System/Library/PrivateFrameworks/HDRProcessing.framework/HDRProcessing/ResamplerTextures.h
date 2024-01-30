@protocol MTLTexture;

@interface ResamplerTextures : NSObject

@property (retain) id<MTLTexture> inputTexture;
@property (retain) id<MTLTexture> inputTexureUV;
@property (retain) id<MTLTexture> tempTextureY;
@property (retain) id<MTLTexture> tempTextureUV;
@property (retain) id<MTLTexture> outputTextureY;
@property (retain) id<MTLTexture> outputTextureUV;

- (void).cxx_destruct;

@end
