@class NSString, FTAStarFuzzyMatchingConfig;

@interface FTMutableAStarFuzzyMatchingRequest : FTAStarFuzzyMatchingRequest

@property (copy, nonatomic) NSString *matcher_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *target;
@property (copy, nonatomic) FTAStarFuzzyMatchingConfig *config;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
