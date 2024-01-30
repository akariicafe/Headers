@class NSString, UIAlertController, SFWirelessSettingsController;

@interface SFAirDropDiscoveryController : NSObject <UIActionSheetDelegate, SFWirelessSettingsControllerDelegate> {
    BOOL _isVisible;
    BOOL _isLegacyDevice;
    BOOL _isLegacyModeEnabled;
    BOOL _isLegacyModeSettable;
    struct __SFOperation { } *_controller;
    UIAlertController *_alertController;
    SFWirelessSettingsController *_settingsController;
    long long _discoverableMode;
}

@property (readonly, getter=isVisible) BOOL visible;
@property long long discoverableMode;
@property (readonly) BOOL isTimeLimitedEveryoneMode;
@property (readonly, getter=isLegacyDevice) BOOL legacyDevice;
@property (getter=isLegacyModeEnabled) BOOL legacyModeEnabled;
@property (readonly, getter=isLegacyModeSettable) BOOL legacyModeSettable;
@property (weak) id delegate;
@property (weak) id alertControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)handleOperationCallback:(struct __SFOperation { } *)a0 event:(long long)a1 withResults:(id)a2;
- (void)wirelessSettingsDidChange:(id)a0;
- (id)discoverableModeAlertController;
- (id)discoverableModeToString:(long long)a0;
- (long long)operationDiscoverableModeToInteger:(id)a0;
- (void)updateAlertControllerTitle;

@end
