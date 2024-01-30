@interface ATXPredictionContextDomain : NSObject <ATXProtoBufWrapper>

- (id)jsonDict;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;

@end
