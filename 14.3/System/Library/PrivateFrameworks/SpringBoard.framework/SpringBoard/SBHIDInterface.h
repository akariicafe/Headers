@class NSString, NSMutableArray, SBHIDUILockAssertion;
@protocol BSInvalidatable;

@interface SBHIDInterface : NSObject <SBProximitySensorControlling> {
    unsigned long long _lockState;
    NSMutableArray *_assertions;
    id<BSInvalidatable> _dispatchingAssertion;
    id<BSInvalidatable> _dispatchingAssertionForVoiceCommand;
    SBHIDUILockAssertion *_pocketTouchesAssertion;
    BOOL _proximityDetectionEnabled;
}

@property (nonatomic, getter=isProximityDetectionEnabled) BOOL proximityDetectionEnabled;
@property (nonatomic) BOOL pocketTouchesExpected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)suspendMultitouchForSource:(long long)a0 reason:(id)a1;
- (id)init;
- (void)reevaluateHIDLockAssertionsForSource:(long long)a0;
- (id)addStartupHIDLockAssertion;
- (void).cxx_destruct;
- (id)suspendProximityDetectionForSource:(long long)a0 reason:(id)a1;
- (id)suspendProximityDetectionAndMultitouchForSource:(long long)a0 disableTapToWake:(BOOL)a1 reason:(id)a2;
- (void)_setLockState:(unsigned long long)a0 source:(long long)a1;
- (void)resetProximityCalibration;
- (void)removeHIDLockAssertion:(id)a0 source:(long long)a1;
- (id)_suspendProximity:(BOOL)a0 suspendMultitouch:(BOOL)a1 disableTapToWake:(BOOL)a2 source:(long long)a3 reason:(id)a4;
- (void)_reevaluateLockStateForSource:(long long)a0;

@end
