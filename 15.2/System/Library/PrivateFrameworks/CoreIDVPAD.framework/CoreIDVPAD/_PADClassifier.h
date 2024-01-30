@class NSString, NSMutableArray;
@protocol PADFaceActionSequenceClassifier, PADAlgorithms, PADTrajectoryAnalyzer, PADSelfieAnalyzer, PADPrintReplayDetector, PADModelLoader;

@interface _PADClassifier : NSObject <PADClassifier> {
    id<PADModelLoader> _models;
    id<PADAlgorithms> _algorithms;
    id<PADFaceActionSequenceClassifier> _facModule;
    id<PADTrajectoryAnalyzer> _taModule;
    id<PADPrintReplayDetector> _prdModule;
    id<PADSelfieAnalyzer> _selfieModule;
    BOOL _isFACProcessing;
    NSMutableArray *_facFramesToProcess;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)cancelWithCompletion:(id /* block */)a0;
- (void)_addNotificationCenterObservers;
- (void)_startProcessingNextFACFrameIfAvailable;
- (void)_sendFrameProcessingCompleteNotification;
- (id)_prepareResultWithLabel:(long long)a0;
- (void)_performSpoofClassificationWithCompletion:(id /* block */)a0;
- (void)_facDidFinishProcessing;
- (void)startLiveness:(id)a0 onGestureStart:(id /* block */)a1 onIncorrectGestureDetected:(id /* block */)a2 onGesturesFinished:(id /* block */)a3;
- (void)startLivenessVideoProcessing:(id)a0 onGestureStart:(id /* block */)a1 onGesturesFinished:(id /* block */)a2;
- (void)processLivenessFrame:(id)a0 withOptions:(struct PADClassifierFrameOptions { BOOL x0; BOOL x1; BOOL x2; })a1 taOptions:(long long)a2;
- (void)processRecordedLivenessFrame:(id)a0 withPRD:(BOOL)a1 FAC:(BOOL)a2;
- (void)skipLivenessGesture:(BOOL)a0;
- (void)skipRecordedLivenessGesture;
- (void)restartLivenessGesture;
- (void)pauseLiveness;
- (void)resumeLiveness;
- (void)finishLivenessWithSelfie:(id)a0 completion:(id /* block */)a1;

@end
