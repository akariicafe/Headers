@class CSAudioProvider, NSString, NSMutableArray, CSKeywordAnalyzerNDAPI, NSObject, CSAsset, CSVoiceTriggerSecondPass, CSAudioStream, CSOSTransaction;
@protocol OS_dispatch_queue, OS_dispatch_group, CSVoiceTriggerDelegate;

@interface CSVoiceTriggerFirstPassHearstAP : NSObject <CSAudioStreamProvidingDelegate, CSKeywordAnalyzerNDAPIScoreDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSSiriClientBehaviorMonitorDelegate, CSOpportuneSpeakEventMonitorDelegate>

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
@property (nonatomic) unsigned long long secondChanceHotTillMachTime;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) CSAudioProvider *audioProvider;
@property (retain, nonatomic) NSString *opportuneSpeakAudioProviderUUID;
@property (retain, nonatomic) NSMutableArray *audioStreamHoldings;
@property (nonatomic) BOOL isVoiceTriggerEnabled;
@property (weak, nonatomic) id<CSVoiceTriggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset;
- (id)init;
- (void)setAsset:(id)a0;
- (void)_cancelLastAudioStreamHold;
- (void).cxx_destruct;
- (void)audioStreamProvider:(id)a0 audioChunkForTVAvailable:(id)a1;
- (void)_addAudioStreamHold:(id)a0;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1;
- (void)_setAsset:(id)a0;
- (void)audioStreamProvider:(id)a0 audioBufferAvailable:(id)a1;
- (void)audioStreamProvider:(id)a0 didStopStreamUnexpectly:(long long)a1;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)keywordAnalyzerNDAPI:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2;
- (void)CSVoiceTriggerEnabledMonitor:(id)a0 didReceiveEnabled:(BOOL)a1;
- (void)_stopListening;
- (void)start;
- (void)opportuneSpeakEventMonitor:(id)a0 didStreamStateChanged:(BOOL)a1;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)_handleSecondPassResult:(unsigned long long)a0 voiceTriggerInfo:(id)a1 deviceId:(id)a2 secondChanceCandidate:(BOOL)a3 error:(id)a4;
- (void)_teardownSecondPass;
- (void)_createSecondPass;
- (void)_startListenWithAudioProviderUUID:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shouldHearstAPModeEnabled;
- (void)_transitHearstAPEnable:(BOOL)a0;

@end
