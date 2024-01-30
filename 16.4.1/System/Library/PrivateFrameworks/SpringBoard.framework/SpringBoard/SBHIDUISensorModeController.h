@class BKSHIDUISensorMode, NSString, SBHIDUISensorModeAssertion, SBAVSystemControllerCache, BKSHIDUISensorService, BSCompoundAssertion, NSMutableArray;
@protocol BSInvalidatable;

@interface SBHIDUISensorModeController : NSObject <SBProximitySensorControlling, SBAVSystemControllerCacheObserver, BSInvalidatable> {
    BKSHIDUISensorService *_sensorService;
    BKSHIDUISensorMode *_sensorMode;
    id<BSInvalidatable> _sensorModeAssertion;
    BSCompoundAssertion *_digitizerModeBaselineAssertion;
    NSMutableArray *_assertions;
    SBHIDUISensorModeAssertion *_pocketTouchesAssertion;
    long long _sensorModeTransactionCount;
    BOOL _proximityDetectionEnabled;
    SBAVSystemControllerCache *_avCache;
}

@property (nonatomic) BOOL pocketTouchesExpected;
@property (readonly, nonatomic) BOOL shouldUseLowPowerActiveProxDetectionMode;
@property (nonatomic, getter=isProximityDetectionEnabled) BOOL proximityDetectionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_hasModeAssertions;
- (void)_removeHIDUISensorModeAssertion:(id)a0;
- (id)assertBaselineDisabledDigitizerMode:(long long)a0 source:(long long)a1 reason:(id)a2;
- (id)initWithSensorService:(id)a0;
- (void)resetProximityCalibration;
- (id)_requestSensorModeAssertionForReason:(id)a0 source:(long long)a1 builder:(id /* block */)a2;
- (id)assertDisplayState:(long long)a0 source:(long long)a1 reason:(id)a2;
- (id)suspendProximityDetectionAndDisableDigitizer:(long long)a0 source:(long long)a1 reason:(id)a2;
- (void)_reevaluateLockStateForSource:(long long)a0;
- (id)init;
- (void)invalidate;
- (id)sensorModeTransactionForBacklightChangeSource:(long long)a0;
- (id)addStartupHIDLockAssertion;
- (void)cache:(id)a0 didUpdateActiveAudioRoute:(id)a1;
- (void).cxx_destruct;
- (id)suspendProximityDetectionForSource:(long long)a0 reason:(id)a1;

@end
