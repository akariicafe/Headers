@class NSArray, NSString;

@interface SBPressPrecedenceArbiter : NSObject <SBAVSystemControllerCacheObserver> {
    unsigned long long _volumeAndLockButtonPriority;
    long long _homeButtonType;
    BOOL _isAudioPlayingSomewhere;
}

@property (retain, nonatomic) NSArray *hardwareButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateButtonPriority;
- (BOOL)_shouldArbitrateLockAndVolumeHardwareButtonPriorities;
- (unsigned long long)_currentButtonPriority;
- (id)initWithHomeButtonType:(long long)a0;
- (void).cxx_destruct;
- (void)_updateButtonPrioritiesForNotification:(id)a0;
- (void)_applyButtonPriority:(unsigned long long)a0;
- (void)cache:(id)a0 didUpdateAudioSessionPlaying:(BOOL)a1;

@end
