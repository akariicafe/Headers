@class NSDate, NSString, NSArray, NSData, NSDictionary, BBSectionInfoSettings, BBSectionIcon;

@interface BBSectionInfo : NSObject <NSCopying, NSSecureCoding> {
    BBSectionInfoSettings *_managedSectionInfoSettings;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) BBSectionInfoSettings *managedSectionInfoSettings;
@property (readonly, nonatomic) BOOL usesManagedSettings;
@property (readonly, nonatomic) BBSectionInfoSettings *readableSettings;
@property (readonly, nonatomic) BBSectionInfoSettings *writableSettings;
@property (nonatomic) long long authorizationStatus;
@property (nonatomic) NSDate *authorizationExpirationDate;
@property (nonatomic) BOOL allowsNotifications;
@property (nonatomic) NSDate *lastUserGrantedAuthorizationDate;
@property (nonatomic) BOOL showsOnExternalDevices;
@property (nonatomic) BOOL showsCustomSettingsLink;
@property (nonatomic) long long contentPreviewSetting;
@property (nonatomic) long long spokenNotificationSetting;
@property (nonatomic) unsigned long long alertType;
@property (nonatomic) unsigned long long pushSettings;
@property (nonatomic) long long carPlaySetting;
@property (nonatomic) long long criticalAlertSetting;
@property (nonatomic) long long lockScreenSetting;
@property (nonatomic) long long notificationCenterSetting;
@property (nonatomic) long long bulletinGroupingSetting;
@property (nonatomic) BOOL hideWeeApp;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) BBSectionIcon *icon;
@property (copy, nonatomic) NSArray *subsections;
@property (weak, nonatomic) BBSectionInfo *parentSection;
@property (copy, nonatomic) NSString *factorySectionID;
@property (copy, nonatomic) NSArray *dataProviderIDs;
@property (readonly, copy, nonatomic) NSDictionary *stateCapture;
@property (nonatomic) BOOL isModificationAllowed;
@property (copy, nonatomic) NSString *sectionID;
@property (copy, nonatomic) NSString *subsectionID;
@property (nonatomic) long long sectionType;
@property (nonatomic) BOOL isAppClip;
@property (nonatomic) long long sectionCategory;
@property (nonatomic) BOOL suppressFromSettings;
@property (copy, nonatomic) BBSectionInfoSettings *sectionInfoSettings;
@property (nonatomic) unsigned long long suppressedSettings;
@property (copy, nonatomic) NSString *pathToWeeAppPluginBundle;
@property (readonly, nonatomic) BOOL hasEnabledSettings;
@property (readonly, nonatomic) BOOL isDeliveredQuietly;
@property (nonatomic) BOOL isRestricted;
@property (nonatomic) long long subsectionPriority;
@property (nonatomic) unsigned long long version;
@property (nonatomic) BOOL enabled;
@property (readonly, copy, nonatomic) NSData *iconData;
@property (nonatomic) unsigned long long bulletinCount;
@property (nonatomic) unsigned long long notificationCenterLimit;

+ (id)defaultSectionInfoForSection:(id)a0;
+ (id)defaultSectionInfoForType:(long long)a0;

- (id)awakeAfterUsingCoder:(id)a0;
- (id)replacementObjectForCoder:(id)a0;
- (id)init;
- (void)_configureWithDefaultsForSectionType:(long long)a0;
- (BOOL)showsInLockScreen;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isDeliveredQuietly;
- (void)deliverQuietly:(BOOL)a0 changeAuthorizationStatus:(BOOL)a1;
- (void)_deliverQuietly:(BOOL)a0;
- (void)makeAuthorizationPermanent;
- (id)_suppressedSettingsList:(unsigned long long)a0;
- (void)_addSubsection:(id)a0;
- (void)_dissociateDataProviderSectionInfo:(id)a0;
- (void)deliverQuietly:(BOOL)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)showsInNotificationCenter;
- (void)setShowsMessagePreview:(BOOL)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyFromManagedSettings;
- (long long)disabledSettingForSetting:(long long)a0;
- (void)updateWithDefaultSectionInfo:(id)a0;
- (long long)emergencySetting;
- (void)setEmergencySetting:(long long)a0;
- (void)setShowsInLockScreen:(BOOL)a0;
- (BOOL)showsMessagePreview;
- (id)initWithDefaultsForSectionType:(long long)a0;
- (void)setShowsInNotificationCenter:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)effectiveSectionInfoWithFactoryInfo:(id)a0 defaultContentPreviewSetting:(long long)a1 globalSpokenNotificationSetting:(long long)a2;
- (id)effectiveSectionInfoWithDefaultContentPreviewSetting:(long long)a0 globalSpokenNotificationSetting:(long long)a1;
- (id)_subsectionForID:(id)a0;
- (void)queryAndUseManagedSettings;
- (void)_replaceSubsection:(id)a0;
- (void)_associateDataProviderSectionInfo:(id)a0;
- (void)queryAndUseManagedSettingsForSectionID:(id)a0;

@end
