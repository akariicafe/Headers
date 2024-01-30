@interface HNObjCFeatureFlags : NSObject

+ (BOOL)isContextualUnderstandingEnabled;
+ (BOOL)isHumanUnderstandingDataCollectionEnabled;
+ (BOOL)isHumanUnderstandingEvidenceEnabled;
+ (BOOL)isPersonalUnderstandingEnabled;

@end
