@class NSNumber;

@interface SBSecurityDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, getter=isBlockedForThermal) BOOL blockedForThermal;
@property (retain, nonatomic, getter=isPendingDeviceWipe) NSNumber *pendingDeviceWipe;
@property (retain, nonatomic, getter=isBlockedForPasscode) NSNumber *blockedForPasscode;
@property (retain, nonatomic) NSNumber *numberOfFailedPasscodeAttempts;
@property (retain, nonatomic) NSNumber *unblockTimeFromReferenceDate;
@property (retain, nonatomic) NSNumber *blockStateGeneration;
@property (readonly, nonatomic, getter=isDeviceWipeEnabled) BOOL deviceWipeEnabled;
@property (readonly, nonatomic) BOOL dontLockEver;
@property (readonly, nonatomic) BOOL allowLockAndUnlockWithCase;
@property (readonly, nonatomic) BOOL enableLayerBasedViewSecurity;
@property (readonly, nonatomic) BOOL reportSecureDrawViolations;

- (void)_bindAndRegisterDefaults;
- (id)deviceLockDefaultForKey:(id)a0;
- (void)setDeviceLockDefault:(id)a0 forKey:(id)a1;

@end
