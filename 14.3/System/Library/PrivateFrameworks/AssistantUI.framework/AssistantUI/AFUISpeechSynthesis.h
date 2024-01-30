@class AFVoiceInfo, NSString, VSSpeechSynthesizer, NSMutableDictionary, AFUIPowerLevelListener, NSMutableArray, NSObject, AFQueue, AFSiriClientStateManager;
@protocol OS_dispatch_group, AFUISpeechSynthesisLocalDelegate, OS_dispatch_queue, AFUISpeechSynthesisDelegate;

@interface AFUISpeechSynthesis : NSObject <AFQueueDelegate, AFUIPowerLevelListenerDelegate, AFUISpeechSynthesisElementDelegate, VSSpeechSynthesizerDelegate, AFUISpeechSynthesis> {
    VSSpeechSynthesizer *_synthesizer;
    AFSiriClientStateManager *_siriClientStateManager;
    unsigned int _sessionID;
    AFVoiceInfo *_outputVoice;
    NSMutableDictionary *_availableVoicesForLanguage;
    NSObject<OS_dispatch_queue> *_processingElementsQueue;
    NSObject<OS_dispatch_queue> *_pendingElementsQueue;
    NSObject<OS_dispatch_group> *_pendingElementsGroup;
    AFUIPowerLevelListener *_powerLevelListener;
}

@property (readonly, nonatomic, getter=_elementQueue) AFQueue *elementQueue;
@property (readonly, nonatomic, getter=_activeElements) NSMutableArray *activeElements;
@property (readonly, nonatomic, getter=_delayedElements) NSMutableDictionary *delayedElements;
@property (weak, nonatomic) id<AFUISpeechSynthesisLocalDelegate> localDelegate;
@property (retain, nonatomic) id<AFUISpeechSynthesisDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)setAudioSessionID:(unsigned int)a0;
- (void)speechSynthesizer:(id)a0 didStartSpeakingRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 successfully:(BOOL)a2 phonemesSpoken:(id)a3 withError:(id)a4;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 withInstrumentMetrics:(id)a2;
- (void)speechSynthesizer:(id)a0 didStartPresynthesizedAudioRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 didStopPresynthesizedAudioRequest:(id)a1 atEnd:(BOOL)a2 error:(id)a3;
- (void)speechSynthesizer:(id)a0 didFinishPresynthesizedAudioRequest:(id)a1 withInstrumentMetrics:(id)a2 error:(id)a3;
- (void)setOutputVoice:(id)a0;
- (void)queue:(id)a0 didEnqueueObjects:(id)a1;
- (BOOL)isSpeaking;
- (id)_synthesizer;
- (void)invalidate;
- (void)enqueueText:(id)a0 identifier:(id)a1 language:(id)a2 gender:(id)a3 isPhonetic:(BOOL)a4 provisionally:(BOOL)a5 eligibleAfterDuration:(double)a6 delayed:(BOOL)a7 canUseServerTTS:(BOOL)a8 preparationIdentifier:(id)a9 completion:(id /* block */)a10 animationIdentifier:(id)a11 analyticsContext:(id)a12 speakableContextInfo:(id)a13;
- (void)enqueueText:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)enqueueAudioData:(id)a0 identifier:(id)a1 provisionally:(BOOL)a2 eligibleAfterDuration:(double)a3 completion:(id /* block */)a4;
- (void)enqueuePhaticWithCompletion:(id /* block */)a0;
- (void)processDelayedItem:(id)a0;
- (void)skipCurrentSynthesis;
- (void)prewarmIfNeeded;
- (void)speechSynthesisElementSynthesisEligibilityDidChange:(id)a0;
- (BOOL)_isSynthesisQueueEmpty;
- (void)_cancelByCancellingActiveElementsOnly:(BOOL)a0;
- (void)invalidateOnMainThread;
- (id)_siriClientStateManager;
- (void)_processElementQueue;
- (id)_activeElementWithPresynthesizedAudioRequest:(id)a0;
- (id)_activeElementWithSpeechRequest:(id)a0;
- (void)_enqueueText:(id)a0 audioData:(id)a1 identifier:(id)a2 language:(id)a3 gender:(id)a4 isPhonetic:(BOOL)a5 provisionally:(BOOL)a6 eligibleAfterDuration:(double)a7 delayed:(BOOL)a8 canUseServerTTS:(BOOL)a9 preparationIdentifier:(id)a10 shouldCache:(BOOL)a11 synthesizesWhileRecording:(BOOL)a12 completion:(id /* block */)a13 animationIdentifier:(id)a14 analyticsContext:(id)a15 speakableContextInfo:(id)a16;
- (void)_findVoiceForLanguage:(id)a0 gender:(id)a1 completion:(id /* block */)a2;
- (void)_processProvisionalElements;
- (void)_handleAudioData:(id)a0 completion:(id /* block */)a1;
- (void)_handleText:(id)a0 completion:(id /* block */)a1;
- (id)_filterVoices:(id)a0 gender:(id)a1;
- (long long)_genderForString:(id)a0;
- (void)powerLevelListener:(id)a0 powerLevelDidUpdateTo:(float)a1;
- (void)isSynthesisQueueEmpty:(id /* block */)a0;
- (void)_setSynthesizer:(id)a0;
- (void)_setSiriClientStateManager:(id)a0;

@end
