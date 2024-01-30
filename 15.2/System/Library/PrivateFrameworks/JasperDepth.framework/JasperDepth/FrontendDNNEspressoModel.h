@class ADEspressoBufferHandle;

@interface FrontendDNNEspressoModel : ADEspressoRunner

@property (retain, nonatomic) ADEspressoBufferHandle *inputBufferHandle;
@property (retain, nonatomic) ADEspressoBufferHandle *resultsOutputXBufferHandle;
@property (retain, nonatomic) ADEspressoBufferHandle *stdOutputXBufferHandle;
@property (retain, nonatomic) ADEspressoBufferHandle *resultsOutputYBufferHandle;
@property (retain, nonatomic) ADEspressoBufferHandle *stdOutputYBufferHandle;
@property (retain, nonatomic) ADEspressoBufferHandle *resultsOutputZBufferHandle;
@property (retain, nonatomic) ADEspressoBufferHandle *stdOutputZBufferHandle;

- (void).cxx_destruct;
- (BOOL)initializeInputOutputBlobs;
- (int)processImage:(float *)a0 withSize:(int)a1 result:(id *)a2;

@end
