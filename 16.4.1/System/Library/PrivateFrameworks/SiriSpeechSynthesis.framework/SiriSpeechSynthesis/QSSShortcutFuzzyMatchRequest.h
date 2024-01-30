@class NSArray, NSString, QSSShortcutFuzzyMatchRequest_StringTokenPair, NSMutableDictionary, NSData;

@interface QSSShortcutFuzzyMatchRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ShortcutFuzzyMatchRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) QSSShortcutFuzzyMatchRequest_StringTokenPair *utterance;
@property (readonly, nonatomic) NSArray *shortcuts;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *interaction_id;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) NSString *device_type;
@property (readonly, nonatomic) NSString *context;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::ShortcutFuzzyMatchRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ShortcutFuzzyMatchRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ShortcutFuzzyMatchRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
