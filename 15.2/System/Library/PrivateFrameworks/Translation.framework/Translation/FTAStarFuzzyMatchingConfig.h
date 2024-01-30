@class NSString, NSMutableDictionary, NSData;

@interface FTAStarFuzzyMatchingConfig : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AStarFuzzyMatchingConfig { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) BOOL enable_completion;
@property (readonly, nonatomic) unsigned int max_results;
@property (readonly, nonatomic) unsigned int max_expand_paths;
@property (readonly, nonatomic) unsigned int max_tm_score;
@property (readonly, nonatomic) unsigned int abs_pruning_threshold;
@property (readonly, nonatomic) unsigned int rel_pruning_threshold;
@property (readonly, nonatomic) BOOL enable_word_boundary;
@property (readonly, nonatomic) unsigned int max_path_num_at_boundary;
@property (readonly, nonatomic) float parabolic_error_wide;
@property (readonly, nonatomic) float parabolic_error_center;
@property (readonly, nonatomic) float parabolic_error_bias;
@property (readonly, nonatomic) unsigned int parabolic_error_min;
@property (readonly, nonatomic) unsigned int max_latency;
@property (readonly, nonatomic) unsigned int word_penalty;
@property (readonly, nonatomic) NSString *delimiter;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AStarFuzzyMatchingConfig { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::AStarFuzzyMatchingConfig> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AStarFuzzyMatchingConfig { unsigned char x0[1]; } *)a1;

@end
