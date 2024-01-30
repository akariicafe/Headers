@class NSString, BLSAssertion;
@protocol SBFLockOutStatusProvider;

@interface SBThermalAlwaysOnPolicy : NSObject <SBAlwaysOnPolicy> {
    BLSAssertion *_alwaysOnDisabledAssertion;
    id<SBFLockOutStatusProvider> _lockOutStatusProvider;
}

@property (nonatomic, getter=_isThermallyBlocked, setter=_setThermallyBlocked:) BOOL thermallyBlocked;
@property (readonly, nonatomic, getter=isAlwaysOnPolicyActive) BOOL alwaysOnPolicyActive;
@property (readonly, copy, nonatomic) NSString *analyticsPolicyName;
@property (readonly, copy, nonatomic) id analyticsPolicyValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)activateAlwaysOnPolicy;
- (void)_noteDeviceBlockStateDidChange:(id)a0;
- (void)_noteBootCompleted:(id)a0;
- (void)_updateThermalState;

@end
