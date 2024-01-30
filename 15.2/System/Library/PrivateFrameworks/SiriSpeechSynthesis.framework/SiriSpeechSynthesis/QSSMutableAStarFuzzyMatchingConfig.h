@class NSString;

@interface QSSMutableAStarFuzzyMatchingConfig : QSSAStarFuzzyMatchingConfig

@property (nonatomic) BOOL enable_completion;
@property (nonatomic) unsigned int max_results;
@property (nonatomic) unsigned int max_expand_paths;
@property (nonatomic) unsigned int max_tm_score;
@property (nonatomic) unsigned int abs_pruning_threshold;
@property (nonatomic) unsigned int rel_pruning_threshold;
@property (nonatomic) BOOL enable_word_boundary;
@property (nonatomic) unsigned int max_path_num_at_boundary;
@property (nonatomic) float parabolic_error_wide;
@property (nonatomic) float parabolic_error_center;
@property (nonatomic) float parabolic_error_bias;
@property (nonatomic) unsigned int parabolic_error_min;
@property (nonatomic) unsigned int max_latency;
@property (nonatomic) unsigned int word_penalty;
@property (copy, nonatomic) NSString *delimiter;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
