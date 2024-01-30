@class NSSet, NSString;

@interface RMProtocolWellKnownResponse_WellKnownResponseServer : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedResponseKeys;

@property (copy, nonatomic) NSString *responseVersion;
@property (copy, nonatomic) NSString *responseBaseURL;

+ (id)buildRequiredOnlyWithVersion:(id)a0 baseURL:(id)a1;
+ (id)buildWithVersion:(id)a0 baseURL:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
