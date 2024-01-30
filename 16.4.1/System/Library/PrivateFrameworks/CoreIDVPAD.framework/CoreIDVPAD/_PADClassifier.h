@class NSString, PADModelLoader, NSMutableArray;
@protocol PADTrajectoryAnalyzer, PADAlgorithms, PADSelfieAnalyzer, PADPrintReplayDetector, PADFaceActionSequenceClassifier;

@interface _PADClassifier : NSObject <PADClassifier> {
    PADModelLoader *_models;
    id<PADAlgorithms> _algorithms;
    id<PADFaceActionSequenceClassifier> _facModule;
    id<PADTrajectoryAnalyzer> _taModule;
    id<PADPrintReplayDetector> _prdModule;
    id<PADSelfieAnalyzer> _selfieModule;
    BOOL _isFACProcessing;
    BOOL _areModelsLoading;
    id /* block */ _modelLoaderCompletion;
    NSMutableArray *_facFramesToProcess;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cancelWithCompletion:(id /* block */)a0;
- (void)enableAccessibilityOptions;
- (void)finishLivenessWithSelfie:(id)a0 performIDMatching:(BOOL)a1 completion:(id /* block */)a2;
- (void)pauseLiveness;
- (void)prepareToResumeLiveness;
- (void)processLivenessFrame:(id)a0 withOptions:(struct PADClassifierFrameOptions { BOOL x0; BOOL x1; BOOL x2; })a1 taOptions:(long long)a2;
- (void)restartLivenessGesture;
- (void)resumeLiveness;
- (void)skipLivenessGesture;
- (void)startLiveness:(id)a0 onGestureStart:(id /* block */)a1 onIncorrectGestureDetected:(id /* block */)a2 onGesturesFinished:(id /* block */)a3;
- (void)_addNotificationCenterObservers;
- (void)startLivenessVideoProcessing:(id)a0 onGestureStart:(id /* block */)a1 onGesturesFinished:(id /* block */)a2;
- (void)_facDidFinishProcessing;
- (void)_performSpoofClassificationWithCompletion:(id /* block */)a0;
- (id)_prepareResultWithLabel:(long long)a0;
- (void)_refreshQueuedFACFrames;
- (void)_sendFrameProcessingCompleteNotification;
- (void)_startProcessingNextFACFrameIfAvailable;
- (void)finishLivenessWithSelfie:(id)a0 idMatchingFaceprints:(id)a1 completion:(id /* block */)a2;
- (void)processRecordedLivenessFrame:(id)a0 withPRD:(BOOL)a1 FAC:(BOOL)a2;
- (void)skipRecordedLivenessGesture;
- (void)waitForModelLoaderIfNeededWithCompletion:(id /* block */)a0;

@end
