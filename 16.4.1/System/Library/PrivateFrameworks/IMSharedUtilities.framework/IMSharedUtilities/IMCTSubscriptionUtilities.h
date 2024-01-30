@class IMCTXPCServiceSubscriptionInfo, NSMutableDictionary, IDSPhoneSubscriptionSelector, NSString, NSArray, CoreTelephonyClient;

@interface IMCTSubscriptionUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate>

@property (retain, nonatomic) IMCTXPCServiceSubscriptionInfo *ctSubscriptionInfo;
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (retain, nonatomic) NSMutableDictionary *cachedCarrierSettings;
@property (retain, nonatomic) IDSPhoneSubscriptionSelector *phoneSubscriptionSelector;
@property (readonly, copy, nonatomic) NSString *ctPhoneNumber;
@property (readonly, copy, nonatomic) NSArray *registeredSIMIDs;
@property (readonly, copy, nonatomic) NSArray *registeredPhoneNumbers;
@property (readonly, copy, nonatomic) NSArray *registeredSubscriptionSlotIDs;
@property (readonly, nonatomic) NSArray *ctServiceSubscriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)carrierBundleChange:(id)a0;
- (void)subscriptionInfoDidChange;
- (id)_cachedCarrierKeyForKeyHierarchy:(id)a0 bundleType:(long long)a1;
- (id)ctSubscriptionInfoWithError:(id *)a0;
- (id)newSubscriptionContextWithSlot:(long long)a0;
- (id)_getCarrierSettingsForUniqueID:(id)a0;
- (id)newSubscriptionContextWithPhoneNumber:(id)a0 labelID:(id)a1 isDefaultVoice:(id)a2 isDefaultData:(id)a3 slot:(long long)a4;
- (id)copyCarrierBundleValueForSubscriptionContext:(id)a0 keyHierarchy:(id)a1 defaultValue:(id)a2 valueIfError:(id)a3;
- (id)_getCachedCarrierSettingValueForBundleKey:(id)a0 uniqueID:(id)a1;
- (unsigned long long)numberOfSubscriptions;
- (void)resetCacheSubscriptionInfo;
- (id)_cachedCarrierSettingsUniqueIDKeyForSubscriptionContext:(id)a0;
- (BOOL)deviceSupportsMultipleSubscriptions;
- (id)stringForBundleType:(long long)a0;
- (id)copyBundleValueForSubscriptionContext:(id)a0 keyHierarchy:(id)a1 bundleType:(long long)a2 defaultValue:(id)a3 valueIfError:(id)a4;
- (id)_getCachedSettingOrReadFromBundleForCarrierBundleKey:(id)a0 bundleType:(long long)a1 forContext:(id)a2 defaultValue:(id)a3;
- (void)resetCacheSubscriptionInfoAndPostNotification;
- (id)_iMessageService;
- (id)init;
- (id)_createSettingsDictionaryForUniqueID:(id)a0;
- (void)_setCachedCarrierSettingValue:(id)a0 bundleKey:(id)a1 uniqueID:(id)a2;
- (void)_resetCachedCarrierSettingsForUniqueID:(id)a0;
- (void)_setCarrierSettings:(id)a0 uniqueID:(id)a1;
- (id)_CTSIMSFromPhoneSubscriptions:(id)a0;
- (void).cxx_destruct;
- (id)copyOperatorBundleValueForSubscriptionContext:(id)a0 keyHierarchy:(id)a1 defaultValue:(id)a2 valueIfError:(id)a3;

@end
