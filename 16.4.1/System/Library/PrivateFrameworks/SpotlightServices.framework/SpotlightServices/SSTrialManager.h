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

+ (id)currentTrialManager;
+ (id)sharedRankingTrialManager;
+ (id)sharedUITrialManager;
+ (id)sharedTrialClient;
+ (id)sharedModelTrialManager;
+ (id)sharedPolicyTrialManager;
+ (void)loadFactorsForAllSharedTrialManagers;
+ (id)getTTRLogs;

- (id)initWithNameSpace:(unsigned int)a0 loadDefaultValues:(BOOL)a1;
- (BOOL)hasActiveRollout;
- (void)reloadAllFactors;
- (long long)getLongValueForFactor:(id)a0;
- (BOOL)getInReservedAllocationForExperiment;
- (id)getStringValueForFactor:(id)a0;
- (id)getFactorDictionary;
- (BOOL)getClientOnlyExperiment;
- (id)getLevelForFactor:(id)a0;
- (BOOL)getBooleanValueForFactor:(id)a0;
- (id)description;
- (id)getTreatmentId;
- (BOOL)hasActiveExperiment;
- (void).cxx_destruct;
- (id)getFilePathForFactor:(id)a0;
- (double)getDoubleValueForFactor:(id)a0;
- (void)refreshTrackingId;

@end
