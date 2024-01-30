@class SBSStatusBarStyleOverridesAssertion, AVAudioSession, AXDispatchTimer;
@protocol AXHALiveListenDelegate;

@interface AXHALiveListenController : NSObject {
    SBSStatusBarStyleOverridesAssertion *_llStatusBarAssertion;
    float _noise;
    float _signal;
    struct OpaqueExtAudioFile { } *_debugAudioFile;
}

@property (nonatomic) BOOL didInitializeAudioUnit;
@property (nonatomic) BOOL exportsLiveListenToFile;
@property (nonatomic) BOOL waitingForAccessoryUpdate;
@property (retain, nonatomic) AXDispatchTimer *accessoryUpdateTimer;
@property (retain, nonatomic) AVAudioSession *session;
@property (weak, nonatomic) id<AXHALiveListenDelegate> delegate;
@property (readonly, nonatomic) struct OpaqueAudioComponentInstance { } *rioUnit;
@property (readonly, nonatomic) struct OpaqueAudioComponentInstance { } *mixerUnit;
@property (nonatomic) BOOL isListening;

- (void)dealloc;
- (void)mediaServicesWereReset:(id)a0;
- (id)init;
- (float)audioLevel;
- (void).cxx_destruct;
- (void)audioRouteDidChange:(id)a0;
- (void)audioSessionWasInterrupted:(id)a0;
- (struct OpaqueExtAudioFile { } *)debugAudioFile;
- (BOOL)startListeningWithError:(id *)a0;
- (BOOL)stopListeningWithError:(id *)a0;

@end
