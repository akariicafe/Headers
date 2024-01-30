@interface ATXPredictionAmbientLightContext : ATXPredictionContextDomain

@property (readonly, nonatomic) int ambientLightType;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)jsonDict;
- (id)proto;
- (id)initWithAmbientLightType:(int)a0;
- (id)initWithProtoData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToATXPredictionAmbientLightContext:(id)a0;

@end
