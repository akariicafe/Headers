@class SpringBoard, NSString, SBHardwareDefaults, NSMutableSet, NSHashTable, BSCompoundAssertion;
@protocol SBProximitySensorControlling;

@interface SBProximitySensorManager : NSObject <SBUIActiveOrientationObserver> {
    NSMutableSet *_clientsWantingDetectionEnabled;
    NSMutableSet *_clientsWantingGracePeriodDisabled;
    id<SBProximitySensorControlling> _hidInterface;
    SBHardwareDefaults *_hardwareDefaults;
    NSHashTable *_observers;
    BSCompoundAssertion *_suppressBacklightChangesAssertion;
    int _proximityDetectionMode;
    BOOL _objectInCrudeProximity;
    int _backboardNotificationToken;
}

@property (nonatomic, getter=isProximityDetectionEnabled, setter=_setProximityDetectionEnabled:) BOOL proximityDetectionEnabled;
@property (nonatomic, getter=isProximityDetectionPermitted, setter=_setProximityDetectionPermitted:) BOOL proximityDetectionPermitted;
@property (retain, nonatomic, getter=_interfaceOrientationProvider, setter=_setInterfaceOrientationProvider:) SpringBoard *interfaceOrientationProvider;
@property (readonly, nonatomic, getter=isObjectInProximity) BOOL objectInProximity;
@property (readonly, nonatomic, getter=isGracePeriodDisabled) BOOL gracePeriodDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_clientsWantDetectionEnabled;
- (void)addObserver:(id)a0;
- (void)_destroy;
- (void)_disableProx;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (void)client:(id)a0 wantsProximityDetectionEnabled:(BOOL)a1;
- (void)_setObjectInProximity:(BOOL)a0 detectionMode:(int)a1 postToApps:(BOOL)a2;
- (void)processHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)resetProximityCalibration;
- (void)_updateProxState;
- (void)client:(id)a0 wantsProximityDetectionEnabled:(BOOL)a1 disableGracePeriod:(BOOL)a2;
- (void)dealloc;
- (void)_setObjectInProximity:(BOOL)a0 detectionMode:(int)a1;
- (void)removeObserver:(id)a0;
- (id)suppressBacklightChangesForReason:(id)a0;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (id)init;
- (id)initWithHIDInterface:(id)a0 hardwareDefaults:(id)a1 interfaceOrientationProvider:(id)a2;
- (void)_enableProx;
- (void)_setObjectInCrudeProximity:(BOOL)a0;
- (void)_reloadDefaults;
- (void).cxx_destruct;

@end
