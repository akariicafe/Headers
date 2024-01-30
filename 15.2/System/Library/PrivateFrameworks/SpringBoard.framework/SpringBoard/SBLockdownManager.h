@class NSString, SBDismissOnlyAlertItem;

@interface SBLockdownManager : NSObject {
    int _state;
    BOOL _settingUpActivationState;
    SBDismissOnlyAlertItem *_activatingAlertItem;
    NSString *_unqiueDeviceIdentifier;
}

+ (id)sharedInstance;
+ (BOOL)_isDeveloperDevice;

- (void)_resetActivationState;
- (void).cxx_destruct;
- (id)init;
- (void)_setupActivationState;
- (int)lockdownState;
- (BOOL)brickedDevice;

@end
