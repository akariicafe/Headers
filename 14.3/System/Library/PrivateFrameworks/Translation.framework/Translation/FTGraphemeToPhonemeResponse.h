@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTGraphemeToPhonemeResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct GraphemeToPhonemeResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) NSArray *phonemes;
@property (readonly, nonatomic) BOOL is_pron_guessed;
@property (readonly, nonatomic) NSString *g2p_version;
@property (readonly, nonatomic) NSString *g2p_model_version;
@property (readonly, nonatomic) NSString *phoneset_version;
@property (readonly, nonatomic) NSArray *aot_token_prons;
@property (readonly, nonatomic) NSArray *jit_token_prons;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::GraphemeToPhonemeResponse> { unsigned int x0; })addObjectToBuffer:(struct FlatBufferBuilder { struct vector_downward { struct Allocator *x0; BOOL x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; char *x6; char *x7; } x0; unsigned int x1; unsigned short x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; struct set<flatbuffers::Offset<flatbuffers::String>, flatbuffers::FlatBufferBuilder::StringOffsetCompare, std::__1::allocator<flatbuffers::Offset<flatbuffers::String> > > *x8; } *)a0;
- (id)flatbuffData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct GraphemeToPhonemeResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct GraphemeToPhonemeResponse { unsigned char x0[1]; } *)a1;

@end
