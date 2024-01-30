@class NSString, NSDictionary, TRITrackingId, TRIClient;

@interface BMMiningTaskConfig : NSObject

@property (retain, nonatomic) TRIClient *trialClient;
@property (retain, nonatomic) TRITrackingId *trialTrackingID;
@property (retain, nonatomic) NSString *treatmentID;
@property (retain, nonatomic) NSString *experimentID;
@property (nonatomic) int deploymentID;
@property (retain) NSDictionary *bmMiningTaskConfig;
@property (retain, nonatomic) NSString *trialID;
@property (nonatomic) BOOL interactionExtractedTopicFromAttachmentFactorInUse;

- (void)updateFactorLevels;
- (void)registerWithTrial;
- (id)init;
- (void).cxx_destruct;
- (void)updateFactorLevelsFromFilePath:(id)a0;
- (BOOL)loadBMMiningTaskConfig:(id)a0;
- (void)loadDefaultConfig;

@end
