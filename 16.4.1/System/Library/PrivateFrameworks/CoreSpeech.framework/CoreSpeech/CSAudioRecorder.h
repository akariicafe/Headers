@class NSHashTable, NSString, CSRemoteRecordClient, NSMutableDictionary, NSMutableSet, NSObject, CSAudioFileReader, AVVoiceController, CSReusableBufferPool;
@protocol OS_dispatch_queue, CSAudioServerCrashEventProvidingDelegate, CSAudioSessionEventProvidingDelegate;

@interface CSAudioRecorder : NSObject <AVVoiceControllerRecordDelegate, CSAudioDecoderDelegate, CSAudioFileReaderDelegate, CSRemoteRecordClientDelegate, CSUserSessionActiveMonitorDelegate, CSAudioServerCrashEventProviding, CSAudioSessionEventProviding> {
    AVVoiceController *_voiceController;
    struct AudioBufferList { unsigned int mNumberBuffers; struct AudioBuffer { unsigned int mNumberChannels; unsigned int mDataByteSize; void *mData; } mBuffers[1]; } _interleavedABL;
    struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *_pNonInterleavedABL;
    CSRemoteRecordClient *_remoteRecordClient;
    NSMutableDictionary *_opusDecoders;
    CSAudioFileReader *_audioFileReader;
    unsigned long long _audioFilePathIndex;
    BOOL _waitingForDidStart;
    unsigned long long _pendingTwoShotVTToken;
    CSReusableBufferPool *_audioBufferPool;
    NSMutableDictionary *_hasSetAlertDictionary;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *voiceControllerCreationQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (weak, nonatomic) id<CSAudioServerCrashEventProvidingDelegate> crashEventDelegate;
@property (weak, nonatomic) id<CSAudioSessionEventProvidingDelegate> sessionEventDelegate;
@property (retain, nonatomic) NSMutableSet *remoteAccessoryStreamIdSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_convertDeactivateOption:(unsigned long long)a0;
+ (void)createSharedAudioSession;
+ (void)resetDuckSettings;

- (float)peakPowerForChannel:(unsigned long long)a0;
- (unsigned long long)alertStartTime;
- (void)updateMeters;
- (void)setMeteringEnabled:(BOOL)a0;
- (void)setAnnounceCallsEnabled:(BOOL)a0 withStreamHandleID:(unsigned long long)a1;
- (BOOL)setAlertSoundFromURL:(id)a0 forType:(long long)a1 force:(BOOL)a2;
- (void)audioDecoderDidDecodePackets:(id)a0 audioStreamHandleId:(unsigned long long)a1 buffer:(id)a2 remoteVAD:(id)a3 timestamp:(unsigned long long)a4 arrivalTimestampToAudioRecorder:(unsigned long long)a5 wasBuffered:(BOOL)a6 receivedNumChannels:(unsigned int)a7;
- (id)metrics;
- (void)registerObserver:(id)a0;
- (void)dealloc;
- (void)unregisterObserver:(id)a0;
- (id)playbackRoute;
- (void)enableMiniDucking:(BOOL)a0;
- (float)averagePowerForChannel:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)deactivateAudioSession:(unsigned long long)a0 error:(id *)a1;
- (void)voiceControllerAudioCallback:(id)a0 forStream:(unsigned long long)a1 buffer:(id)a2;
- (void)voiceControllerBeginRecordInterruption:(id)a0;
- (void)voiceControllerBeginRecordInterruption:(id)a0 withContext:(id)a1;
- (void)voiceControllerDidFinishAlertPlayback:(id)a0 ofType:(int)a1 error:(id)a2;
- (void)voiceControllerDidSetAudioSessionActive:(id)a0 isActivated:(BOOL)a1;
- (void)voiceControllerDidStartRecording:(id)a0 forStream:(unsigned long long)a1 successfully:(BOOL)a2 error:(id)a3;
- (void)voiceControllerDidStopRecording:(id)a0 forStream:(unsigned long long)a1 forReason:(long long)a2;
- (void)voiceControllerEncoderErrorDidOccur:(id)a0 error:(id)a1;
- (void)voiceControllerEndRecordInterruption:(id)a0;
- (void)voiceControllerMediaServicesWereLost:(id)a0;
- (void)voiceControllerMediaServicesWereReset:(id)a0;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(id)a0 toConfiguration:(int)a1;
- (void)voiceControllerStreamInvalidated:(id)a0 forStream:(unsigned long long)a1;
- (void)voiceControllerWillSetAudioSessionActive:(id)a0 willActivate:(BOOL)a1;
- (void)setContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)isNarrowBandWithStreamHandleId:(unsigned long long)a0;
- (BOOL)_audioIsFromRemoteAccessory:(unsigned long long)a0;
- (void)_audioRecorderDidStartRecordingSuccessfully:(BOOL)a0 streamHandleID:(unsigned long long)a1 error:(id)a2;
- (void)_audioRecorderDidStopRecordingForReason:(long long)a0 streamHandleID:(unsigned long long)a1;
- (id)_compensateChannelDataIfNeeded:(id)a0 receivedNumChannels:(unsigned int)a1;
- (void)_destroyVoiceController;
- (id)_fetchRemoteRecordClientWithDeviceId:(id)a0 streamHandleId:(unsigned long long)a1;
- (id)_getRecordSettingsWithRequest:(id)a0;
- (BOOL)_hasLocalPendingTwoShot;
- (BOOL)_isDarwinDeviceId:(id)a0;
- (void)_logResourceNotAvailableErrorIfNeeded:(id)a0;
- (BOOL)_needResetAudioInjectionIndex:(id)a0;
- (void)_processAudioBuffer:(id)a0 audioStreamHandleId:(unsigned long long)a1 arrivalTimestampToAudioRecorder:(unsigned long long)a2;
- (void)_processAudioChain:(id)a0 audioStreamHandleId:(unsigned long long)a1 remoteVAD:(id)a2 atTime:(unsigned long long)a3 arrivalTimestampToAudioRecorder:(unsigned long long)a4 numberOfChannels:(int)a5;
- (BOOL)_shouldInjectAudio;
- (BOOL)_shouldLogResourceNotAvailableError;
- (BOOL)_shouldUseRemoteBuiltInMic:(id)a0;
- (BOOL)_startAudioStreamForAudioInjectionWithAVVCContext:(id)a0;
- (void)_stopTrackingRemoteAccessoryStreamId:(unsigned long long)a0;
- (void)_trackRemoteAccessoryStreamIdIfNeeded:(id)a0;
- (id)_updateLanguageCodeForRemoteVTEIResult:(id)a0;
- (id)_voiceControllerWithError:(id *)a0;
- (BOOL)activateAudioSessionWithReason:(unsigned long long)a0 streamHandleId:(unsigned long long)a1 error:(id *)a2;
- (id)audioDeviceInfoWithStreamHandleId:(unsigned long long)a0 recordDeviceIndicator:(id)a1;
- (void)audioFileReaderBufferAvailable:(id)a0 buffer:(id)a1 atTime:(unsigned long long)a2;
- (void)audioFileReaderDidStartRecording:(id)a0 successfully:(BOOL)a1 error:(id)a2;
- (void)audioFileReaderDidStopRecording:(id)a0 forReason:(long long)a1;
- (void)configureAlertBehavior:(id)a0 audioStreamHandleId:(unsigned long long)a1;
- (BOOL)deactivateAudioSession:(unsigned long long)a0 streamHandleId:(unsigned long long)a1 error:(id *)a2;
- (void)enableSmartRoutingConsiderationForStream:(unsigned long long)a0 enable:(BOOL)a1;
- (id)initWithQueue:(id)a0 error:(id *)a1;
- (BOOL)isDuckingSupportedOnCurrentRouteWithStreamHandleID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)isRecordingWithRecordDeviceIndicator:(id)a0;
- (BOOL)isSessionCurrentlyActivated;
- (BOOL)playAlertSoundForType:(long long)a0 recordDevideIndicator:(id)a1;
- (BOOL)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)a0;
- (BOOL)prepareAudioStreamRecord:(id)a0 recordDeviceIndicator:(id)a1 error:(id *)a2;
- (BOOL)prewarmAudioSessionWithStreamHandleId:(unsigned long long)a0 error:(id *)a1;
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)a0 recordDeviceIndicator:(id)a1;
- (id)recordRouteWithRecordDeviceIndicator:(id)a0;
- (id)recordSettingsWithStreamHandleId:(unsigned long long)a0;
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)a0;
- (void)remoteRecordConnectionDisconnected:(id)a0;
- (void)remoteRecordDidStartRecordingWithStreamHandleId:(unsigned long long)a0 error:(id)a1;
- (void)remoteRecordDidStopRecordingWithWithStreamHandleId:(unsigned long long)a0 error:(id)a1;
- (void)remoteRecordLPCMBufferAvailable:(id)a0 streamHandleId:(unsigned long long)a1;
- (void)remoteRecordTwoShotDetectedAtTime:(double)a0;
- (void)setAudioServerCrashEventDelegate:(id)a0;
- (void)setAudioSessionEventDelegate:(id)a0;
- (BOOL)setCurrentContext:(id)a0 streamHandleId:(unsigned long long)a1 error:(id *)a2;
- (void)setDuckMixWithOthersForStream:(unsigned long long)a0 duckOthers:(BOOL)a1 duckToLevelInDB:(id)a2 mixWithOthers:(BOOL)a3;
- (BOOL)setRecordMode:(long long)a0 streamHandleId:(unsigned long long)a1 error:(id *)a2;
- (BOOL)startAudioStreamWithOption:(id)a0 recordDeviceIndicator:(id)a1 error:(id *)a2;
- (BOOL)stopAudioStreamWithRecordDeviceIndicator:(id)a0 error:(id *)a1;
- (void)userSessionActivateMonitor:(id)a0 didReceivedUserSessionActiveHasChanged:(BOOL)a1;
- (id)voiceTriggerInfoWithRecordDeviceIndicator:(id)a0;
- (void)willDestroy;

@end
