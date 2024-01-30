@class NSString, VTGestureMonitor, VTRemoteDarwinHIDEventNotifier, VTBuiltInRTModel, VTCoreSpeechKeepAliveHandler, NSObject, VTXPCServiceServer, VTPolicy, VTPhraseSpotter;
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
    VTRemoteDarwinHIDEventNotifier *_remoteDarwinHIDEventNotifier;
}

@property (retain, nonatomic) VTCoreSpeechKeepAliveHandler *coreSpeechKeepAliveHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_serviceClient;
+ (void)requestPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
+ (void)notifyVoiceTrigger;
+ (BOOL)isLastTriggerForced;
+ (void)notifyVoiceTriggeredSiriSessionCancelled:(id)a0;
+ (void)notifyVoiceTriggeredSiriSessionCancelled;
+ (long long)getVoiceTriggerCount;
+ (id)firstChanceVTEventInfo;
+ (void)clearVoiceTriggerCount;
+ (id)firstChanceTriggeredDate;
+ (void)requestForcedTriggerEvent;
+ (id)firstChanceAudioBuffer;
+ (BOOL)iPhoneShouldStartVoiceTriggerInCoreSpeech;
+ (id)requestCurrentVoiceTriggerAssetDictionary;
+ (void)setCurrentBuiltInRTModelDictionary:(id)a0;
+ (BOOL)isLastTriggerSecondChanceTriggered;
+ (void)requestForcedSecondChance;
+ (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)a0;
+ (void)requestRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
+ (void)requestVoiceTriggerEnabled:(BOOL)a0 forReason:(id)a1;
+ (void)requestAudioCapture:(double)a0;
+ (id)requestCurrentBuiltInRTModelDictionary;

- (id)initWithProperty:(id)a0 callbackWithMessage:(id /* block */)a1;
- (id)getModel;
- (id)getPhraseSpotter;
- (void)gestureMonitorDidReceiveWakeGesture:(id)a0;
- (void)_notifyStateTransitionToState:(long long)a0 withStartTimestamp:(unsigned long long)a1;
- (void)_powerlog:(id)a0;
- (id)initWithProperty:(id)a0 callbackWithMessageAndTimestamp:(id /* block */)a1;
- (void)_stateTransitionDidOccur:(BOOL)a0 fromCallback:(BOOL)a1;
- (void)_initializeXPCService;
- (void).cxx_destruct;
- (void)VTFirstUnlockMonitor:(id)a0 didReceiveFirstUnlock:(BOOL)a1;
- (void)gestureMonitorDidReceiveSleepGesture:(id)a0;
- (id)initWithProperty:(id)a0 phraseSpotter:(id)a1 enablePolicy:(id)a2 callbackWithMessageAndTimestamp:(id /* block */)a3;

@end
