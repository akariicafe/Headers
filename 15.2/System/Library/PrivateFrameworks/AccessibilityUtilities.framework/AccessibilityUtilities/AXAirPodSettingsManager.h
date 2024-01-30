@class NSArray, NSPointerArray, AXDispatchTimer, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface AXAirPodSettingsManager : NSObject {
    NSPointerArray *_deviceListeners;
    struct BTSessionImpl { } *_session;
    struct BTLocalDeviceImpl { } *_localDevice;
    struct BTAccessoryManagerImpl { } *_accessoryManager;
    NSObject<OS_dispatch_queue> *_queue;
    AXDispatchTimer *_delayTimer;
    NSMutableSet *_deviceMap;
}

@property (readonly, nonatomic) NSArray *pairedAirPods;

+ (id)sharedInstance;

- (id)accessibilityDomainAccessor;
- (BOOL)nps_noiseCancellationEnabledWithOneUnitForDeviceAddress:(id)a0;
- (void)nps_setNoiseCancellationEnabledWithOneUnit:(BOOL)a0 forDeviceAddress:(id)a1;
- (float)nps_holdDurationForDeviceAddress:(id)a0;
- (void)nps_setTapSpeed:(float)a0 forDeviceAddress:(id)a1;
- (BOOL)noiseCancellationEnabledWithOneUnitForDeviceAddress:(id)a0;
- (void)_nps_updateAirPodsDictionaryForPreference:(id)a0 deviceAddress:(id)a1 value:(id)a2;
- (void)setNoiseCancellationEnabledWithOneUnit:(BOOL)a0 forDeviceAddress:(id)a1;
- (void)setHoldDuration:(float)a0 forDeviceAddress:(id)a1;
- (id)_productIdentifierForBTDevice:(id)a0;
- (void)_applySettings;
- (float)holdDurationForDeviceAddress:(id)a0;
- (void)_retrieveSettingsFromNewDevices:(id)a0;
- (float)nps_tapSpeedForDeviceAddress:(id)a0;
- (id)disambiguationString;
- (void)start;
- (void)_sessionEventForSession:(struct BTSessionImpl { } *)a0 event:(int)a1 result:(int)a2;
- (void)_beginDetach;
- (void)_accessoryEventForManager:(struct BTAccessoryManagerImpl { } *)a0 event:(int)a1 device:(struct BTDeviceImpl { } *)a2 state:(int)a3;
- (void)setTapSpeed:(float)a0 forDeviceAddress:(id)a1;
- (void)nps_setHoldDuration:(float)a0 forDeviceAddress:(id)a1;
- (void).cxx_destruct;
- (id)initSharedInstance;
- (float)tapSpeedForDeviceAddress:(id)a0;
- (void)_didDisconnect;
- (id)titleForSettings;
- (id)_nps_airPodsDictionaryForPreference:(id)a0;
- (unsigned int)toneVolumeForDeviceAddress:(id)a0;
- (void)setToneVolume:(unsigned int)a0 forDeviceAddress:(id)a1;
- (void)_applySettingsForAddress:(id)a0;
- (void)_retrieveSettingsForAddress:(id)a0;
- (void)_didConnectWithSession:(struct BTSessionImpl { } *)a0;
- (void)dealloc;
- (void)nps_setToneVolume:(float)a0 forDeviceAddress:(id)a1;
- (void)_probeAccessories;
- (float)nps_toneVolumeForDeviceAddress:(id)a0;
- (void)_serviceEventForDevice:(struct BTDeviceImpl { } *)a0 serviceMask:(unsigned int)a1 eventType:(int)a2 specificEvent:(unsigned int)a3 result:(int)a4;

@end
