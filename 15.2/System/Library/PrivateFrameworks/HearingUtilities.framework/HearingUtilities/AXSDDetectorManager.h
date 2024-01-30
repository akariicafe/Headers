@class NSArray, NSString, NSMutableDictionary, SNAudioStreamAnalyzer;
@protocol AXSDDetectorManagerDelegate;

@interface AXSDDetectorManager : NSObject <SNResultsObserving> {
    SNAudioStreamAnalyzer *_streamAnalyzer;
    NSMutableDictionary *_currentRequests;
}

@property (weak, nonatomic) id<AXSDDetectorManagerDelegate> delegate;
@property (readonly, nonatomic) NSArray *currentDetectors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initializeModelMap;
+ (id)detectorRequestForDetectionType:(id)a0;
+ (id)modelPathForURL:(id)a0 detectionType:(id)a1;
+ (void)setTestBundle:(id)a0;

- (void)request:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)requestDidComplete:(id)a0;
- (BOOL)addDetector:(id)a0;
- (BOOL)removeDetector:(id)a0;
- (void)removeAllDetectors;
- (void)stopDetection;
- (BOOL)startDetectionWithFormat:(id)a0;
- (void)processAudioBuffer:(id)a0 atTime:(id)a1;
- (BOOL)streamAnalyzerIsRunning;
- (BOOL)addAllDetectors;
- (BOOL)_testAudioFile:(id)a0;

@end
