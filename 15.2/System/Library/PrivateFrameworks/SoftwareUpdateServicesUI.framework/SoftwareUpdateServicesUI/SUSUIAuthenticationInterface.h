@class NSString, NSUserDefaults, SUKeybagInterface;

@interface SUSUIAuthenticationInterface : NSObject <SUKeybagInterfaceObserver> {
    NSUserDefaults *_defaults;
    SUKeybagInterface *_keybag;
    BOOL _isPasscodeLocked;
}

@property (nonatomic, getter=_numberOfFailedAuthenticationAttempts, setter=_setNumberOfFailedAuthenticationAttempts:) unsigned long long numberOfFailedAuthenticationAttempts;
@property (nonatomic) BOOL isController;
@property (readonly, nonatomic) BOOL isBlocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_setPasscodeLocked:(BOOL)a0;
- (void)keybagInterface:(id)a0 passcodeLockedStateDidChange:(BOOL)a1;
- (void)resetAttempts;
- (unsigned long long)_currentFailedAttemptsCount;
- (id)initWithKeybag:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)attemptAuthentication:(id)a0 outBlocked:(BOOL *)a1;
- (void)_incrementFailedAttemptsCount;

@end
