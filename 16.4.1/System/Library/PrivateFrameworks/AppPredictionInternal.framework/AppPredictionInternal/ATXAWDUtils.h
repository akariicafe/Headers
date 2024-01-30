@interface ATXAWDUtils : NSObject

+ (int)awdActionTypeWithActionType:(unsigned long long)a0;
+ (int)awdLOITypeWithRTLOI:(long long)a0;
+ (int)awdAppLaunchReasonWithString:(id)a0;
+ (id)subscoresWithDictionary:(id)a0;
+ (id)appDataAtIndex:(unsigned long long)a0 forSessionLogDict:(id)a1;
+ (int)awdPredictionOutcomeWithATXPredictionOutcome:(unsigned long long)a0;
+ (int)AWDLOITypeForString:(id)a0;
+ (id)populateAwdAppPredictionSessionForSessionLogDict:(id)a0;
+ (int)awdScoreWithScore:(double)a0 type:(unsigned long long)a1;
+ (void)logAppPredictionDictionaryViaAWD:(id)a0;
+ (int)awdActionEngagementWithEngagement:(unsigned long long)a0;
+ (int)awdConsumerSubTypeWithConsumerSubType:(unsigned char)a0;
+ (int)awdMotionTypeWithMotionType:(long long)a0;
+ (double)scoreMultiplierWithInputType:(unsigned long long)a0;

@end
