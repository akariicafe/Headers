@class NSArray, NSNumber;

@interface ATXIntentSuggestionRequest : ATXSuggestionRequest

@property (readonly, nonatomic) NSArray *bundleIds;
@property (readonly, nonatomic) NSArray *intentClassNames;
@property (readonly, nonatomic) NSNumber *limit;

+ (BOOL)supportsSecureCoding;

- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOriginatorId:(id)a0 consumerSubType:(unsigned char)a1 bundleIds:(id)a2 intentClassNames:(id)a3 limit:(id)a4;
- (id)initWithUUID:(id)a0 originatorId:(id)a1 consumerSubType:(unsigned char)a2 bundleIds:(id)a3 intentClassNames:(id)a4 limit:(id)a5 timeout:(double)a6;
- (id)initWithUUID:(id)a0 originatorId:(id)a1 consumerSubType:(unsigned char)a2 timeout:(double)a3;

@end
