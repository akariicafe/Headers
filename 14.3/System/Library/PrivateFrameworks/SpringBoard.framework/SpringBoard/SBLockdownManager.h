@class NSString, SBDismissOnlyAlertItem;

@interface SBLockdownManager : NSObject {
    int _state;
    BOOL _settingUpActivationState;
    SBDismissOnlyAlertItem *_activatingAlertItem;
    NSString *_unqiueDeviceIdentifier;
}

+ (id)sharedInstance;
+ (BOOL)_isDeveloperDevice;

- (id)init;
- (void).cxx_destruct;
- (int)lockdownState;
- (void)_resetActivationState;
- (void)_setupActivationState;
- (BOOL)brickedDevice;

@end
