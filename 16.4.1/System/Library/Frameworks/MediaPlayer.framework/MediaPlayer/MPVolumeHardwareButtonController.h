@protocol MPVolumeControllerDataSource;

@interface MPVolumeHardwareButtonController : NSObject {
    double _pendingVolumeChange;
    BOOL _debounceVolumeRepeat;
    BOOL _didRegisterForButtonNotifications;
}

@property (class, readonly, nonatomic) MPVolumeHardwareButtonController *sharedController;

@property (retain, nonatomic) id<MPVolumeControllerDataSource> activeDataSource;

- (void)increaseVolume;
- (void)_volumeUpButtonTouchUp:(id)a0;
- (void)_applicationWillResignActiveNotification;
- (void)_applicationDidBecomeActiveNotification;
- (id)_init;
- (void)decreaseVolume;
- (void)cancelVolumeEvent;
- (void)_volumeDownButtonTouchUp:(id)a0;
- (void)handleVolumeButtonWithType:(long long)a0 down:(BOOL)a1;
- (double)_calculateButtonRepeatDelay;
- (void)_commitVolumeChange;
- (void)handleVolumeDownButton;
- (void)_changeVolumeBy:(double)a0;
- (void)_registerForButtonNotificationsIfNeeded;
- (void)_volumeDownButtonTouchDown:(id)a0;
- (void)_unregisterForButtonNotificationsIfNeeded;
- (void)handleVolumeUpButton;
- (void)_volumeUpButtonTouchDown:(id)a0;
- (void).cxx_destruct;

@end
