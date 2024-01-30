@class NSHashTable, NSString, CSAudioTimeConverter, CSContinuousVoiceTriggerConfig, CSKeywordAnalyzerNDAPI, NSObject, CSAsset, CSSpeechManager, CSAudioStream, CSPolicy;
@protocol OS_dispatch_queue, CSAudioStreamProviding;

@interface CSSelfTriggerDetector : NSObject <CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate, CSAudioServerCrashMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (weak, nonatomic) CSSpeechManager *speechManager;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzer;
@property (nonatomic) unsigned long long outputAudioChannel;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (retain, nonatomic) CSPolicy *enablePolicy;
@property (nonatomic) BOOL isSiriClientListening;
@property (nonatomic) BOOL selfTriggerEnabled;
@property (nonatomic) BOOL isListenPollingStarting;
@property (retain, nonatomic) NSString *audioProviderUUID;
@property (retain, nonatomic) CSAudioTimeConverter *audioTimeConverter;
@property (retain, nonatomic) CSContinuousVoiceTriggerConfig *selfTriggerConfig;
@property (weak, nonatomic) id<CSAudioStreamProviding> audioTapProvider;
@property (nonatomic) unsigned long long audioSourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset;
- (void)_startListenWithCompletion:(id /* block */)a0;
- (BOOL)_shouldReuseBuiltInAudioProvider;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4;
- (void)setAsset:(id)a0;
- (void)audioStreamProvider:(id)a0 audioChunkForTVAvailable:(id)a1;
- (void)audioStreamProvider:(id)a0 audioBufferAvailable:(id)a1;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;
- (void)registerObserver:(id)a0;
- (void)_setAsset:(id)a0;
- (void)_stopListening;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)unregisterObserver:(id)a0;
- (void)start;
- (void)_keywordAnalyzerNDAPI:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2;
- (void)_startListenPollingWithInterval:(double)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)audioStreamProvider:(id)a0 didStopStreamUnexpectly:(long long)a1;
- (void)reset;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)_handleEnablePolicyEvent:(BOOL)a0;
- (void)_startListenPolling;
- (id)initWithTargetQueue:(id)a0 audioTapProvider:(id)a1 audioSourceType:(unsigned long long)a2;

@end
