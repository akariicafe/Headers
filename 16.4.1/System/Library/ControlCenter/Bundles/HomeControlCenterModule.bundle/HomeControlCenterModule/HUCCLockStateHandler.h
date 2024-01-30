@class NSString;
@protocol HUCCLockStateHandlerDelegate;

@interface HUCCLockStateHandler : NSObject <HFHomeManagerObserver>

@property (nonatomic) int keybagLockStatusNotifyToken;
@property (weak, nonatomic) id<HUCCLockStateHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDeviceUnlocked;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isAccessAllowedForCurrentLockState;
- (void)_registerKeybagLockStatusNotifications;
- (void)_unregisterKeybagLockStatusNotifications;
- (void)_updateAccessAllowedForLockState;

@end
