@class NSArray, NSMutableDictionary, NSString, SNAudioStreamAnalyzer;
@protocol AXSDKShotModelManagerDelegate;

@interface AXSDKShotModelManager : NSObject <SNResultsObserving> {
    SNAudioStreamAnalyzer *_streamAnalyzer;
}

@property (weak, nonatomic) id<AXSDKShotModelManagerDelegate> delegate;
@property (readonly, nonatomic) NSArray *currentDetectors;
@property (retain, nonatomic) NSMutableDictionary *currentRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelPathForDetector:(id)a0;
+ (id)requestForDetector:(id)a0;

- (void)request:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)requestDidComplete:(id)a0;
- (BOOL)addCustomDetector:(id)a0;
- (void)processAudioBuffer:(id)a0 atTime:(id)a1;
- (void)removeAllDetectors;
- (BOOL)removeCustomDetector:(id)a0;
- (BOOL)startDetectionWithFormat:(id)a0;
- (void)stopDetection;
- (BOOL)streamAnalyzerIsRunning;

@end
