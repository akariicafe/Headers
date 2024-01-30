@class FTLanguageDetected, NSString, NSArray, NSMutableDictionary, NSData, FTTranslationLocalePair;

@interface FTStartSpeechTranslationLoggingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct StartSpeechTranslationLoggingRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *conversation_id;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) FTTranslationLocalePair *translation_locale_pair;
@property (readonly, nonatomic) FTLanguageDetected *detected_locale;
@property (readonly, nonatomic) NSString *user_selected_locale;
@property (readonly, nonatomic) NSArray *senses;
@property (readonly, nonatomic) NSString *user_selected_sense;
@property (readonly, nonatomic) NSArray *user_interacted_senses;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::StartSpeechTranslationLoggingRequest> { unsigned int x0; })addObjectToBuffer:(struct FlatBufferBuilder { struct vector_downward { struct Allocator *x0; BOOL x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; char *x6; char *x7; } x0; unsigned int x1; unsigned short x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; struct set<flatbuffers::Offset<flatbuffers::String>, flatbuffers::FlatBufferBuilder::StringOffsetCompare, std::__1::allocator<flatbuffers::Offset<flatbuffers::String> > > *x8; } *)a0;
- (id)flatbuffData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartSpeechTranslationLoggingRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartSpeechTranslationLoggingRequest { unsigned char x0[1]; } *)a1;

@end
