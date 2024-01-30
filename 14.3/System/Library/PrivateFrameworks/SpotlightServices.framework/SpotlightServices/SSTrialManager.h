@class NSString, TRIClient, NSDictionary;

@interface SSTrialManager : NSObject {
    TRIClient *_trialClient;
    NSString *_namespaceName;
    NSDictionary *_cachedValuesForFactor;
    BOOL _hasActiveExperiment;
    BOOL _hasDefaultValues;
    BOOL _hasRollout;
    BOOL _client_exclusive;
    BOOL _in_allocation;
}

@property (readonly, nonatomic) NSString *spotlightNamespace;
@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) NSString *rolloutId;

+ (id)sharedTrialClient;
+ (id)sharedUITrialManager;
+ (id)sharedModelTrialManager;
+ (id)getTTRLogs;
+ (void)loadFactorsForAllSharedTrialManagers;
+ (id)sharedPolicyTrialManager;
+ (id)sharedRankingTrialManager;
+ (id)currentTrialManager;

- (double)getDoubleValueForFactor:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasActiveExperiment;
- (id)getFactorDictionary;
- (void)reloadAllFactors;
- (id)getLevelForFactor:(id)a0;
- (id)initWithNameSpace:(unsigned int)a0 loadDefaultValues:(BOOL)a1;
- (id)description;
- (BOOL)getBooleanValueForFactor:(id)a0;
- (long long)getLongValueForFactor:(id)a0;
- (id)getStringValueForFactor:(id)a0;
- (BOOL)getInReservedAllocationForExperiment;
- (BOOL)hasActiveRollout;
- (void)refreshTrackingId;
- (id)getFilePathForFactor:(id)a0;
- (BOOL)getClientOnlyExperiment;
- (id)getTreatmentId;

@end
