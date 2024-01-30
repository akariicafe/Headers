@class NSArray, NSMutableDictionary, NSData, FTRecognitionSausage;

@interface FTRecognitionResult : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RecognitionResult { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) FTRecognitionSausage *pre_itn;
@property (readonly, nonatomic) FTRecognitionSausage *post_itn;
@property (readonly, nonatomic) NSArray *pre_itn_nbest_choices;
@property (readonly, nonatomic) NSArray *post_itn_nbest_choices;
@property (readonly, nonatomic) NSArray *pre_itn_token_to_post_itn_char_alignment;
@property (readonly, nonatomic) NSArray *choice_alignments;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionResult { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::RecognitionResult> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionResult { unsigned char x0[1]; } *)a1;

@end
