@protocol MPVolumeControllerDataSource;

@interface MPVolumeHardwareButtonController : NSObject {
    double _pendingVolumeChange;
    BOOL _debounceVolumeRepeat;
    BOOL _didRegisterForButtonNotifications;
}

@property (class, readonly, nonatomic) MPVolumeHardwareButtonController *sharedController;

@property (retain, nonatomic) id<MPVolumeControllerDataSource> activeDataSource;

- (void)cancelVolumeEvent;
- (void)_applicationWillResignActiveNotification;
- (double)_calculateButtonRepeatDelay;
- (void)_applicationDidBecomeActiveNotification;
- (void)handleVolumeButtonWithType:(long long)a0 down:(BOOL)a1;
- (void)_volumeUpButtonTouchDown:(id)a0;
- (void)_unregisterForButtonNotificationsIfNeeded;
- (void)increaseVolume;
- (void)_changeVolumeBy:(double)a0;
- (void).cxx_destruct;
- (void)handleVolumeDownButton;
- (void)_volumeDownButtonTouchUp:(id)a0;
- (id)_init;
- (void)decreaseVolume;
- (void)_commitVolumeChange;
- (void)_registerForButtonNotificationsIfNeeded;
- (void)handleVolumeUpButton;
- (void)_volumeDownButtonTouchDown:(id)a0;
- (void)_volumeUpButtonTouchUp:(id)a0;

@end
