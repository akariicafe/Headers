@class NSArray, NSMutableDictionary, NSData;

@interface FTTextToSpeechSpeechFeatureInputText : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechSpeechFeatureInputText { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *words;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureInputText> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechSpeechFeatureInputText { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechSpeechFeatureInputText { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)words_count;
- (void)words_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)words_objectAtIndex:(unsigned long long)a0;

@end
