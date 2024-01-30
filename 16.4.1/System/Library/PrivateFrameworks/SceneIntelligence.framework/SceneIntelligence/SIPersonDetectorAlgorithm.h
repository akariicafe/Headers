@class SIPersonDetector, SIScaler;

@interface SIPersonDetectorAlgorithm : NSObject {
    SIPersonDetector *_model;
    SIScaler *_scalerOne;
}

+ (BOOL)supportsANE;

- (void).cxx_destruct;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1;
- (void)runWithInput:(struct __CVBuffer { } *)a0 output:(id)a1;
- (void)runWithInput:(struct __CVBuffer { } *)a0 output:(id)a1 networkConfiguration:(long long)a2;
- (struct CGSize { double x0; double x1; })getInputResolution;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1 useE5RT:(BOOL)a2;

@end
