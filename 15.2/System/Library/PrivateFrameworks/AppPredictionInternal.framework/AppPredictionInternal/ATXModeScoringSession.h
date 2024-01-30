@class NSArray, ATXModeEntityAffinityVector;

@interface ATXModeScoringSession : NSObject

@property (readonly, nonatomic) double startTimestamp;
@property (readonly, nonatomic) double endTimestamp;
@property (readonly, nonatomic) NSArray *appLaunches;
@property (retain, nonatomic) ATXModeEntityAffinityVector *sessionAffinityVector;

+ (id)coalesceSessions:(id)a0;

- (void).cxx_destruct;
- (double)duration;
- (unsigned long long)topMode;
- (double)numScoredAppLaunches;
- (id)_initFromStartTime:(double)a0 endTime:(double)a1 appLaunches:(id)a2 sessionAffinityVector:(id)a3;
- (void)_populateAffinity;
- (id)_weightForLaunch:(id)a0;
- (id)initFromStartTime:(double)a0 endTime:(double)a1;
- (BOOL)isStronglyCorrelatedWithTopMode;
- (BOOL)hasModeWithinRank:(unsigned long long)a0 rank:(unsigned long long)a1;
- (double)secondsUntilOtherSession:(id)a0;
- (BOOL)isLabeled;
- (double)affinityForMode:(unsigned long long)a0;
- (void)populateAppLaunches:(id)a0;
- (void)debug_prettyPrintSession:(BOOL)a0;

@end
