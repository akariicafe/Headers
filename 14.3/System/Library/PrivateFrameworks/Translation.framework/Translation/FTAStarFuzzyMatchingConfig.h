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
- (struct Offset<siri::speech::schema_fb::AStarFuzzyMatchingConfig> { unsigned int x0; })addObjectToBuffer:(struct FlatBufferBuilder { struct vector_downward { struct Allocator *x0; BOOL x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; char *x6; char *x7; } x0; unsigned int x1; unsigned short x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; struct set<flatbuffers::Offset<flatbuffers::String>, flatbuffers::FlatBufferBuilder::StringOffsetCompare, std::__1::allocator<flatbuffers::Offset<flatbuffers::String> > > *x8; } *)a0;
- (id)flatbuffData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AStarFuzzyMatchingConfig { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AStarFuzzyMatchingConfig { unsigned char x0[1]; } *)a1;

@end
