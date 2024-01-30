@interface ATXPredictionContextDomain : NSObject <ATXProtoBufWrapper>

- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)jsonDict;

@end
