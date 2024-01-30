@class NSPointerArray, AVAudioSession, AVAudioEngine, NSObject;
@protocol OS_dispatch_queue;

@interface AXSDListenEngine : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_audioProcessingQueue;
    NSPointerArray *_delegates;
    long long _state;
}

@property (retain) AVAudioEngine *audioEngine;
@property (retain) AVAudioSession *audioSession;
@property (readonly) unsigned long long bufferSize;
@property (readonly) BOOL isListening;

+ (id)sharedInstance;
+ (id)_stringForState:(long long)a0;
+ (BOOL)_stateIsNotListening:(long long)a0;

- (void)_setState:(long long)a0;
- (void)_mediaServicesWereReset:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addListenDelegate:(id)a0;
- (void)removeListenDelegate:(id)a0;
- (void)_activateNotifications;
- (id)audioEngineInputNode;
- (BOOL)_notListeningForAnyReason;
- (void)_startIfPossibleAndNotify;
- (void)notifyListeningStartedWithError:(id)a0;
- (BOOL)_stopListeningAndTransitionToState:(long long)a0;
- (void)_setupAudioInputWithError:(id *)a0 shouldInterrupt:(BOOL)a1;
- (void)_handleBuffer:(id)a0 atTime:(id)a1;
- (void)_carPlayIsConnectedDidChange:(id)a0;
- (void)_handleAudioSessionInterruption:(id)a0;
- (void)_handleConfigurationChangeNotification:(id)a0;
- (void)_micDisabledUpdated;
- (void)_pipedInFileUpdated;
- (BOOL)_startListeningWithError:(id *)a0;
- (void)_handleInterruptionRequestingState:(long long)a0;
- (void)_restartSoundRecognitionIfNecesary;

@end
