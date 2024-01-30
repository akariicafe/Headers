@class NSSet, NSString, RMModelAnyPayload;

@interface RMProtocolCommandResponse_Command : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedResponseKeys;

@property (copy, nonatomic) NSString *responseType;
@property (copy, nonatomic) NSString *responseIdentifier;
@property (copy, nonatomic) RMModelAnyPayload *responsePayload;

+ (id)buildRequiredOnlyWithType:(id)a0 identifier:(id)a1;
+ (id)buildWithType:(id)a0 identifier:(id)a1 payload:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
