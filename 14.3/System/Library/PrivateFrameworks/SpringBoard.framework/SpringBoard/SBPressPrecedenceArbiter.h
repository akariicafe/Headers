@class NSArray;

@interface SBPressPrecedenceArbiter : NSObject {
    unsigned long long _volumeAndLockButtonPriority;
    long long _homeButtonType;
    BOOL _isMusicPlayingSomewhere;
}

@property (retain, nonatomic) NSArray *hardwareButtons;

- (void).cxx_destruct;
- (void)_updateButtonPrioritiesForNotification:(id)a0;
- (id)initWithHomeButtonType:(long long)a0;
- (void)_applyButtonPriority:(unsigned long long)a0;
- (unsigned long long)_currentButtonPriority;
- (void)_updateButtonPrioritiesForClientIsPlayingNotification:(id)a0;
- (BOOL)_shouldArbitrateLockAndVolumeHardwareButtonPriorities;
- (void)_updateButtonPriority;
- (void)_initializeButtonPriorities;

@end
