@class NSSet, NSString, NSNumber;

@interface CEMSystemGameCenterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadAllowGameCenter;
@property (copy, nonatomic) NSNumber *payloadAllowMultiplayerGaming;
@property (copy, nonatomic) NSNumber *payloadAllowAddingGameCenterFriends;
@property (copy, nonatomic) NSNumber *payloadAllowGameCenterNearbyMultiplayer;
@property (copy, nonatomic) NSNumber *payloadAllowGameCenterPrivateMessaging;
@property (copy, nonatomic) NSNumber *payloadAllowGameCenterProfilePrivacyModification;
@property (copy, nonatomic) NSNumber *payloadAllowGameCenterProfileModification;
@property (copy, nonatomic) NSNumber *payloadAllowedGameCenterOtherPlayerTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)profileType;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)a0 withAllowGameCenter:(id)a1 withAllowMultiplayerGaming:(id)a2 withAllowAddingGameCenterFriends:(id)a3 withAllowGameCenterNearbyMultiplayer:(id)a4 withAllowGameCenterPrivateMessaging:(id)a5 withAllowGameCenterProfilePrivacyModification:(id)a6 withAllowGameCenterProfileModification:(id)a7 withAllowedGameCenterOtherPlayerTypes:(id)a8;
+ (id)buildWithIdentifier:(id)a0 withAllowGameCenter:(id)a1 withAllowMultiplayerGaming:(id)a2 withAllowAddingGameCenterFriends:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
