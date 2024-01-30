@class NSSet, NSString, NSNumber;

@interface RMModelAccountMailDeclaration_OutgoingServer : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadHostName;
@property (copy, nonatomic) NSNumber *payloadPort;
@property (copy, nonatomic) NSString *payloadAuthenticationMethod;
@property (copy, nonatomic) NSString *payloadAuthenticationCredentialsAssetReference;

+ (id)buildWithHostName:(id)a0 port:(id)a1 authenticationMethod:(id)a2 authenticationCredentialsAssetReference:(id)a3;
+ (id)buildRequiredOnlyWithHostName:(id)a0 authenticationMethod:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
