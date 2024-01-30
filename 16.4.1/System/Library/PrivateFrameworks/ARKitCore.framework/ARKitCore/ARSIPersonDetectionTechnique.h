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

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_endLoadingMLModelSignpost;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)a0;
- (void)_endMLProcessingSignpostWithTimestamp:(double)a0;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)a0;
- (void)_prepareOnce:(BOOL)a0;
- (void)_startLoadingMLModelSignpost;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)a0 orientation:(long long)a1 outputSize:(struct CGSize { double x0; double x1; })a2;
- (void)_startMLProcessingSignpostWithTimestamp:(double)a0;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)a0;
- (void)changeEspressoConfig:(id)a0;
- (id)createResultDataFromAlgorithmOutput:(id)a0 imageDataForNeuralNetwork:(id)a1 inputImageData:(id)a2 rotationNeeded:(long long)a3 regionOfInterest:(struct CGSize { double x0; double x1; })a4;
- (BOOL)isLoadedModelVersionCorrect:(id)a0;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (id)runNeuralNetworkWithImageData:(id)a0 originalImageData:(id)a1 regionOfInterest:(struct CGSize { double x0; double x1; })a2 rotationOfResultTensor:(long long)a3;

@end
