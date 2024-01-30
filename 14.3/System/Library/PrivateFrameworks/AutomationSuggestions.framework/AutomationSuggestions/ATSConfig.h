@class NSString, NSDictionary, TRITrackingId, TRIClient, NSArray;

@interface ATSConfig : NSObject

@property (retain, nonatomic) TRIClient *trialClient;
@property (retain, nonatomic) TRITrackingId *trialTrackingID;
@property (retain, nonatomic) NSString *treatmentID;
@property (retain, nonatomic) NSString *experimentID;
@property (nonatomic) int deploymentID;
@property (retain, nonatomic) NSDictionary *atsConfig;
@property (retain, nonatomic) NSString *trialID;
@property (retain, nonatomic) NSDictionary *heuristicEnablement;
@property (retain, nonatomic) NSDictionary *scoreCutOffs;
@property (retain, nonatomic) NSString *sortProperty;
@property (retain, nonatomic) NSArray *preferredTriggers;
@property (retain, nonatomic) NSArray *intentBlacklist;
@property (retain, nonatomic) NSArray *activityBlacklist;
@property (retain, nonatomic) NSDictionary *intentForTriggerBlacklist;
@property (retain, nonatomic) NSDictionary *activityForTriggerBlacklist;
@property (retain, nonatomic) NSDictionary *parametersForIntentBlacklist;

- (id)init;
- (void).cxx_destruct;
- (void)updateFactorLevels;
- (void)loadDefaultConfig;
- (void)updateFactorLevelsFromFilePath:(id)a0;
- (BOOL)loadATSConfig:(id)a0;
- (id)initWithDefaultConfig;
- (id)initWithConfigFilePath:(id)a0;

@end
