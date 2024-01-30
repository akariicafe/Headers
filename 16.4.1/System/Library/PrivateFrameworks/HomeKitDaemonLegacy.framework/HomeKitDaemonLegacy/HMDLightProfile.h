@class HMDNaturalLightingActiveTransitionContext, NSDate, HMDNaturalLightingCurve, HMDService, NSString, NSSet, HMDHAPAccessory, NSHashTable, HMLightProfileSettings, HMDNaturalLightingCurveWriter, HMDCharacteristic, HMDCharacteristicsAvailabilityListener, HMDNaturalLightingEnabledRetryContext;
@protocol HMDLightProfileDataSource;

@interface HMDLightProfile : HMDAccessoryProfile <HMDCharacteristicsAvailabilityListenerDelegate>

@property unsigned long long supportedFeatures;
@property (readonly) HMDCharacteristicsAvailabilityListener *characteristicsAvailabilityListener;
@property (copy) NSSet *notificationEnabledCharacteristics;
@property (weak) HMDHAPAccessory *hapAccessory;
@property (readonly) NSString *clientIdentifier;
@property (readonly) HMDNaturalLightingCurveWriter *naturalLightingCurveWriter;
@property (copy) NSDate *lastNaturalLightingEnabledDate;
@property (copy) NSDate *lastNaturalLightingUsedDate;
@property (getter=isNaturalLightingCapable) BOOL naturalLightingCapable;
@property (readonly, getter=isUsingNaturalLighting) BOOL usingNaturalLighting;
@property (readonly) id<HMDLightProfileDataSource> dataSource;
@property (retain) HMDCharacteristic *brightnessCharacteristic;
@property (retain) HMDCharacteristic *colorTemperatureCharacteristic;
@property (copy) NSDate *lastNaturalLightingCurveUpdateDate;
@property (copy) HMDNaturalLightingCurve *naturalLightingCurve;
@property (copy) HMDNaturalLightingActiveTransitionContext *naturalLightingActiveTransitionContext;
@property (copy) NSSet *readCharacteristics;
@property (copy) HMDNaturalLightingEnabledRetryContext *naturalLightingEnabledRetryContext;
@property unsigned char activeTransitionsCount;
@property (retain) NSHashTable *characteristicValueObservers;
@property (readonly, copy) NSSet *availableCharacteristics;
@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled;
@property (readonly) HMLightProfileSettings *settings;
@property (readonly, copy) NSDate *mostRecentNaturalLightingEnabledDate;
@property (readonly, copy) NSDate *mostRecentNaturalLightingUsedDate;
@property (readonly) HMDService *service;
@property (readonly, copy) NSSet *readCharacteristicRequests;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)registerForMessages;
- (void)setNaturalLightingEnabled:(BOOL)a0 shouldRetryOnFailure:(BOOL)a1 completion:(id /* block */)a2;
- (void)_handleAccessoryCharacteristicsChanged:(id)a0;
- (id)availableCharacteristicWithType:(id)a0 fromChangedObjects:(id)a1;
- (void)callSetNaturalLightingEnabledCompletion:(id /* block */)a0 error:(id)a1;
- (void)disableNaturalLightingCharacteristicNotificationsForObserver:(id)a0;
- (BOOL)enableNaturalLightingCharacteristicNotificationsForObserver:(id)a0;
- (void)fetchNaturalLightingEnabledWithCompletion:(id /* block */)a0;
- (void)handleAccessoryCharacteristicsChanged:(id)a0;
- (void)handleAccessoryUnconfigured:(id)a0;
- (void)handleFetchNaturalLightColorTemperatureForBrightnessMessage:(id)a0;
- (void)handleHomeDidDisableCharacteristicNotification:(id)a0;
- (void)handleHomeDidEnableCharacteristicNotification:(id)a0;
- (void)handleHomeNaturalLightingContextUpdated:(id)a0;
- (void)handleSetNaturalLightingEnabled:(BOOL)a0;
- (void)handleSetNaturalLightingEnabledMessage:(id)a0;
- (id)initWithUUID:(id)a0 workQueue:(id)a1 lightService:(id)a2 accessory:(id)a3 characteristicsAvailabilityListener:(id)a4 naturalLightingCurveWriter:(id)a5 dataSource:(id)a6;
- (id)initWithWorkQueue:(id)a0 lightService:(id)a1 accessory:(id)a2;
- (void)listener:(id)a0 didUpdateAvailableCharacteristics:(id)a1;
- (void)notifyClientsOfUpdatedSettingsWithPreviousSettings:(id)a0;
- (void)readNaturalLightingCharacteristicsWithReason:(id)a0;
- (void)readNaturalLightingCharacteristicsWithReason:(id)a0 completion:(id /* block */)a1;
- (void)resetNaturalLightingEnabledRetryContext;
- (void)retrySetNaturalLightingEnabledWithContext:(id)a0 error:(id)a1;
- (void)setNaturalLightingCharacteristicsNotificationEnabled:(BOOL)a0 forObserver:(id)a1;
- (void)setNaturalLightingEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)setNaturalLightingEnabled:(BOOL)a0 completion:(id /* block */)a1 retryContext:(id)a2;
- (BOOL)shouldRetrySetNaturalLightingEnabledWithError:(id)a0;
- (void)synchronizeCurveToAccessory;
- (BOOL)updateActiveTransitionCountWithCharacteristic:(id)a0;
- (BOOL)updateEnabledCharacteristicsNotifications;
- (void)updateLastNaturalLightingUsedState;
- (BOOL)updateNaturalLightingCurve;
- (void)updateNaturalLightingEnabledForCharacteristic:(id)a0;
- (void)updateSettingsWithCharacteristics:(id)a0;
- (id)updateSettingsWithReadCharacteristicResponsePayload:(id)a0 error:(id *)a1;
- (void)updateSupportedFeaturesWithCharacteristics:(id)a0;

@end
