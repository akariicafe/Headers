@class AVAudioSession;

@interface AVVCSessionManager : NSObject {
    BOOL mShouldDuckOthers;
    BOOL mIsMiniDuckingEnabled;
    BOOL mShouldEnableMiniDucking;
    BOOL mShouldDisableMiniDucking;
    BOOL mSessionNeedsVolumeControl;
    BOOL mSessionNeedsRoutingControl;
    BOOL mSessionOutputIsWirelessSplitter;
    BOOL mIsOtherAudioPlaying;
    BOOL mRouteHasDoAPSupport;
    BOOL mOutputSupportsSWVolume;
    BOOL mDeviceIsIOSAccessory;
    BOOL mDeviceIsOlderWatch;
    unsigned int mSessionActivationOptions;
    long long mPreviousActivationMode;
}

@property (retain, nonatomic) AVAudioSession *audioSession;
@property (nonatomic) int sessionState;
@property (readonly, nonatomic) BOOL isPrimary;
@property (nonatomic) BOOL clientRequestsRecording;
@property (readonly, nonatomic) double inputLatency;
@property (readonly, nonatomic) double outputLatency;

- (id)initWithSession:(id)a0;
- (id)currentRoute;
- (BOOL)setActive:(BOOL)a0 withOptions:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setPreferredSampleRate:(double)a0 error:(id *)a1;
- (long long)inputNumberOfChannels;
- (BOOL)setCategory:(id)a0 mode:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)setRecordingFromRemoteInput:(BOOL)a0 error:(id *)a1;
- (BOOL)setAudioHardwareControlFlags:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setDuckingFadeOutDuration:(id)a0 fadeInDuration:(id)a1 error:(id *)a2;
- (double)speechDetectionDeviceSampleRate;
- (BOOL)setIAmTheAssistant:(BOOL)a0 error:(id *)a1;
- (BOOL)clearInputPreferences:(id *)a0;
- (long long)reporterID;
- (unsigned long long)siriInputSource;
- (BOOL)setActivationContext:(id)a0 error:(id *)a1;
- (BOOL)setCategory:(id)a0 mode:(id)a1 routeSharingPolicy:(unsigned long long)a2 options:(unsigned long long)a3 error:(id *)a4;
- (id)siriRemoteInputIdentifier;
- (void)dealloc;
- (int)enableSmartRoutingConsideration:(BOOL)a0;
- (void)removeSessionNotifications:(id)a0;
- (int)setupOneTimeSessionSettingsForClient:(long long)a0;
- (int)setSessionActivationContext:(id)a0;
- (void)shouldEnableMiniDucking:(BOOL)a0 withOptions:(unsigned long long)a1;
- (BOOL)isMiniDuckingEnabled;
- (void)getHypotheticalRouteAndUpdateStates;
- (int)setSessionCategoryModeOptionsForActivationMode:(long long)a0 withOptions:(unsigned long long)a1;
- (int)setSessionAudioHWControlFlagsForActivationMode:(long long)a0 withOptions:(unsigned long long)a1;
- (int)setSessionSampleRateForActivationMode:(long long)a0;
- (int)setSessionBufferSize:(int)a0;
- (void)changeDuckOthersOption:(BOOL)a0;
- (BOOL)setDuckOthers:(id)a0 mixWithOthers:(id)a1 error:(id *)a2;
- (BOOL)isSessionOutputInWirelessSplitterMode;
- (unsigned int)getSessionActivationOptions;
- (void)setSessionActivationOptions:(unsigned int)a0;
- (BOOL)isAirplayOneOfTheOutputRoutes:(id)a0;
- (double)getInputLatency;
- (double)getOutputLatency;
- (BOOL)isSessionInSiriCategoryModeAndOptions:(unsigned int)a0;
- (BOOL)isSessionInSiriCategory;
- (id)sessionCurrentOutputRoutes;
- (id)sessionCurrentInputRoutes;
- (BOOL)getSiriInputSource:(unsigned long long *)a0 withIdentifier:(id *)a1;
- (unsigned int)getOpaqueSessionID;
- (id)getActiveSessionDisplayIDsAsString;
- (void)setupSessionNotifications:(id)a0;

@end
