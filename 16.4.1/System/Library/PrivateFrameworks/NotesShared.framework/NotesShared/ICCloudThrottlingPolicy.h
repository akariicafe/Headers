@class NSArray, NSTimer, NSDate, ICCloudThrottlingLevel;

@interface ICCloudThrottlingPolicy : NSObject

@property (nonatomic) unsigned long long currentBatchCount;
@property (retain, nonatomic) NSArray *throttlingLevels;
@property (nonatomic) unsigned long long currentLevelIndex;
@property (readonly, nonatomic) ICCloudThrottlingLevel *currentLevel;
@property double resetInterval;
@property (retain) NSDate *policyStartDate;
@property (retain) NSTimer *policyResetTimer;
@property (readonly, nonatomic) double batchInterval;
@property (readonly, nonatomic) double maximumBatchIntervalFactor;

+ (void)resetSavedPolicyState;

- (void)loadSavedPolicyState;
- (void)savePolicyState;
- (void)startPolicyResetTimer;
- (id)initWithThrottlingLevels:(id)a0 resetInterval:(double)a1;
- (void)dealloc;
- (id)init;
- (void)resetPolicy;
- (void).cxx_destruct;
- (void)changeLevelIfNecessary;
- (void)incrementBatchCount;

@end
