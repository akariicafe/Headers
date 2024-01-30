@protocol MPVolumeControllerDataSource;

@interface MPVolumeHardwareButtonController : NSObject {
    double _pendingVolumeChange;
    BOOL _debounceVolumeRepeat;
    BOOL _didRegisterForButtonNotifications;
}

@property (class, readonly, nonatomic) MPVolumeHardwareButtonController *sharedController;

@property (retain, nonatomic) id<MPVolumeControllerDataSource> activeDataSource;

- (void).cxx_destruct;
- (void)_volumeDownButtonTouchDown:(id)a0;
- (void)_applicationDidBecomeActiveNotification;
- (void)_commitVolumeChange;
- (void)cancelVolumeEvent;
- (void)_unregisterForButtonNotificationsIfNeeded;
- (void)_changeVolumeBy:(double)a0;
- (void)_volumeDownButtonTouchUp:(id)a0;
- (void)handleVolumeUpButton;
- (void)_applicationWillResignActiveNotification;
- (void)_volumeUpButtonTouchDown:(id)a0;
- (void)_registerForButtonNotificationsIfNeeded;
- (void)handleVolumeButtonWithType:(long long)a0 down:(BOOL)a1;
- (id)_init;
- (double)_calculateButtonRepeatDelay;
- (void)decreaseVolume;
- (void)_volumeUpButtonTouchUp:(id)a0;
- (void)handleVolumeDownButton;
- (void)increaseVolume;

@end
