@class NSString, NSSet, AMSBagKeySet, NSData, NSNumber;

@interface AMSDevice : NSObject <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *language;
@property (class, readonly, nonatomic) NSSet *deviceOffers;
@property (class, readonly, nonatomic, getter=isEligibleForOffers) BOOL eligibleForOffers;
@property (class, readonly, nonatomic) BOOL expressedIntent;
@property (class, readonly, nonatomic, getter=isGift) BOOL gift;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, nonatomic) long long biometricState;
@property (class, readonly, nonatomic) NSString *buildVersion;
@property (class, readonly, nonatomic) NSString *compatibleProductType;
@property (class, readonly, nonatomic) NSString *deviceGUID;
@property (class, readonly, nonatomic) NSString *deviceName;
@property (class, readonly, nonatomic) NSString *hardwarePlatform;
@property (class, readonly, nonatomic) NSString *localIPAddress;
@property (class, readonly, nonatomic) NSString *macAddress;
@property (class, readonly, nonatomic) NSData *macAddressData;
@property (class, readonly, nonatomic) NSString *MLBSerialNumber;
@property (class, readonly, nonatomic) NSString *operatingSystem;
@property (class, readonly, nonatomic) NSString *productType;
@property (class, readonly, nonatomic) NSString *productVersion;
@property (class, readonly, nonatomic) NSString *ROMAddress;
@property (class, readonly, nonatomic, getter=isRunningInStoreDemoMode) BOOL runningInStoreDemoMode;
@property (class, readonly, nonatomic) NSNumber *screenScale;
@property (class, readonly, nonatomic) NSNumber *screenHeight;
@property (class, readonly, nonatomic) NSNumber *screenWidth;
@property (class, readonly, nonatomic, getter=isSecureElementAvailable) BOOL secureElementAvailable;
@property (class, readonly, nonatomic) NSString *serialNumber;
@property (class, readonly, nonatomic) NSString *thinnedAppVariantId;
@property (class, readonly, nonatomic) NSString *uniqueDeviceId;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deviceIsAppleWatch;
+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)createBagForSubProfile;
+ (void)_performAuth;
+ (BOOL)deviceIsiPod;
+ (void)startListeningForDeviceLanguageChangeWithBagContract:(id)a0;
+ (void)stopListeningForDeviceLanguageChange;
+ (BOOL)_setRawDeviceOffers:(id)a0 offersStore:(id)a1;
+ (BOOL)postDeviceOfferFollowUpWithIdentifier:(id)a0 account:(id)a1 priority:(long long)a2 bag:(id)a3 logKey:(id)a4;
+ (id)_followUpItemWithIdentifier:(id)a0 account:(id)a1 priority:(long long)a2 bag:(id)a3;
+ (BOOL)deviceIsMac;
+ (BOOL)tearDownAllDeviceOfferFollowUpsForAccount:(id)a0 logKey:(id)a1;
+ (BOOL)postAllDeviceOfferFollowUpsForAccount:(id)a0 priority:(long long)a1 bag:(id)a2 logKey:(id)a3;
+ (void)_setDeviceEligibilityKeepingExistingDeviceOffers:(id)a0 offersStore:(id)a1;
+ (void)saveDeviceOffers:(id)a0;
+ (BOOL)shouldPresentSetupOffersForAccount:(id)a0 issues:(long long *)a1;
+ (BOOL)tearDownDeviceOfferFollowUpWithIdentifier:(id)a0 account:(id)a1 logKey:(id)a2;
+ (BOOL)_shouldPostOffersUpdatedNotification:(id)a0 oldOffers:(id)a1;
+ (BOOL)deviceOffersContainType:(unsigned long long)a0;
+ (id)deviceOffersForType:(unsigned long long)a0;
+ (void)registerCompanionWithSerialNumber:(id)a0 bag:(id)a1;
+ (id)_notificationIdFromFollowUpId:(id)a0 account:(id)a1;
+ (void)removeDeviceOfferWithIdentifier:(id)a0 account:(id)a1 bag:(id)a2 logKey:(id)a3;
+ (void)saveDeviceOfferEligibility:(id)a0;
+ (BOOL)saveDeviceOffersForAccount:(id)a0 response:(id)a1 logKey:(id)a2;
+ (BOOL)shouldPresentSetupOffersForAccount:(id)a0;
+ (void)setDeviceOffersCheckEncodingForRequestParameters:(id)a0;
+ (BOOL)postAllDeviceOfferFollowUpsForAccount:(id)a0 priority:(long long)a1 bagContract:(id)a2 logKey:(id)a3;
+ (BOOL)postDeviceOfferFollowUpWithIdentifier:(id)a0 account:(id)a1 priority:(long long)a2 bagContract:(id)a3 logKey:(id)a4;
+ (void)registerCompanionWithSerialNumber:(id)a0;
+ (void)removeDeviceOfferWithIdentifier:(id)a0 account:(id)a1 bagContract:(id)a2 logKey:(id)a3;
+ (id)_dataForNVRAMKey:(id)a0;
+ (id)_systemVersionDictionary;
+ (id)phoneNumber;
+ (BOOL)deviceIsAppleTV;
+ (BOOL)deviceIsiPhone;
+ (BOOL)deviceIsInternalBuild;
+ (BOOL)deviceIsSeedBuild;
+ (BOOL)deviceIsAudioAccessory;
+ (BOOL)deviceIsiPad;


@end
