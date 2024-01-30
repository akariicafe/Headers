@class NSString, SBDismissOnlyAlertItem;

@interface SBLockdownManager : NSObject {
    int _state;
    BOOL _settingUpActivationState;
    SBDismissOnlyAlertItem *_activatingAlertItem;
    NSString *_unqiueDeviceIdentifier;
}

+ (id)sharedInstance;

- (int)lockdownState;
- (void)_resetActivationState;
- (void)_setupActivationState;
- (id)init;
- (void).cxx_destruct;
- (BOOL)brickedDevice;

@end
