@class NSUUID, NSHashTable, CSAudioInjectionEngine, CSAudioInjectionDevice, NSString, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CSAudioInjectionProvider : CSAudioRecorder <CSAudioInjectionEngineDelegate>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSMutableArray *connectedDevices;
@property (retain, nonatomic) CSAudioInjectionDevice *builtInDevice;
@property (retain, nonatomic) CSAudioInjectionDevice *bundleTvRemote;
@property (retain, nonatomic) CSAudioInjectionEngine *builtInAudioInjectionEngine;
@property (retain, nonatomic) NSMutableDictionary *audioInjectionEngines;
@property (nonatomic) unsigned long long latestPluginStreamId;
@property (nonatomic) float didStartDelayInSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultInjectionProvider;
+ (void)createSharedAudioSession;

- (BOOL)playAlertSoundForType:(long long)a0;
- (void)registerObserver:(id)a0;
- (void)disconnectDevice:(id)a0;
- (id)init;
- (void)setMeteringEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)duckOthersOption;
- (void)stop;
- (unsigned long long)setContext:(id)a0 error:(id *)a1;
- (id)metrics;
- (id)voiceTriggerInfo;
- (float)peakPowerForChannel:(unsigned long long)a0;
- (float)averagePowerForChannel:(unsigned long long)a0;
- (void)unregisterObserver:(id)a0;
- (unsigned long long)alertStartTime;
- (void)updateMeters;
- (void)setDuckOthersOption:(BOOL)a0;
- (void)start;
- (BOOL)setAlertSoundFromURL:(id)a0 forType:(long long)a1;
- (void)enableMiniDucking:(BOOL)a0;
- (id)playbackRoute;
- (void)connectDevice:(id)a0;
- (void)audioEngineDidStartRecord:(id)a0 audioStreamHandleId:(unsigned long long)a1 successfully:(BOOL)a2 error:(id)a3;
- (void)audioEngineDidStopRecord:(id)a0 audioStreamHandleId:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)audioEngineBufferAvailable:(id)a0 audioStreamHandleId:(unsigned long long)a1 buffer:(id)a2 remoteVAD:(id)a3 atTime:(unsigned long long)a4;
- (void)audioEngineAudioChunkForTvAvailable:(id)a0 audioChunk:(id)a1;
- (void)_createSpeechDetectionVADIfNeeded;
- (void)_connectPluginDevice:(id)a0;
- (void)_tearDownSpeechDetectionVADIfNeeded;
- (id)primaryInputDevice;
- (void)willDestroy;
- (void)setAudioServerCrashEventDelegate:(id)a0;
- (void)setAudioSessionEventDelegate:(id)a0;
- (BOOL)setCurrentContext:(id)a0 streamHandleId:(unsigned long long)a1 error:(id *)a2;
- (BOOL)prepareAudioStreamRecord:(id)a0 streamHandleId:(unsigned long long)a1 error:(id *)a2;
- (BOOL)startAudioStreamWithOption:(id)a0 streamHandleId:(unsigned long long)a1 error:(id *)a2;
- (BOOL)stopAudioStreamWithStreamHandleId:(unsigned long long)a0 error:(id *)a1;
- (BOOL)isRecordingWithStreamHandleId:(unsigned long long)a0;
- (id)recordRouteWithStreamHandleId:(unsigned long long)a0;
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)a0;
- (id)recordSettingsWithStreamHandleId:(unsigned long long)a0;
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)a0;
- (BOOL)isNarrowBandWithStreamHandleId:(unsigned long long)a0;
- (BOOL)prewarmAudioSessionWithStreamHandleId:(unsigned long long)a0 error:(id *)a1;
- (BOOL)activateAudioSessionWithReason:(unsigned long long)a0 streamHandleId:(unsigned long long)a1 error:(id *)a2;
- (BOOL)deactivateAudioSession:(unsigned long long)a0 streamHandleId:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setRecordMode:(long long)a0 streamHandleId:(unsigned long long)a1 error:(id *)a2;
- (BOOL)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)a0;
- (BOOL)isSessionCurrentlyActivated;
- (void)configureAlertBehavior:(id)a0 audioStreamHandleId:(unsigned long long)a1;

@end
