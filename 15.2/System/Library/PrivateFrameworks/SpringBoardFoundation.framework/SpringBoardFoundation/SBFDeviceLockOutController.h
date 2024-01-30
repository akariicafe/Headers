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

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isPermanentlyBlocked;
- (BOOL)isBlocked;
- (void)thermalBlockStatusChanged:(id)a0;
- (id)initWithThermalController:(id)a0 authenticationController:(id)a1;
- (void)_noteLockedOutStateMayHaveChanged:(BOOL)a0;
- (id)succinctDescription;
- (double)timeIntervalUntilUnblockedSinceReferenceDate;
- (BOOL)isLockedOut;
- (BOOL)isTemporarilyBlocked;
- (void).cxx_destruct;
- (BOOL)isUserRequestedEraseEnabled;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)isThermallyBlocked;
- (id)succinctDescriptionBuilder;
- (unsigned long long)deviceBlockStatus;
- (void)dealloc;
- (void)temporaryBlockStatusChanged;
- (void)_noteLockedOutReasonsMayHaveChanged;

@end
