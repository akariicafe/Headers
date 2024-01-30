@class NSString, TRIClient;

@interface HMITuriTrialManager : HMFObject <HMFLogging> {
    TRIClient *_trialClient;
    NSString *_compiledModelArchivePath;
}

@property (readonly) double personThresholdHigh;
@property (readonly) double personThresholdMedium;
@property (readonly) double petThresholdHigh;
@property (readonly) double petThresholdMedium;
@property (readonly) double vehicleThresholdHigh;
@property (readonly) double vehicleThresholdMedium;
@property (readonly) double faceThreshold;
@property (readonly) NSString *modelPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;

- (void)configure;
- (void).cxx_destruct;
- (BOOL)loadModelFromTrialWithError:(id *)a0;
- (void)updateLevels;
- (void)submitUpdateModelTask;
- (void)registerForTrialUpdates;

@end
