@class SIScaler;
@protocol SIPeopleSegmentationModelProtocol;

@interface SIPeopleSegmentationAlgorithm : NSObject {
    id<SIPeopleSegmentationModelProtocol> _segmentation;
    BOOL useANE;
    SIScaler *_scaler;
}

+ (BOOL)supportsANE;
+ (struct CGSize { double x0; double x1; })outputResolution;

- (void).cxx_destruct;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1 useAppleNeuralEngineFramework:(BOOL)a2;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 networkConfiguration:(long long)a2;
- (struct CGSize { double x0; double x1; })getOutputResolution;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1;
- (struct CGSize { double x0; double x1; })getInputResolution;
- (id)initWithComputeEngine:(long long)a0;
- (id)initWithInputResolution:(struct CGSize { double x0; double x1; })a0;

@end
