@class NSString, NSArray, NSMutableDictionary, NSData;

@interface QSSAStarFuzzyMatchingResult : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AStarFuzzyMatchingResult { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *matched_result;
@property (readonly, nonatomic) long long total_score;
@property (readonly, nonatomic) int tm_score;
@property (readonly, nonatomic) NSArray *match_ids;
@property (readonly, nonatomic) NSString *debug_information;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AStarFuzzyMatchingResult { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::AStarFuzzyMatchingResult> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AStarFuzzyMatchingResult { unsigned char x0[1]; } *)a1;

@end
