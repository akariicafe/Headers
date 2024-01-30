@class NSArray, NSString, NSMutableDictionary, NSData, FTStartSpeechRequest;

@interface FTMultiUserStartSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct MultiUserStartSpeechRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) FTStartSpeechRequest *start_speech_request;
@property (readonly, nonatomic) NSArray *user_parameters;
@property (readonly, nonatomic) NSString *primary_speech_id;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct MultiUserStartSpeechRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::MultiUserStartSpeechRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct MultiUserStartSpeechRequest { unsigned char x0[1]; } *)a1;

@end
