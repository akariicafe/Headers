@class NSMutableArray, ADEspressoBufferHandle;

@interface BackendDNNEspressoModel : ADEspressoRunner

@property (retain, nonatomic) ADEspressoBufferHandle *depthInputBufferHandle;
@property (retain, nonatomic) ADEspressoBufferHandle *imageInputBufferHandle;
@property (retain) ADEspressoBufferHandle *resultsOutputBufferHandle;
@property (retain, nonatomic) NSMutableArray *outputFeatureVectorDim;

- (void).cxx_destruct;
- (BOOL)initializeInputOutputBlobs;
- (int)processImage:(struct __CVBuffer { } *)a0 depthImage:(struct __CVBuffer { } *)a1 result:(float *)a2;

@end
