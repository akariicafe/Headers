@class SpringBoard, NSString, SBHardwareDefaults, NSMutableSet, NSHashTable;
@protocol SBProximitySensorControlling;

@interface SBProximitySensorManager : NSObject <SBUIActiveOrientationObserver> {
    NSMutableSet *_clientsWantingDetectionEnabled;
    id<SBProximitySensorControlling> _hidInterface;
    SBHardwareDefaults *_hardwareDefaults;
    BOOL _objectInCrudeProximity;
    int _backboardNotificationToken;
    NSHashTable *_observers;
}

@property (nonatomic, getter=isObjectInProximity, setter=_setObjectInProximity:) BOOL objectInProximity;
@property (nonatomic, getter=isProximityDetectionEnabled, setter=_setProximityDetectionEnabled:) BOOL proximityDetectionEnabled;
@property (nonatomic, getter=isProximityDetectionPermitted, setter=_setProximityDetectionPermitted:) BOOL proximityDetectionPermitted;
@property (retain, nonatomic, getter=_interfaceOrientationProvider, setter=_setInterfaceOrientationProvider:) SpringBoard *interfaceOrientationProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (void)_enableProx;
- (void)_destroy;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_proximityDidChange:(id)a0;
- (BOOL)_clientsWantDetectionEnabled;
- (void)client:(id)a0 wantsProximityDetectionEnabled:(BOOL)a1;
- (void)_updateProxState;
- (void)resetProximityCalibration;
- (void)processHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (id)initWithHIDInterface:(id)a0 hardwareDefaults:(id)a1 interfaceOrientationProvider:(id)a2;
- (void)_reloadDefaults;
- (void)_disableProx;

@end
