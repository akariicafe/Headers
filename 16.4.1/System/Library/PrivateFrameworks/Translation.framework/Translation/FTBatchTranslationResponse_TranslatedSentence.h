@class NSString, NSArray, NSMutableDictionary, FTSpan, NSData;

@interface FTBatchTranslationResponse_TranslatedSentence : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TranslatedSentence { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) FTSpan *source_span;
@property (readonly, nonatomic) NSString *engine_input;
@property (readonly, nonatomic) FTSpan *target_span;
@property (readonly, nonatomic) NSArray *n_best_choices;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::BatchTranslationResponse_::TranslatedSentence> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslatedSentence { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslatedSentence { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)n_best_choices_count;
- (void)n_best_choices_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)n_best_choices_objectAtIndex:(unsigned long long)a0;

@end
