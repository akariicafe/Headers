@class CSPhoneCallStateMonitor, CSOtherAppRecordingStateMonitor, CSSpeechManager, NSObject, CSOSTransaction, CSAttSiriStateMonitor, NSMutableArray, CSAudioStream, CSSiriClientBehaviorMonitor, CSAudioProvider, NSString, CSKeywordAnalyzerNDAPI, CSVoiceTriggerSecondPass, CSOpportuneSpeakEventMonitor, CSVoiceTriggerSecondChanceContext, CSVoiceTriggerEnabledMonitor, CSAsset;
@protocol OS_dispatch_queue, OS_dispatch_group, CSVoiceTriggerDelegate;

@interface CSVoiceTriggerFirstPassHearstAP : NSObject <CSAudioStreamProvidingDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSSiriClientBehaviorMonitorDelegate, CSAttSiriStateMonitorDelegate, CSOpportuneSpeakEventMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzerNDAPI;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *recordingWillStartGroup;
@property (nonatomic) BOOL isAPHearstFirstPassEnabled;
@property (nonatomic) float keywordThreshold;
@property (retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;
@property (retain, nonatomic) CSOSTransaction *secondPassTransaction;
@property (nonatomic) BOOL isSiriClientListening;
@property (nonatomic) BOOL isSecondPassRunning;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) CSAudioProvider *audioProvider;
@property (retain, nonatomic) NSString *opportuneSpeakAudioProviderUUID;
@property (retain, nonatomic) NSMutableArray *audioStreamHoldings;
@property (nonatomic) BOOL isVoiceTriggerEnabled;
@property (nonatomic) unsigned long long attSiriState;
@property (retain, nonatomic) CSVoiceTriggerEnabledMonitor *voiceTriggerEnabledMonitor;
@property (retain, nonatomic) CSSiriClientBehaviorMonitor *siriClientBehaviorMonitor;
@property (retain, nonatomic) CSAttSiriStateMonitor *attSiriStateMonitor;
@property (retain, nonatomic) CSSpeechManager *speechManager;
@property (retain, nonatomic) CSOpportuneSpeakEventMonitor *opportuneSpeakEventMonitor;
@property (retain, nonatomic) CSPhoneCallStateMonitor *phoneCallStateMonitor;
@property (retain, nonatomic) CSOtherAppRecordingStateMonitor *otherAppRecordingStateMonitor;
@property (retain, nonatomic) CSVoiceTriggerSecondChanceContext *secondChanceContext;
@property (weak, nonatomic) id<CSVoiceTriggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset;
- (void)CSVoiceTriggerEnabledMonitor:(id)a0 didReceiveEnabled:(BOOL)a1;
- (void)attSiriStateMonitor:(id)a0 didRecieveAttSiriStateChange:(unsigned long long)a1;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4;
- (void)setAsset:(id)a0;
- (void)audioStreamProvider:(id)a0 audioChunkForTVAvailable:(id)a1;
- (void)audioStreamProvider:(id)a0 audioBufferAvailable:(id)a1;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;
- (void)_addAudioStreamHold:(id)a0;
- (void)_handleSecondPassResult:(id)a0 deviceId:(id)a1 error:(id)a2;
- (void)opportuneSpeakEventMonitor:(id)a0 didStreamStateChanged:(BOOL)a1;
- (void)_setAsset:(id)a0;
- (void)_stopListening;
- (void)_cancelLastAudioStreamHold;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (id)init;
- (void)start;
- (void)_keywordAnalyzerNDAPI:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)audioStreamProvider:(id)a0 didStopStreamUnexpectly:(long long)a1;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)_createSecondPass;
- (BOOL)_shouldHearstAPModeEnabled;
- (BOOL)_shouldProcessAudio;
- (void)_startListenWithAudioProviderUUID:(id)a0 completion:(id /* block */)a1;
- (void)_teardownSecondPass;
- (void)_transitHearstAPEnable:(BOOL)a0;
- (id)initWithSpeechManager:(id)a0 voiceTriggerEnabledMonitor:(id)a1 siriClientBehaviorMonitor:(id)a2 opportuneSpeakEventMonitor:(id)a3 phoneCallStateMonitor:(id)a4 otherAppRecordingStateMonitor:(id)a5;
- (void)shouldProcessAudio:(id /* block */)a0;

@end
