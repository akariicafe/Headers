@class NSSet, NSString;

@interface CEMAccountGoogleDeclaration_CommunicationServiceRulesDefaultServiceHandlers : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadAudioCall;

+ (id)buildRequiredOnly;
+ (id)buildWithAudioCall:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
