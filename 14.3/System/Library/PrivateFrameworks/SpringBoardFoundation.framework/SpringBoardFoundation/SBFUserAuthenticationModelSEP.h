@class NSString, SBFMobileKeyBag, MCProfileConnection, SBSecurityDefaults;
@protocol SBFUserAuthenticationModelDelegate;

@interface SBFUserAuthenticationModelSEP : NSObject <SBFUserAuthenticationModel> {
    SBFMobileKeyBag *_keybag;
    double _unblockTime;
    BOOL _permanentlyBlocked;
    BOOL _pendingWipe;
    SBSecurityDefaults *_securityDefaults;
    MCProfileConnection *_profileConnection;
}

@property (nonatomic) id<SBFUserAuthenticationModelDelegate> delegate;
@property (readonly, nonatomic, getter=isTemporarilyBlocked) BOOL temporarilyBlocked;
@property (readonly, nonatomic, getter=isPermanentlyBlocked) BOOL permanentlyBlocked;
@property (readonly, nonatomic) double timeUntilUnblockedSinceReferenceDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_refreshStateForMkbState:(id)a0 notify:(BOOL)a1;
- (void).cxx_destruct;
- (id)_initWithKeyBag:(id)a0 profileConnection:(id)a1;
- (BOOL)_isDeviceWipePreferenceEnabled;
- (void)_refreshStateAndNotify:(BOOL)a0;
- (void)notePasscodeEntryCancelled;
- (void)synchronize;
- (void)notePasscodeUnlockFailedWithError:(id)a0;
- (void)noteNewMkbDeviceLockState:(id)a0;
- (void)clearBlockedState;
- (void)refreshBlockedState;
- (void)performPasswordTest:(id /* block */)a0;
- (void)notePasscodeUnlockSucceeded;
- (id)initWithKeyBag:(id)a0;
- (id)descriptionBuilder;
- (void)notePasscodeEntryBegan;

@end
