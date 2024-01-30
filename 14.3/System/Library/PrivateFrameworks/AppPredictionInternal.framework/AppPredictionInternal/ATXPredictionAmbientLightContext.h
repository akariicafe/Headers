@interface ATXPredictionAmbientLightContext : ATXPredictionContextDomain

@property (readonly, nonatomic) int ambientLightType;

- (id)jsonDict;
- (BOOL)isEqualToATXPredictionAmbientLightContext:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)description;
- (id)initWithAmbientLightType:(int)a0;
- (BOOL)isEqual:(id)a0;

@end
