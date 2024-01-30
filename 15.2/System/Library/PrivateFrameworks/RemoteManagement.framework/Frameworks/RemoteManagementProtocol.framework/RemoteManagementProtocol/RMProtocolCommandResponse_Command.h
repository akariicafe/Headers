@class NSSet, NSString, RMModelAnyPayload;

@interface RMProtocolCommandResponse_Command : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedResponseKeys;

@property (copy, nonatomic) NSString *responseType;
@property (copy, nonatomic) NSString *responseIdentifier;
@property (copy, nonatomic) RMModelAnyPayload *responsePayload;

+ (id)buildWithType:(id)a0 identifier:(id)a1 payload:(id)a2;
+ (id)buildRequiredOnlyWithType:(id)a0 identifier:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
