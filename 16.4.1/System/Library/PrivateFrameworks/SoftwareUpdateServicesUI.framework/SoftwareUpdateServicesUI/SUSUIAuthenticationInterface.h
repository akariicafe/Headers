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

- (id)initWithKeybag:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)keybagInterface:(id)a0 passcodeLockedStateDidChange:(BOOL)a1;
- (unsigned long long)_currentFailedAttemptsCount;
- (void)_incrementFailedAttemptsCount;
- (void)_setPasscodeLocked:(BOOL)a0;
- (BOOL)attemptAuthentication:(id)a0 outBlocked:(BOOL *)a1;
- (void)resetAttempts;

@end
