@class HMISignificantActivityDetector, NSCache, HMIFaceClassifierVIP, NSString, NSOperationQueue, NSDictionary, HMFOSTransaction, NSMapTable, HMFUnfairLock;

@interface HMICameraVideoFrameAnalyzerSignificantActivity : HMFObject <HMICameraVideoFrameAnalyzer, HMFLogging>

@property (class, readonly) NSDictionary *classHierarchyMap;

@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (readonly) NSDictionary *mediumConfidenceThresholds;
@property (readonly) NSDictionary *highConfidenceThresholds;
@property (readonly) NSOperationQueue *regionOfInterestOperationQueue;
@property (readonly) NSMapTable *regionOfInterestOperations;
@property (readonly) HMISignificantActivityDetector *significantActivityDetector;
@property (readonly) HMIFaceClassifierVIP *faceClassifier;
@property (retain, nonatomic) HMFOSTransaction *transaction;
@property (readonly) NSCache *sessionEntityManagers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)preAnalyze:(id)a0;
- (void)handleMotionDetection:(id)a0 sessionPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 frameDimensions:(struct CGSize { double x0; double x1; })a2 sessionIdentifier:(id)a3;
- (id)analyze:(id)a0 targetEventTypes:(long long)a1 enableFaceClassification:(BOOL)a2 sessionIdentifier:(id)a3 homeUUID:(id)a4 error:(id *)a5;
- (id)initWithMediumConfidenceThresholds:(id)a0 highConfidenceThresholds:(id)a1 nmsConfiguration:(id)a2 assetPath:(id)a3 error:(id *)a4;
- (id)_analyzerEventsFromObjectDetections:(id)a0;
- (id)_simulatedEventForEventClass:(Class)a0;
- (id)_targetEventsSetFromTargetEventTypes:(long long)a0 enableFaceClassification:(BOOL)a1;
- (id)_filterEvents:(id)a0 targetEventClasses:(id)a1;
- (id)_filterEvents:(id)a0 withMotionDetections:(id)a1 cropRectNormalized:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)_eventsWithFaceClassificationAppliedFromEvents:(id)a0 videoFrame:(id)a1 sessionIdentifier:(id)a2 homeUUID:(id)a3 error:(id *)a4;
- (void)saveDESRecordVideoFrame:(id)a0 withResult:(id)a1;
- (long long)_rankForEventClass:(Class)a0;
- (id)_createStationaryEventFromEvent:(id)a0;

@end
