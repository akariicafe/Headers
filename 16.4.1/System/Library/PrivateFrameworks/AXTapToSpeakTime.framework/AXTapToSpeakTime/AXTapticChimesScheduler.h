@class AVAudioPlayer, NSString, NSObject, NSDate, PCSimpleTimer, AXTapticChimeAsset;
@protocol OS_dispatch_queue;

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
    NSObject<OS_dispatch_queue> *_mediaQueue;
}

@property (nonatomic) float lastMediaVolume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initializeIfNeeded;

- (void)_registerForNotifications;
- (id)_init;
- (void)dealloc;
- (void)_unregisterForNotifications;
- (id)_currentDate;
- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)_chimeDidFinishPlaying;
- (void)_chimeWakeTimerFired:(id)a0;
- (void)_clearChimeTimer;
- (unsigned int)_createPowerAssertionWithName:(id)a0 timeout:(double)a1;
- (void)_denormalizeVolumeIfNecessary;
- (void)_normalizeVolumeIfNecessary;
- (BOOL)_outputTapticChime:(id)a0 atDate:(id)a1;
- (double)_prePlayAudioTimeInterval;
- (double)_preWakeTimeInterval;
- (void)_previewChimes;
- (void)_previewChimesForStartDate:(id)a0 chimeDate:(id)a1 frequency:(long long)a2 soundType:(long long)a3;
- (void)_releasePowerAssertionIfPossible:(unsigned int)a0;
- (void)_scheduleChimeTimer;
- (void)_tapticChimesStateDidChange:(BOOL)a0;
- (BOOL)canPlayScheduledTapticChime;
- (BOOL)canPlayTapticChime;
- (BOOL)canScheduleTapticChimes;
- (id)nextChimeAssetForStartDate:(id)a0 frequency:(long long)a1 soundType:(long long)a2 timeIntervalUntilChime:(double *)a3;
- (BOOL)processIsAllowedToInterfaceWithNanoMediaRemote;
- (BOOL)processIsAllowedToScheduleChimes;

@end
