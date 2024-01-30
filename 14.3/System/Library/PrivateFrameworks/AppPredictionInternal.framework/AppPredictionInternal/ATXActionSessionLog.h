@class ATXActionResponse, ATXPredictionContext;

@interface ATXActionSessionLog : NSObject {
    unsigned long long _engagementType;
    ATXActionResponse *_actionResponse;
    ATXPredictionContext *_context;
    BOOL _isShadowLog;
}

+ (void)logIntentPredictionSession:(id)a0;
+ (double)_bucketize:(double)a0 bucketSize:(double)a1;
+ (void)performSessionLoggingWithActionResponse:(id)a0 engagementType:(unsigned long long)a1 context:(id)a2 isShadowLog:(BOOL)a3 forTestingMode:(BOOL)a4;
+ (double)roundedElapsedTimeWithStartDate:(id)a0 endDate:(id)a1 accuracy:(double)a2;
+ (void)logActionData:(id)a0;

- (id)init;
- (BOOL)isLowConfidenceSession;
- (void).cxx_destruct;
- (id)constructSessionLogDictionaryWithAWDSessionOut:(id *)a0 forTestingMode:(BOOL)a1;
- (id)constructActionDataDictionaryWithEngagedIndicesOut:(id *)a0 andAWDActionOut:(id *)a1 andEngagementTypeFound:(unsigned long long *)a2 forTestingMode:(BOOL)a3;
- (BOOL)isSessionNotUsefulForTraining;
- (BOOL)isSessionWithoutEngagement;
- (BOOL)isLockscreenSession;
- (id)initWithActionEngagementType:(unsigned long long)a0 actionResponse:(id)a1 context:(id)a2 isShadowLog:(BOOL)a3;
- (void)performSessionLogging:(BOOL)a0;

@end
