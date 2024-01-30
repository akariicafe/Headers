@class SISceneSegmentation, SIScaler;

@interface SISceneSegmentationAlgorithm : NSObject {
    SISceneSegmentation *_segmentation;
    SIScaler *_scalerOne;
}

+ (BOOL)supportsANE;
+ (struct CGSize { double x0; double x1; })outputResolution;
+ (struct CGSize { double x0; double x1; })getOutputResolution:(long long)a0;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })getOutputResolution;
- (id)initWithInputResolution:(struct CGSize { double x0; double x1; })a0 andComputeEngine:(long long)a1;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1 uncertaintyThreshold:(float)a2;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 confidenceOutput:(struct __IOSurface { } *)a2 uncertaintyOutput:(struct __IOSurface { } *)a3 resampleOutput:(BOOL)a4 networkConfiguration:(long long)a5;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1;
- (struct CGSize { double x0; double x1; })getInputResolution;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 confidenceOutput:(struct __IOSurface { } *)a2 uncertaintyOutput:(struct __IOSurface { } *)a3 resampleOutput:(BOOL)a4;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 confidenceOutput:(struct __IOSurface { } *)a2 resampleOutput:(BOOL)a3;
- (long long)_switchConfiguration:(long long)a0;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1 managedBuffers:(BOOL)a2;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 confidenceOutput:(struct __IOSurface { } *)a2;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 confidenceOutput:(struct __IOSurface { } *)a2 resampleOutput:(BOOL)a3 networkConfiguration:(long long)a4;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 confidenceOutput:(struct __IOSurface { } *)a2 uncertaintyOutput:(struct __IOSurface { } *)a3;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 confidenceOutput:(struct __IOSurface { } *)a2 uncertaintyOutput:(struct __IOSurface { } *)a3 resampleOutput:(BOOL)a4 networkConfiguration:(long long)a5 earlyExit:(long long)a6;

@end
