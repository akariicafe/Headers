@protocol MTLTexture;

@interface RawDFNetworkFusionOutput : NSObject

@property (retain, nonatomic) id<MTLTexture> outputY;
@property (retain, nonatomic) id<MTLTexture> outputUV;

- (void).cxx_destruct;

@end
