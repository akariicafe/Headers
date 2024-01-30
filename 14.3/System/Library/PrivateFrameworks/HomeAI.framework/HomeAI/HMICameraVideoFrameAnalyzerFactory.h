@class HMFTimer, NSString, HMFUnfairLock;
@protocol HMICameraVideoFrameAnalyzer;

@interface HMICameraVideoFrameAnalyzerFactory : HMFObject <HMFTimerDelegate, HMFLogging>

@property (class, readonly) HMICameraVideoFrameAnalyzerFactory *sharedInstance;

@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (retain, nonatomic) id<HMICameraVideoFrameAnalyzer> frameAnalyzer;
@property (readonly) HMFTimer *watchdogTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)eventConfidenceThresholdsHigh;
+ (id)eventConfidenceThresholdsMedium;

- (id)init;
- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (void)preAnalyze:(id)a0;
- (void)handleMotionDetection:(id)a0 sessionPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 frameDimensions:(struct CGSize { double x0; double x1; })a2 sessionIdentifier:(id)a3;
- (void)warmStartModel;
- (id)analyze:(id)a0 targetEventTypes:(long long)a1 enableFaceClassification:(BOOL)a2 sessionIdentifier:(id)a3 homeUUID:(id)a4 error:(id *)a5;
- (double)modelTimeoutPreference;
- (BOOL)ensureFrameAnalyzerWithError:(id *)a0;
- (id)getConfidenceThresholdPreferenceForKey:(id)a0 defaultConfidenceThreshold:(double)a1;
- (id)eventConfidenceThresholdsMediumFromTrial;
- (id)eventConfidenceThresholdsHighFromTrial;
- (double)eventConfidenceFaceThresholdFromTrial;

@end
