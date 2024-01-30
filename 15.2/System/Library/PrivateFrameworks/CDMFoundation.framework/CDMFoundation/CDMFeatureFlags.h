@interface CDMFeatureFlags : NSObject

+ (BOOL)isSiriMiniEnabled;
+ (BOOL)isLogNluEnabled;
+ (BOOL)isUaaPEnabled;
+ (BOOL)isUaaPPreferred;
+ (BOOL)isAgentToPersonMappingEnabled;
+ (BOOL)globalOverridesAreEnabled;
+ (BOOL)isContextUpdateEnabled;
+ (BOOL)isCcqrAerEnabled;
+ (BOOL)isMarrsMentionDetectorEnabled;
+ (BOOL)isRepetitionDetectionEnabled;
+ (BOOL)isCATIEnabled;
+ (BOOL)isPLUMEnabled;
+ (BOOL)isOvertonKGSpanMatcherEnabled;

@end
