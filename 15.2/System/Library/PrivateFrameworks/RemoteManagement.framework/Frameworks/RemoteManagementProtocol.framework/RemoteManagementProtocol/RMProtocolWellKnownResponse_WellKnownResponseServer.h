@class NSSet, NSString;

@interface RMProtocolWellKnownResponse_WellKnownResponseServer : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedResponseKeys;

@property (copy, nonatomic) NSString *responseVersion;
@property (copy, nonatomic) NSString *responseBaseURL;

+ (id)buildWithVersion:(id)a0 baseURL:(id)a1;
+ (id)buildRequiredOnlyWithVersion:(id)a0 baseURL:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
