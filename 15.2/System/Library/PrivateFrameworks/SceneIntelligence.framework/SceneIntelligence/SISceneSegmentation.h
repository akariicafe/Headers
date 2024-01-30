@interface SISceneSegmentation : SIBaseNetwork {
    long long _configuration;
    float *_uncertaintyThresholds;
    float *_probabilityThresholds;
    unsigned long long _numClasses;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } inputResolution;

+ (struct CGSize { double x0; double x1; })outputResolution;
+ (struct CGSize { double x0; double x1; })inputResolution;

- (void)dealloc;
- (struct CGSize { double x0; double x1; })getOutputResolution;
- (id)initWithComputeEngine:(long long)a0 networkMode:(long long)a1;
- (id)initWithComputeEngine:(long long)a0 networkMode:(long long)a1 uncertaintyThreshold:(float)a2;
- (id)_configurationToString:(long long)a0;
- (void)initializeUncertaintyThresholds:(float)a0;
- (struct CGSize { double x0; double x1; })getInputResolution;
- (long long)writeProbabilities:(struct __IOSurface { } *)a0 withUncertainty:(struct __IOSurface { } *)a1 resampleOutput:(BOOL)a2;
- (long long)getConfiguration;
- (id)initWithComputeEngine:(long long)a0;
- (void)preSetup;
- (BOOL)switchNetworkConfiguration:(long long)a0;
- (long long)evaluateImage:(struct __CVBuffer { } *)a0;
- (long long)writeProbabilities:(struct __IOSurface { } *)a0 resampleOutput:(BOOL)a1;
- (long long)writeLabels:(struct __IOSurface { } *)a0 resampleOutput:(BOOL)a1;

@end
