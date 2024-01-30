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
+ (id)sharedPolicyTrialManager;
+ (void)loadFactorsForAllSharedTrialManagers;
+ (id)sharedUITrialManager;
+ (id)getTTRLogs;
+ (id)sharedModelTrialManager;
+ (id)sharedTrialClient;
+ (id)sharedRankingTrialManager;

- (id)getTreatmentId;
- (double)getDoubleValueForFactor:(id)a0;
- (id)getLevelForFactor:(id)a0;
- (id)getFilePathForFactor:(id)a0;
- (long long)getLongValueForFactor:(id)a0;
- (void)reloadAllFactors;
- (id)getFactorDictionary;
- (id)description;
- (id)initWithNameSpace:(unsigned int)a0 loadDefaultValues:(BOOL)a1;
- (BOOL)getClientOnlyExperiment;
- (BOOL)getInReservedAllocationForExperiment;
- (void)refreshTrackingId;
- (void).cxx_destruct;
- (id)getStringValueForFactor:(id)a0;
- (BOOL)hasActiveRollout;
- (BOOL)hasActiveExperiment;
- (BOOL)getBooleanValueForFactor:(id)a0;

@end
