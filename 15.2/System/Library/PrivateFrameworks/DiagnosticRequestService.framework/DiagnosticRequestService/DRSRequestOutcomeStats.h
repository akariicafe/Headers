@class NSString, NSDictionary;

@interface DRSRequestOutcomeStats : DRSRequestStats

@property (readonly, nonatomic) NSString *requestOutcome;
@property (readonly, nonatomic) NSDictionary *perStateStats;

+ (id)keyName;
+ (Class)childStatsClass;
+ (id)descriptionStringForRequest:(id)a0;

@end
