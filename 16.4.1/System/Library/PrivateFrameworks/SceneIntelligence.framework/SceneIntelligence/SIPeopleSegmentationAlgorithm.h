@class SIScaler, SIPeopleSegmentation;

@interface SIPeopleSegmentationAlgorithm : NSObject {
    SIPeopleSegmentation *_segmentation;
    SIScaler *_scaler;
}

+ (BOOL)supportsANE;
+ (struct CGSize { double x0; double x1; })outputResolution;
+ (struct CGSize { double x0; double x1; })inputResolution;

- (void).cxx_destruct;
- (id)networkVersion;
- (struct CGSize { double x0; double x1; })getOutputResolution;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1 useAppleNeuralEngineFramework:(BOOL)a2;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 networkConfiguration:(long long)a2;
- (void)setSnapEveryFrameCount:(unsigned char)a0;
- (long long)_inference:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1;
- (struct __CVBuffer { } *)_preprocessingInputImage:(struct __CVBuffer { } *)a0;
- (long long)_switchConfiguration:(long long)a0;
- (struct CGSize { double x0; double x1; })getInputResolution;
- (id)initWithComputeEngine:(long long)a0;
- (id)initWithInputResolution:(struct CGSize { double x0; double x1; })a0;
- (id)initWithNetworkConfiguration:(id)a0;

@end
