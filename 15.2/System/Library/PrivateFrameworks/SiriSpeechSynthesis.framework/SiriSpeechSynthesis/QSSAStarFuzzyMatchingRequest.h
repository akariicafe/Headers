@class NSString, NSMutableDictionary, NSData, QSSAStarFuzzyMatchingConfig;

@interface QSSAStarFuzzyMatchingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AStarFuzzyMatchingRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *matcher_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *query;
@property (readonly, nonatomic) NSString *target;
@property (readonly, nonatomic) QSSAStarFuzzyMatchingConfig *config;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AStarFuzzyMatchingRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::AStarFuzzyMatchingRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AStarFuzzyMatchingRequest { unsigned char x0[1]; } *)a1;

@end
