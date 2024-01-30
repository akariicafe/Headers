@class NSString, VTGestureMonitor, VTBuiltInRTModel, VTCoreSpeechKeepAliveHandler, NSObject, VTXPCServiceServer, VTPolicy, VTPhraseSpotter;
@protocol OS_dispatch_queue;

@interface VTStateManager : NSObject <VTFirstUnlockMonitorDelegate, VTGestureMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    VTPhraseSpotter *_phraseSpotter;
    VTBuiltInRTModel *_builtInRTModel;
    id /* block */ _callbackWithMessageAndTimestamp;
    VTPolicy *_enablePolicy;
    VTXPCServiceServer *_xpcServer;
    BOOL _voiceTriggerIsEnabled;
    BOOL _voiceTriggerIsEnabledOnCoreSpeechDaemon;
    BOOL _rtModelDownloaded;
    VTGestureMonitor *_gestureMonitor;
    unsigned long long _wakeGestureHostTime;
}

@property (retain, nonatomic) VTCoreSpeechKeepAliveHandler *coreSpeechKeepAliveHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)firstChanceTriggeredDate;
+ (BOOL)isLastTriggerForced;
+ (BOOL)iPhoneShouldStartVoiceTriggerInCoreSpeech;
+ (void)setCurrentBuiltInRTModelDictionary:(id)a0;
+ (id)_serviceClient;
+ (id)firstChanceAudioBuffer;
+ (void)clearVoiceTriggerCount;
+ (id)requestCurrentVoiceTriggerAssetDictionary;
+ (void)requestForcedSecondChance;
+ (void)notifyVoiceTrigger;
+ (void)requestAudioCapture:(double)a0;
+ (void)requestForcedTriggerEvent;
+ (BOOL)isLastTriggerSecondChanceTriggered;
+ (void)requestVoiceTriggerEnabled:(BOOL)a0 forReason:(id)a1;
+ (long long)getVoiceTriggerCount;
+ (id)firstChanceVTEventInfo;
+ (void)notifyVoiceTriggeredSiriSessionCancelled;
+ (void)requestRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
+ (id)requestCurrentBuiltInRTModelDictionary;
+ (void)requestPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
+ (void)notifyVoiceTriggeredSiriSessionCancelled:(id)a0;
+ (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)a0;

- (void)gestureMonitorDidReceiveSleepGesture:(id)a0;
- (void).cxx_destruct;
- (void)_initializeXPCService;
- (id)getPhraseSpotter;
- (id)initWithProperty:(id)a0 phraseSpotter:(id)a1 enablePolicy:(id)a2 callbackWithMessageAndTimestamp:(id /* block */)a3;
- (id)getModel;
- (id)initWithProperty:(id)a0 callbackWithMessageAndTimestamp:(id /* block */)a1;
- (void)_stateTransitionDidOccur:(BOOL)a0 fromCallback:(BOOL)a1;
- (void)_notifyStateTransitionToState:(long long)a0 withStartTimestamp:(unsigned long long)a1;
- (void)VTFirstUnlockMonitor:(id)a0 didReceiveFirstUnlock:(BOOL)a1;
- (void)gestureMonitorDidReceiveWakeGesture:(id)a0;
- (id)initWithProperty:(id)a0 callbackWithMessage:(id /* block */)a1;
- (void)_powerlog:(id)a0;

@end
