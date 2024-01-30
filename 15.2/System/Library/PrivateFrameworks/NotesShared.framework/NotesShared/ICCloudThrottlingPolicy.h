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

+ (void)resetSavedPolicyState;

- (id)initWithThrottlingLevels:(id)a0 resetInterval:(double)a1;
- (void)resetPolicy;
- (void)incrementBatchCount;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)loadSavedPolicyState;
- (void)savePolicyState;
- (void)startPolicyResetTimer;
- (void)changeLevelIfNecessary;

@end
