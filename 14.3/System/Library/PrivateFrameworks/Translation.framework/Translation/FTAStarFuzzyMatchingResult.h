@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTAStarFuzzyMatchingResult : NSObject <FLTBFBufferAccessor, NSCopying> {
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
- (struct Offset<siri::speech::schema_fb::AStarFuzzyMatchingResult> { unsigned int x0; })addObjectToBuffer:(struct FlatBufferBuilder { struct vector_downward { struct Allocator *x0; BOOL x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; char *x6; char *x7; } x0; unsigned int x1; unsigned short x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; struct set<flatbuffers::Offset<flatbuffers::String>, flatbuffers::FlatBufferBuilder::StringOffsetCompare, std::__1::allocator<flatbuffers::Offset<flatbuffers::String> > > *x8; } *)a0;
- (id)flatbuffData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AStarFuzzyMatchingResult { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AStarFuzzyMatchingResult { unsigned char x0[1]; } *)a1;

@end
