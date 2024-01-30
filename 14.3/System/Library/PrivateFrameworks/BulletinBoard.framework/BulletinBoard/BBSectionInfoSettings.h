@class NSDictionary, NSDate;

@interface BBSectionInfoSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL showsInLockScreen;
@property (nonatomic) BOOL showsInNotificationCenter;
@property (nonatomic) BOOL showsMessagePreview;
@property (readonly, copy, nonatomic) NSDictionary *stateCapture;
@property (nonatomic) long long authorizationStatus;
@property (retain, nonatomic) NSDate *authorizationExpirationDate;
@property (nonatomic) BOOL allowsNotifications;
@property (retain, nonatomic) NSDate *lastUserGrantedAuthorizationDate;
@property (readonly, nonatomic) BOOL isAuthorizedTemporarily;
@property (nonatomic) long long notificationCenterSetting;
@property (nonatomic) long long lockScreenSetting;
@property (nonatomic) BOOL showsOnExternalDevices;
@property (nonatomic) BOOL showsCustomSettingsLink;
@property (nonatomic) long long contentPreviewSetting;
@property (nonatomic) unsigned long long alertType;
@property (nonatomic) unsigned long long pushSettings;
@property (nonatomic) long long carPlaySetting;
@property (nonatomic) long long criticalAlertSetting;
@property (nonatomic) long long spokenNotificationSetting;
@property (nonatomic) long long bulletinGroupingSetting;

+ (id)sectionInfoSettingsForManagedBundleID:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_authorizationStatusDescription;
- (id)_alertTypeDescription;
- (id)_contentPreviewSettingDescription;
- (id)initWithDefaultsForSectionType:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_bulletinGroupingSettingDescription;

@end
