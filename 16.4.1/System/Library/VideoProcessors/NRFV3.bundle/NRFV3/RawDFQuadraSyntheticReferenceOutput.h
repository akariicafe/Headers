@protocol MTLTexture;

@interface RawDFQuadraSyntheticReferenceOutput : NSObject

@property (retain, nonatomic) id<MTLTexture> referenceNoise;
@property (retain, nonatomic) id<MTLTexture> fusionWeight;
@property (retain, nonatomic) id<MTLTexture> fusionResult;
@property (nonatomic) unsigned int fusionResultValidWidth;
@property (nonatomic) unsigned int fusionResultValidHeight;

- (void).cxx_destruct;

@end
