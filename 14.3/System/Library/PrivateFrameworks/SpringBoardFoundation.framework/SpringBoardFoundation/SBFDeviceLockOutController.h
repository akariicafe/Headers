@class SBFUserAuthenticationController, NSString;
@protocol SBFThermalBlockProvider;

@interface SBFDeviceLockOutController : NSObject <BSDescriptionProviding, SBFThermalConditionObserver, SBFPrivateAuthenticationObserver, SBFLockOutStatusProvider> {
    unsigned long long _lastBlockedStatus;
}

@property (retain, nonatomic, getter=_authenticationController, setter=_setAuthenticationController:) SBFUserAuthenticationController *authenticationController;
@property (retain, nonatomic, getter=_thermalProvider, setter=_setThermalProvider:) id<SBFThermalBlockProvider> thermalProvider;
@property (nonatomic, getter=_isLockedOutCached, setter=_setLockedOutCached:) BOOL lockedOutCached;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPermanentlyBlocked;
- (void).cxx_destruct;
- (BOOL)isLockedOut;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (BOOL)isTemporarilyBlocked;
- (void)_noteLockedOutReasonsMayHaveChanged;
- (id)succinctDescription;
- (BOOL)isBlocked;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithThermalController:(id)a0 authenticationController:(id)a1;
- (unsigned long long)deviceBlockStatus;
- (void)thermalBlockStatusChanged:(id)a0;
- (id)succinctDescriptionBuilder;
- (double)timeIntervalUntilUnblockedSinceReferenceDate;
- (void)_noteLockedOutStateMayHaveChanged:(BOOL)a0;
- (void)temporaryBlockStatusChanged;
- (BOOL)isThermallyBlocked;

@end
