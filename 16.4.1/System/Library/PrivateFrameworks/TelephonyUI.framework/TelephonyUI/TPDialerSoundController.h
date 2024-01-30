@interface TPDialerSoundController : NSObject {
    struct __CFSet { } *_inflightSounds;
    unsigned char _soundsActivated : 1;
}

@property unsigned long long incompleteSoundCount;

+ (void)_delayedDeactivate;

- (void)applicationSuspendedNotification:(id)a0;
- (void)setSoundsActivated:(BOOL)a0;
- (void)dealloc;
- (void)_stopAllSoundsForcingCallbacks:(BOOL)a0;
- (void)applicationResumedNotification:(id)a0;
- (void)stopSoundForDialerCharacter:(long long)a0;
- (void)soundCompletedPlaying:(unsigned int)a0;
- (id)init;
- (void)playSoundForDialerCharacter:(long long)a0;

@end
