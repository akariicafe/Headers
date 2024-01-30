@class ABPKCameraParams, NSString, ABPKImagePreProcessingParams, ABPKAlgorithm, ABPKAlgOutput, ABPKAlgInput, ABPKImagePreProcessing, ABPKAlgorithmParams, ABPKPaddingParams, ABPKCropParams;

@interface ABPKAlgorithmRA : NSObject {
    ABPKAlgorithm *_abpkAlgorithm;
    long long _exitPoint;
    struct CGSize { double width; double height; } _inputResolution;
    ABPKCameraParams *_abpkCameraParams;
    ABPKAlgorithmParams *_algParams;
    NSString *_imagePreProcessingType;
    ABPKCropParams *_cropParameters;
    ABPKPaddingParams *_paddingParameters;
    struct CGSize { double width; double height; } _mlResolution;
    ABPKImagePreProcessing *_imagePreprocessor;
    ABPKImagePreProcessingParams *_imagePreProcessingParams;
    struct CGSize { double width; double height; } _regImageDimensions;
    struct { void /* unknown type, empty encoding */ columns[3]; } _regIntrinsics;
    struct __CVBuffer { } *_mlImage;
    NSString *_saveDirectory;
    ABPKAlgInput *_algorithmInput;
    ABPKAlgOutput *_algorithmOutput;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_endABPKAlgoInitSignpost;
- (void)_endExecuteAlgorithmSignpost;
- (void)_endImagePreprocessingSignpost;
- (void)_startABPKAlgoInitSignpost;
- (void)_startExecuteAlgorithmSignpost;
- (void)_startImagePreprocessingSignpost;
- (void)computeRootTransforms:(id)a0 withVioPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 withVioPoseValidity:(BOOL)a2;
- (id)initWithCameraParams:(id)a0;
- (id)initWithCameraParams:(id)a0 andAlgorithmMode:(long long)a1;
- (int)preprocessInputImage:(struct __CVBuffer { } *)a0;
- (void)runABPKAlgorithmWithInputData:(id)a0 andGetOutput:(id)a1;
- (void)saveInputData:(id)a0 andOutputData:(id)a1 ToDir:(id)a2 withFileNamePrefix:(id)a3;
- (void)setExitPoint:(long long)a0;

@end
