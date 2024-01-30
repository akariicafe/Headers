@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTBatchTranslationRequest_Paragraph : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct Paragraph { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *paragraph_id;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSArray *span;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct Paragraph { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::BatchTranslationRequest_::Paragraph> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct Paragraph { unsigned char x0[1]; } *)a1;

@end
