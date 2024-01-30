@class SIPersonDetector, SIScaler, SIResourceFactory;

@interface SIPersonDetectorAlgorithm : NSObject {
    SIResourceFactory *_factory;
    SIPersonDetector *_model;
    SIScaler *_scalerOne;
}

+ (BOOL)supportsANE;

- (void).cxx_destruct;
- (void)runWithInput:(struct __CVBuffer { } *)a0 output:(id)a1 networkConfiguration:(long long)a2;
- (struct CGSize { double x0; double x1; })getOutputResolution;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1;
- (void)runWithInput:(struct __CVBuffer { } *)a0 output:(id)a1;
- (struct CGSize { double x0; double x1; })getInputResolution;

@end
