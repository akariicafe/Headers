@class NSString, NSArray;

@interface QSSMutableAStarFuzzyMatchingResult : QSSAStarFuzzyMatchingResult

@property (copy, nonatomic) NSString *matched_result;
@property (nonatomic) long long total_score;
@property (nonatomic) int tm_score;
@property (copy, nonatomic) NSArray *match_ids;
@property (copy, nonatomic) NSString *debug_information;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
