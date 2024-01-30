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
- (void)_noteLockedOutStateMayHaveChanged:(BOOL)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isUserRequestedEraseEnabled;
- (BOOL)isBlocked;
- (void)temporaryBlockStatusChanged;
- (unsigned long long)deviceBlockStatus;
- (void)thermalBlockStatusChanged:(id)a0;
- (BOOL)isTemporarilyBlocked;
- (BOOL)isThermallyBlocked;
- (void)dealloc;
- (id)initWithThermalController:(id)a0 authenticationController:(id)a1;
- (void)_noteLockedOutReasonsMayHaveChanged;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (double)timeIntervalUntilUnblockedSinceReferenceDate;
- (BOOL)isLockedOut;
- (void).cxx_destruct;

@end
