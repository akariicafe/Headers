@class NSData, NSMutableDictionary;

@interface FTTextToSpeechVoiceResource : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechVoiceResource { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSData *data;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechVoiceResource> { unsigned int x0; })addObjectToBuffer:(struct FlatBufferBuilder { struct vector_downward { struct Allocator *x0; BOOL x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; char *x6; char *x7; } x0; unsigned int x1; unsigned short x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; struct set<flatbuffers::Offset<flatbuffers::String>, flatbuffers::FlatBufferBuilder::StringOffsetCompare, std::__1::allocator<flatbuffers::Offset<flatbuffers::String> > > *x8; } *)a0;
- (id)flatbuffData;
- (void)data:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechVoiceResource { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechVoiceResource { unsigned char x0[1]; } *)a1;

@end
