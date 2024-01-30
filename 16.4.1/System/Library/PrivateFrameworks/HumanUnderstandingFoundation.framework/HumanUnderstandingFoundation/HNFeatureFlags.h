@interface HNFeatureFlags : NSObject

+ (BOOL)isContextualUnderstandingEnabled;
+ (BOOL)isContextualUnderstandingNotificationsEnabled;
+ (BOOL)isHumanUnderstandingDataCollectionEnabled;
+ (BOOL)isHumanUnderstandingEvidenceEnabled;
+ (BOOL)isPersonalUnderstandingEnabled;

- (id)init;

@end
