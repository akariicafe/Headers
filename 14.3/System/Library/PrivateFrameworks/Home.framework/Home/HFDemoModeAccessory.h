@class HFUserNotificationServiceSettings, NSUUID, NSString, NSPredicate, HMHome;

@interface HFDemoModeAccessory : HMAccessory <HFUserNotificationServiceSettingsProviding>

@property (retain, nonatomic) NSUUID *internalUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *firmwareVersion;
@property (nonatomic, getter=areNotificationsEnabled) BOOL notificationsEnabled;
@property (retain, nonatomic) NSPredicate *notificationCondition;
@property (retain, nonatomic) HMHome *home;
@property (nonatomic) BOOL isInternallyCertified;
@property (readonly, copy, nonatomic) HFUserNotificationServiceSettings *hf_userNotificationSettings;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accessoryWithContentsOfDictionary:(id)a0 forHome:(id)a1;
+ (BOOL)_hasValidKeys:(id)a0;

- (id)room;
- (BOOL)isReachable;
- (id)serialNumber;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)category;
- (long long)certificationStatus;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)symptomsHandler;
- (id)hf_updateIsFavorite:(BOOL)a0;
- (BOOL)hf_isFavorite;
- (BOOL)hf_hasSetFavorite;
- (BOOL)hf_shouldShowInFavorites;
- (id)name;
- (BOOL)hf_shouldShowSoftwareUpdateInfo;
- (id)hf_serviceNameComponents;
- (id)services;
- (id)initWithContentsOfDictionary:(id)a0 forHome:(id)a1;
- (BOOL)_isAppleInternalAccessory;
- (BOOL)_shouldShowAppleInternalManufacturerInfo;
- (void)_updateManufacturerInfoWithString:(id)a0 forKey:(id)a1;
- (id)hf_updateUserNotificationSettings:(id)a0;

@end
