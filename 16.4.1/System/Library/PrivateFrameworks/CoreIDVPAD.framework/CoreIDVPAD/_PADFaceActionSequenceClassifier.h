@class PADModelLoader, NSString, NSArray, NSMutableDictionary, NSNumber, NSMutableArray;
@protocol PADAlgorithms, PADFaceActionClassifier;

@interface _PADFaceActionSequenceClassifier : NSObject <PADFaceActionSequenceClassifier, PADFaceActionModuleDelegate> {
    unsigned long long _currentGestureIdx;
    unsigned long long _minRequiredGestures;
    unsigned long long _detectedGestures;
    NSMutableArray *_gestureTypesToSkip;
    NSArray *_gestureTypes;
    id<PADFaceActionClassifier> _monitor;
    id<PADAlgorithms> _algorithms;
    PADModelLoader *_models;
    id /* block */ _onGesturesFinished;
    id /* block */ _onGestureStart;
    id /* block */ _onIncorrectGestureDetected;
    BOOL _processSingleBuffer;
    BOOL _accessibilityOptionsEnabled;
    unsigned long long _consecutiveBuffersNotDetected;
    BOOL _wasGestureSkippedWithAccessibility;
    BOOL _wasSequenceSkippedWithAccessibility;
    NSMutableDictionary *_scoresByGesture;
    unsigned long long _currentGestureBufferCount;
}

@property (retain, nonatomic) NSMutableArray *gestureSequence;
@property (retain, nonatomic) NSMutableArray *assessmentsFAC;
@property (retain, nonatomic) NSMutableArray *timestampsFAC;
@property (retain, nonatomic) NSMutableArray *faceprintsID;
@property (retain, nonatomic) NSMutableArray *timestampsID;
@property (readonly, nonatomic) NSNumber *assessment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)processFrame:(id)a0;
- (void)enableAccessibilityOptions;
- (void)_createNewFACClassiferForGesture:(long long)a0;
- (long long)_detectedGestures;
- (void)_handleGestureMonitorResult:(id)a0;
- (BOOL)_shouldSkipAttentionAwareGestureAtIndex:(long long)a0;
- (BOOL)_shouldSkipGestureAtIndex:(long long)a0;
- (void)_startNextGesture;
- (void)faceActionModuleDidFinishGestureDetectionWithAssessment:(id)a0;
- (id)init:(id)a0 models:(id)a1;
- (void)restartGesture;
- (void)setFACOption:(long long)a0;
- (void)skipGesture;
- (void)skipRecordedGesture;
- (void)startLivenessCheck:(id)a0 gestureTypes:(id)a1 minNumberOfGestures:(unsigned long long)a2 processSingleBuffer:(BOOL)a3 onGestureStart:(id /* block */)a4 onIncorrectGestureDetected:(id /* block */)a5 onGesturesFinished:(id /* block */)a6;
- (void)waitForCurrentFrameProcessingWithCompletion:(id /* block */)a0;

@end
