@class HMIVideoAnalyzerConfiguration, NSString, HMIFaceClassifierVIP, HMISessionEntityManager, NSOperationQueue, NSDictionary, HMFOSTransaction, HMITorsoClassifier, HMISignificantActivityFcosDetector, NSMapTable;

@interface HMICameraVideoFrameAnalyzerSignificantActivity : HMFObject <HMICameraVideoFrameAnalyzer, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) NSDictionary *classHierarchyMap;

@property (readonly) NSDictionary *mediumConfidenceThresholds;
@property (readonly) NSDictionary *highConfidenceThresholds;
@property (readonly) NSOperationQueue *regionOfInterestOperationQueue;
@property (readonly) NSMapTable *regionOfInterestOperations;
@property (readonly) HMISignificantActivityFcosDetector *significantActivityFcosDetector;
@property (readonly) HMIFaceClassifierVIP *faceClassifier;
@property (readonly) HMITorsoClassifier *torsoClassifier;
@property (retain, nonatomic) HMFOSTransaction *transaction;
@property (readonly) HMIVideoAnalyzerConfiguration *analyzerConfiguration;
@property (readonly) HMISessionEntityManager *sessionEntityManager;
@property (readonly) struct CGSize { double x0; double x1; } inputDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)desLabelIndexForEventClass:(Class)a0;
+ (id)labelIndexForEventClass:(Class)a0;

- (void).cxx_destruct;
- (id)initWithMediumConfidenceThresholds:(id)a0 highConfidenceThresholds:(id)a1 analyzerConfiguration:(id)a2 error:(id *)a3;
- (id)analyze:(id)a0 targetEventTypes:(long long)a1 enableFaceClassification:(BOOL)a2 homeUUID:(id)a3 error:(id *)a4;
- (id)flushAndGetAnalysisStateUpdateForHome:(id)a0 enableFaceClassification:(BOOL)a1;
- (id)analyzePixelBuffer:(struct __CVBuffer { } *)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(id *)a2;
- (id)_predictEventsFromCropPixelBuffer:(struct __CVBuffer { } *)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 imageSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
- (id)_simulatedEventForEventClass:(Class)a0;
- (void)saveDESRecordVideoFrame:(id)a0 analyzerEvents:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)_eventsWithClassificationsFromEvents:(id)a0 videoFrame:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 homeUUID:(id)a3 enableTorsoRecognition:(BOOL)a4;
- (id)_eventsWithSessionEntitiesFromEvents:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 homeUUID:(id)a3;
- (id)eventsWithFaceEventsFromTorsoEventsFromEvents:(id)a0 homeUUID:(id)a1;
- (id)_targetEventsSetFromTargetEventTypes:(long long)a0 enableFaceClassification:(BOOL)a1 enableTorsoRecognition:(BOOL)a2;
- (id)_filterEvents:(id)a0 targetEventClasses:(id)a1;
- (id)_analyzerEventsFromObjectDetections:(id)a0;
- (void)preAnalyze:(id)a0;
- (long long)_rankForEventClass:(Class)a0;
- (id)_createStationaryEventFromEvent:(id)a0;

@end
