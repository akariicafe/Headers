@protocol MTLTexture;

@interface RawDFSyntheticReferenceOutput : NSObject

@property (retain, nonatomic) id<MTLTexture> outputSyntheticReference;
@property (retain, nonatomic) id<MTLTexture> fusionMap;

- (void).cxx_destruct;

@end
