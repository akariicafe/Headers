@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTTranslationResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TranslationResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_string;
@property (readonly, nonatomic) NSArray *n_best_translated_phrases;
@property (readonly, nonatomic) NSString *engine_input;
@property (readonly, nonatomic) NSArray *engine_output;
@property (readonly, nonatomic) NSString *sequence_id;
@property (readonly, nonatomic) BOOL final_message;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TranslationResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslationResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslationResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)n_best_translated_phrases_count;
- (unsigned long long)engine_output_count;
- (void)engine_output_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)engine_output_objectAtIndex:(unsigned long long)a0;
- (void)n_best_translated_phrases_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)n_best_translated_phrases_objectAtIndex:(unsigned long long)a0;

@end
