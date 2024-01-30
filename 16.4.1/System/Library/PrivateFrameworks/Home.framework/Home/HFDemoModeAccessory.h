@class HMRoom, NSString, NSUUID, NSPredicate, NSSet, HFServiceNameComponents, HMHome, HFUserNotificationServiceSettings, HFAccessoryType;
@protocol HFHomeKitObject;

@interface HFDemoModeAccessory : HMAccessory <HFAccessoryRepresentable, HFUserNotificationServiceSettingsProviding>

@property (readonly, nonatomic) id<HFHomeKitObject> hf_homeKitObject;
@property (readonly, nonatomic) Class hf_itemClass;
@property (readonly, nonatomic) HFAccessoryType *hf_accessoryType;
@property (readonly, nonatomic) HMRoom *hf_safeRoom;
@property (readonly, nonatomic) BOOL hf_canSpanMultipleRooms;
@property (readonly, nonatomic) NSSet *hf_containedCharacteristics;
@property (readonly, nonatomic) NSSet *hf_containedServices;
@property (readonly, nonatomic) NSSet *hf_containedProfiles;
@property (readonly, nonatomic) NSSet *hf_associatedAccessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property (readonly, nonatomic) BOOL hf_isFavorite;
@property (readonly, nonatomic) BOOL hf_hasSetFavorite;
@property (readonly, nonatomic) BOOL hf_shouldShowInFavorites;
@property (readonly, nonatomic) BOOL hf_effectiveIsFavorite;
@property (readonly, nonatomic) BOOL hf_supportsHomeStatus;
@property (readonly, nonatomic) BOOL hf_isVisibleInHomeStatus;
@property (readonly, nonatomic) BOOL hf_hasSetVisibleInHomeStatus;
@property (readonly, nonatomic) BOOL hf_isForcedVisibleInHomeStatus;
@property (readonly, nonatomic) BOOL hf_showInHomeDashboard;
@property (readonly, nonatomic) BOOL hf_hasSetShowInHomeDashboard;
@property (readonly, nonatomic) BOOL hf_effectiveShowInHomeDashboard;
@property (readonly, nonatomic) NSString *hf_tileSize;
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

+ (id)_demoModeAccessoryTypeToHomeKitAccessoryType;
+ (BOOL)_hasValidKeys:(id)a0;
+ (id)accessoryWithContentsOfDictionary:(id)a0 forHome:(id)a1;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isReachable;
- (id)services;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serialNumber;
- (id)category;
- (void).cxx_destruct;
- (id)name;
- (id)room;
- (id)symptomsHandler;
- (long long)certificationStatus;
- (BOOL)hf_isMediaAccessory;
- (id)hf_updateIsFavorite:(BOOL)a0;
- (id)hf_updateUserNotificationSettings:(id)a0;
- (BOOL)hf_shouldShowSoftwareUpdateInfo;
- (BOOL)_isAppleInternalAccessory;
- (BOOL)_shouldShowAppleInternalManufacturerInfo;
- (void)_updateManufacturerInfoWithString:(id)a0 forKey:(id)a1;
- (id)initWithContentsOfDictionary:(id)a0 forHome:(id)a1;

@end
