@class NSArray, NSString, NSMutableDictionary, NSData;

@interface FTSetSpeechContext : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SetSpeechContext { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *contextual_text;
@property (readonly, nonatomic) NSString *left_context;
@property (readonly, nonatomic) NSString *right_context;
@property (readonly, nonatomic) NSArray *context_with_pron_hints;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::SetSpeechContext> { unsigned int x0; })addObjectToBuffer:(struct FlatBufferBuilder { struct vector_downward { struct Allocator *x0; BOOL x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; char *x6; char *x7; } x0; unsigned int x1; unsigned short x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; struct set<flatbuffers::Offset<flatbuffers::String>, flatbuffers::FlatBufferBuilder::StringOffsetCompare, std::__1::allocator<flatbuffers::Offset<flatbuffers::String> > > *x8; } *)a0;
- (id)flatbuffData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SetSpeechContext { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SetSpeechContext { unsigned char x0[1]; } *)a1;

@end
