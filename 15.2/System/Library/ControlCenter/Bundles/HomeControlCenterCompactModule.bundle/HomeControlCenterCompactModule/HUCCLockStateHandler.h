@class NSString;
@protocol HUCCLockStateHandlerDelegate;

@interface HUCCLockStateHandler : NSObject <HFHomeManagerObserver>

@property (nonatomic) int keybagLockStatusNotifyToken;
@property (weak, nonatomic) id<HUCCLockStateHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (BOOL)isDeviceUnlocked;
- (void).cxx_destruct;
- (void)homeManager:(id)a0 didUpdateAccessAllowedWhenLocked:(BOOL)a1;
- (void)dealloc;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)a0;
- (void)_unregisterKeybagLockStatusNotifications;
- (void)_registerKeybagLockStatusNotifications;
- (void)_updateAccessAllowedForLockState;
- (BOOL)_isAccessAllowedForCurrentLockState;
- (void)_updateRegistrationForLockStatusNotification;

@end
