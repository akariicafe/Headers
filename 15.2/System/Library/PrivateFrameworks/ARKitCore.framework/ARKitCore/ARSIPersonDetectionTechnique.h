@class NSString, ARPersonDetectionData, SIPersonDetectorAlgorithm;

@interface ARSIPersonDetectionTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState> {
    double _lastTimestamp;
    struct __CVPixelBufferPool { } *_depthPixelBufferPool;
    struct CGSize { double width; double height; } _imageNetworkSize;
    BOOL _mergeLargelyOverlappingBoxes;
    SIPersonDetectorAlgorithm *_algorithm;
}

@property (retain) ARPersonDetectionData *latestResult;
@property (readonly, nonatomic) BOOL isBusy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (void)_startLoadingMLModelSignpost;
- (void)_endLoadingMLModelSignpost;
- (void)_startMLProcessingSignpostWithTimestamp:(double)a0;
- (void)_endMLProcessingSignpostWithTimestamp:(double)a0;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)a0;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)a0;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)a0 orientation:(long long)a1 outputSize:(struct CGSize { double x0; double x1; })a2;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)a0;
- (void)changeEspressoConfig:(id)a0;
- (void)_prepareOnce:(BOOL)a0;
- (BOOL)isLoadedModelVersionCorrect:(id)a0;
- (id)runNeuralNetworkWithImageData:(id)a0 originalImageData:(id)a1 regionOfInterest:(struct CGSize { double x0; double x1; })a2 rotationOfResultTensor:(long long)a3;
- (id)createResultDataFromAlgorithmOutput:(id)a0 imageDataForNeuralNetwork:(id)a1 inputImageData:(id)a2 rotationNeeded:(long long)a3 regionOfInterest:(struct CGSize { double x0; double x1; })a4;

@end
