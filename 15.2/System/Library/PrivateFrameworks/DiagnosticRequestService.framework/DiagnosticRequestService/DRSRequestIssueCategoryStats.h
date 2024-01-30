@class NSDictionary, NSString;

@interface DRSRequestIssueCategoryStats : DRSRequestStats

@property (readonly, nonatomic) NSDictionary *perIssueDescriptionStats;
@property (readonly, nonatomic) NSString *issueCategory;

+ (id)keyName;
+ (Class)childStatsClass;
+ (id)descriptionStringForRequest:(id)a0;

@end
