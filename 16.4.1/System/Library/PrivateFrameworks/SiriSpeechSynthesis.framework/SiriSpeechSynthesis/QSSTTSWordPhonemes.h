@class NSArray, NSMutableDictionary, NSData;

@interface QSSTTSWordPhonemes : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TTSWordPhonemes { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *phonemes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TTSWordPhonemes> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TTSWordPhonemes { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TTSWordPhonemes { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
