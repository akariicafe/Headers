@class NSSet, NSString, NSArray, RMModelAccountExchangeDeclaration_OAuth, NSNumber;

@interface RMModelAccountExchangeDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadVisibleName;
@property (copy, nonatomic) NSArray *payloadEnabledProtocolTypes;
@property (copy, nonatomic) NSString *payloadUserIdentityAssetReference;
@property (copy, nonatomic) NSString *payloadHostName;
@property (copy, nonatomic) NSNumber *payloadPort;
@property (copy, nonatomic) NSString *payloadPath;
@property (copy, nonatomic) NSString *payloadExternalHostName;
@property (copy, nonatomic) NSNumber *payloadExternalPort;
@property (copy, nonatomic) NSString *payloadExternalPath;
@property (copy, nonatomic) RMModelAccountExchangeDeclaration_OAuth *payloadOAuth;
@property (copy, nonatomic) NSString *payloadAuthenticationCredentialsAssetReference;
@property (copy, nonatomic) NSNumber *payloadMailServiceActive;
@property (copy, nonatomic) NSNumber *payloadLockMailService;
@property (copy, nonatomic) NSNumber *payloadContactsServiceActive;
@property (copy, nonatomic) NSNumber *payloadLockContactsService;
@property (copy, nonatomic) NSNumber *payloadCalendarServiceActive;
@property (copy, nonatomic) NSNumber *payloadLockCalendarService;
@property (copy, nonatomic) NSNumber *payloadRemindersServiceActive;
@property (copy, nonatomic) NSNumber *payloadLockRemindersService;
@property (copy, nonatomic) NSNumber *payloadNotesServiceActive;
@property (copy, nonatomic) NSNumber *payloadLockNotesService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildWithIdentifier:(id)a0 visibleName:(id)a1 enabledProtocolTypes:(id)a2 userIdentityAssetReference:(id)a3 hostName:(id)a4 port:(id)a5 path:(id)a6 externalHostName:(id)a7 externalPort:(id)a8 externalPath:(id)a9 oAuth:(id)a10 authenticationCredentialsAssetReference:(id)a11 mailServiceActive:(id)a12 lockMailService:(id)a13 contactsServiceActive:(id)a14 lockContactsService:(id)a15 calendarServiceActive:(id)a16 lockCalendarService:(id)a17 remindersServiceActive:(id)a18 lockRemindersService:(id)a19 notesServiceActive:(id)a20 lockNotesService:(id)a21;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 enabledProtocolTypes:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)assetReferences;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
