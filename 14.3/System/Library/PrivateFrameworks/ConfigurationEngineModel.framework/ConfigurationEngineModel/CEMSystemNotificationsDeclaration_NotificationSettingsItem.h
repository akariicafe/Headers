@class NSSet, NSString, NSNumber;

@interface CEMSystemNotificationsDeclaration_NotificationSettingsItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadBundleIdentifier;
@property (copy, nonatomic) NSNumber *payloadNotificationsEnabled;
@property (copy, nonatomic) NSNumber *payloadShowInNotificationCenter;
@property (copy, nonatomic) NSNumber *payloadShowInLockScreen;
@property (copy, nonatomic) NSNumber *payloadAlertType;
@property (copy, nonatomic) NSNumber *payloadBadgesEnabled;
@property (copy, nonatomic) NSNumber *payloadSoundsEnabled;
@property (copy, nonatomic) NSNumber *payloadShowInCarPlay;
@property (copy, nonatomic) NSNumber *payloadEmergencyEnabled;
@property (copy, nonatomic) NSNumber *payloadCriticalAlertEnabled;
@property (copy, nonatomic) NSNumber *payloadGroupingType;

+ (id)buildRequiredOnlyWithBundleIdentifier:(id)a0;
+ (id)buildWithBundleIdentifier:(id)a0 withNotificationsEnabled:(id)a1 withShowInNotificationCenter:(id)a2 withShowInLockScreen:(id)a3 withAlertType:(id)a4 withBadgesEnabled:(id)a5 withSoundsEnabled:(id)a6 withShowInCarPlay:(id)a7 withEmergencyEnabled:(id)a8 withCriticalAlertEnabled:(id)a9 withGroupingType:(id)a10;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
