@class NSString, NSArray;

@interface FTMutableAStarFuzzyMatchingResponse : FTAStarFuzzyMatchingResponse

@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (nonatomic) unsigned int latency;
@property (nonatomic) unsigned int expanded_path;
@property (copy, nonatomic) NSArray *results;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
