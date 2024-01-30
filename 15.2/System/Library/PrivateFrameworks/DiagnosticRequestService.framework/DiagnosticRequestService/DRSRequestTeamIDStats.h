@class NSDictionary, NSString;

@interface DRSRequestTeamIDStats : DRSRequestStats

@property (readonly, nonatomic) NSDictionary *perIssueCategoryStats;
@property (readonly, nonatomic) NSString *teamID;

+ (id)keyName;
+ (Class)childStatsClass;
+ (id)descriptionStringForRequest:(id)a0;

@end
