@class NSSet, NSString;

@interface RMModelAccountSubscribedCalendarDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadVisibleName;
@property (copy, nonatomic) NSString *payloadCalendarURL;
@property (copy, nonatomic) NSString *payloadAuthenticationCredentialsAssetReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildWithIdentifier:(id)a0 visibleName:(id)a1 calendarURL:(id)a2 authenticationCredentialsAssetReference:(id)a3;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 calendarURL:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)assetReferences;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
