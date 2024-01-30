@class NSString, NSArray, NSMutableDictionary, NSData;

@interface QSSAStarFuzzyMatchingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AStarFuzzyMatchingResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) unsigned int latency;
@property (readonly, nonatomic) unsigned int expanded_path;
@property (readonly, nonatomic) NSArray *results;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AStarFuzzyMatchingResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::AStarFuzzyMatchingResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AStarFuzzyMatchingResponse { unsigned char x0[1]; } *)a1;

@end
