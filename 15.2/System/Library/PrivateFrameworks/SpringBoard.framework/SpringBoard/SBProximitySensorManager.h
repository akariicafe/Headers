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

- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (void)_proximityDidChange:(id)a0;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (void)_reloadDefaults;
- (void)_destroy;
- (id)initWithHIDInterface:(id)a0 hardwareDefaults:(id)a1 interfaceOrientationProvider:(id)a2;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)processHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)resetProximityCalibration;
- (void).cxx_destruct;
- (void)_enableProx;
- (void)client:(id)a0 wantsProximityDetectionEnabled:(BOOL)a1;
- (id)init;
- (void)_disableProx;
- (BOOL)_clientsWantDetectionEnabled;
- (void)_updateProxState;

@end
