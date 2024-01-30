@class NSSet, NSString, NSArray, NSNumber;

@interface RMProtocolWellKnownResponse_WellKnownResponseServer : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedResponseKeys;

@property (copy, nonatomic) NSString *responseVersion;
@property (copy, nonatomic) NSString *responseBaseURL;
@property (copy, nonatomic) NSArray *responsePinnedCertificates;
@property (copy, nonatomic) NSNumber *responsePinningRevocationCheckRequired;

+ (id)buildWithVersion:(id)a0 baseURL:(id)a1 pinnedCertificates:(id)a2 pinningRevocationCheckRequired:(id)a3;
+ (id)buildRequiredOnlyWithVersion:(id)a0 baseURL:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
