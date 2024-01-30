@class NSUUID, NSString, NSObject;
@protocol HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider, HMDLegacyAccessorySettingsAdaptorDelegate, OS_dispatch_queue, HMESubscriptionProviding;

@interface HMDLegacyAccessorySettingsAdaptor : NSObject <HMEEventConsumer, HMFLogging, HMDLegacyAccessorySettingsAdaptor>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) NSUUID *accessoryUUID;
@property (readonly, nonatomic) id<HMESubscriptionProviding> subscriptionProvider;
@property (readonly, weak, nonatomic) id<HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider> currentAccessorySettingsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDLegacyAccessorySettingsAdaptorDelegate> delegate;

+ (id)logCategory;
+ (id)parsedBoolSettingEvent:(id)a0 topic:(id)a1;
+ (id)parsedIntegerSettingEvent:(id)a0 topic:(id)a1;
+ (id)parsedLanguageListSetting:(id)a0 topic:(id)a1;
+ (id)parsedLanguageSetting:(id)a0 topic:(id)a1;

- (void)startup;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (void).cxx_destruct;
- (id)_settingValueForKeyPath:(id)a0 value:(id)a1;
- (id)_transformLegacyLanguageSettingValueToImmutableSetting:(id)a0;
- (id)initWithQueue:(id)a0 homeUUID:(id)a1 accessoryUUID:(id)a2 settingsController:(id)a3 subscriptionProvider:(id)a4;
- (id)languageValueList;
- (void)updateSettingWithKeyPath:(id)a0 settingValue:(id)a1 completion:(id /* block */)a2;

@end
