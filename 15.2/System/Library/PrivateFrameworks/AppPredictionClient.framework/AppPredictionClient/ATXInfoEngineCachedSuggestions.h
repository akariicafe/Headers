@class NSArray;

@interface ATXInfoEngineCachedSuggestions : NSObject <ATXProtoBufWrapper>

@property (retain, nonatomic) NSArray *entries;

- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (void).cxx_destruct;
- (id)proto;
- (id)encodeAsProto;

@end
