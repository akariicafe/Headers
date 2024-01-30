@class AVAudioPlayer, NSString, NSDate, PCSimpleTimer, AXTapticChimeAsset;

@interface AXTapticChimesScheduler : NSObject <AVAudioPlayerDelegate> {
    NSString *_pcServiceIdentifier;
    PCSimpleTimer *_chimeTimer;
    AVAudioPlayer *_audioPlayer;
    NSString *_previousAudioSessionCategory;
    AXTapticChimeAsset *_currentChimeAsset;
    unsigned int _audioPlaybackPowerAssertionID;
    NSDate *_lastExpectedWakeTime;
    NSDate *_lastActualWakeTime;
    NSDate *_lastExpectedChimeTime;
    NSDate *_lastActualChimeTime;
    float _lastMediaVolume;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initializeIfNeeded;

- (id)_currentDate;
- (void)_registerForNotifications;
- (void).cxx_destruct;
- (void)dealloc;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (id)_init;
- (void)_unregisterForNotifications;
- (BOOL)processIsAllowedToScheduleChimes;
- (void)_tapticChimesStateDidChange:(BOOL)a0;
- (void)_scheduleChimeTimer;
- (BOOL)canPlayScheduledTapticChime;
- (void)_previewChimes;
- (void)_clearChimeTimer;
- (BOOL)canPlayTapticChime;
- (BOOL)canScheduleTapticChimes;
- (void)_previewChimesForStartDate:(id)a0 chimeDate:(id)a1 frequency:(long long)a2 soundType:(long long)a3;
- (id)nextChimeAssetForStartDate:(id)a0 frequency:(long long)a1 soundType:(long long)a2 timeIntervalUntilChime:(double *)a3;
- (BOOL)_outputTapticChime:(id)a0 atDate:(id)a1;
- (void)_releasePowerAssertionIfPossible:(unsigned int)a0;
- (void)_denormalizeVolumeIfNecessary;
- (double)_preWakeTimeInterval;
- (double)_prePlayAudioTimeInterval;
- (void)_chimeWakeTimerFired:(id)a0;
- (unsigned int)_createPowerAssertionWithName:(id)a0 timeout:(double)a1;
- (void)_normalizeVolumeIfNecessary;
- (void)_chimeDidFinishPlaying;
- (BOOL)processIsAllowedToInterfaceWithNanoMediaRemote;

@end
