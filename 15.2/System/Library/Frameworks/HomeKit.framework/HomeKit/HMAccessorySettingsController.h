@class NSString, _HMContext, HMAccessorySettingsMetricsDispatcher, HMFUnfairLock, HMAccessorySettingsMessenger;
@protocol HMAccessorySettingsMessengerFactory, HMAccessorySettingsControllerDataSource;

@interface HMAccessorySettingsController : NSObject <HMFLogging> {
    HMFUnfairLock *_lock;
    HMAccessorySettingsMessenger *_messenger;
}

@property (readonly) id<HMAccessorySettingsMessengerFactory> messengerFactory;
@property (readonly) HMAccessorySettingsMetricsDispatcher *metricsDispatcher;
@property (weak) id<HMAccessorySettingsControllerDataSource> dataSource;
@property (readonly) _HMContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)dataSourceHomeWithHomeIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)messengerWithHomeUUID:(id)a0;
- (id)initWithContext:(id)a0 messengerFactory:(id)a1 metricsDispatcher:(id)a2;
- (void)updateAccessorySettingWithHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPath:(id)a2 settingValue:(id)a3 completionHandler:(id /* block */)a4;
- (void)updateAccessorySettingWithAccessoryIdentifier:(id)a0 keyPath:(id)a1 settingValue:(id)a2 completionHandler:(id /* block */)a3;

@end
