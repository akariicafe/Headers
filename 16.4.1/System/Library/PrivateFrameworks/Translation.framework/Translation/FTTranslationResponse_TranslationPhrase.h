@class NSArray, NSString, NSMutableDictionary, FTTranslationPhraseMetaInfo, NSData;

@interface FTTranslationResponse_TranslationPhrase : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TranslationPhrase { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) NSArray *translated_tokens;
@property (readonly, nonatomic) NSString *meta_info;
@property (readonly, nonatomic) NSArray *spans;
@property (readonly, nonatomic) BOOL low_confidence;
@property (readonly, nonatomic) FTTranslationPhraseMetaInfo *meta_info_data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TranslationResponse_::TranslationPhrase> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslationPhrase { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslationPhrase { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)spans_count;
- (void)spans_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)spans_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)translated_tokens_count;
- (void)translated_tokens_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)translated_tokens_objectAtIndex:(unsigned long long)a0;

@end
