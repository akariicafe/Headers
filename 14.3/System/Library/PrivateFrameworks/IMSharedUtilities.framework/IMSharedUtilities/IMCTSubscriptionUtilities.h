@class IMCTXPCServiceSubscriptionInfo, NSMutableDictionary, IDSPhoneSubscriptionSelector, NSArray, NSString, CoreTelephonyClient;

@interface IMCTSubscriptionUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate>

@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (retain, nonatomic) NSMutableDictionary *cachedCarrierSettings;
@property (retain, nonatomic) IMCTXPCServiceSubscriptionInfo *ctSubscriptionInfo;
@property (retain, nonatomic) IDSPhoneSubscriptionSelector *phoneSubscriptionSelector;
@property (copy, nonatomic) NSArray *registeredSIMIDs;
@property (copy, nonatomic) NSArray *registeredPhoneNumbers;
@property (copy, nonatomic) NSArray *registeredSubscriptions;
@property (readonly, copy, nonatomic) NSString *ctPhoneNumber;
@property (readonly, nonatomic) NSArray *ctServiceSubscriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)subscriptionInfoDidChange;
- (void)carrierBundleChange:(id)a0;
- (id)copyCarrierBundleValueForSubscriptionContext:(id)a0 keyHierarchy:(id)a1 defaultValue:(id)a2 valueIfError:(id)a3;
- (void)_resetSubscriptionInfo;
- (id)init;
- (void).cxx_destruct;
- (id)_getCarrierSettingsForUniqueID:(id)a0;
- (id)newSubscriptionContextWithPhoneNumber:(id)a0 labelID:(id)a1 isDefaultVoice:(id)a2 isDefaultData:(id)a3 slot:(long long)a4;
- (unsigned long long)numberOfSubscriptions;
- (id)_cachedCarrierSettingsUniqueIDKeyForSubscriptionContext:(id)a0;
- (id)_createSettingsDictionaryForUniqueID:(id)a0;
- (id)_cachedCarrierKeyForKeyHierarchy:(id)a0 bundleType:(long long)a1;
- (id)newSubscriptionContextWithSlot:(long long)a0;
- (id)copyBundleValueForSubscriptionContext:(id)a0 keyHierarchy:(id)a1 bundleType:(long long)a2 defaultValue:(id)a3 valueIfError:(id)a4;
- (id)_getCachedSettingOrReadFromBundleForCarrierBundleKey:(id)a0 bundleType:(long long)a1 forContext:(id)a2 defaultValue:(id)a3;
- (id)stringForBundleType:(long long)a0;
- (id)_getCachedCarrierSettingValueForBundleKey:(id)a0 uniqueID:(id)a1;
- (void)_resetCachedCarrierSettingsForUniqueID:(id)a0;
- (id)copyOperatorBundleValueForSubscriptionContext:(id)a0 keyHierarchy:(id)a1 defaultValue:(id)a2 valueIfError:(id)a3;
- (id)ctSubscriptionInfoWithError:(id)a0;
- (void)_setCachedCarrierSettingValue:(id)a0 bundleKey:(id)a1 uniqueID:(id)a2;
- (BOOL)deviceSupportsMultipleSubscriptions;
- (void)_setCarrierSettings:(id)a0 uniqueID:(id)a1;

@end
