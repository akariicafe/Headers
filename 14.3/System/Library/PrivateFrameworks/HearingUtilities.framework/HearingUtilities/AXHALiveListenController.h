@class SBSStatusBarStyleOverridesAssertion;
@protocol AXHALiveListenDelegate;

@interface AXHALiveListenController : NSObject {
    SBSStatusBarStyleOverridesAssertion *_llStatusBarAssertion;
    float _noise;
    float _signal;
    struct OpaqueExtAudioFile { } *_debugAudioFile;
}

@property (nonatomic) BOOL didInitializeAudioUnit;
@property (nonatomic) BOOL exportsLiveListenToFile;
@property (weak, nonatomic) id<AXHALiveListenDelegate> delegate;
@property (readonly, nonatomic) struct OpaqueAudioComponentInstance { } *rioUnit;
@property (readonly, nonatomic) struct OpaqueAudioComponentInstance { } *mixerUnit;
@property (nonatomic) BOOL isListening;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)startListeningWithError:(id *)a0;
- (float)audioLevel;
- (void)audioSessionWasInterrupted:(id)a0;
- (BOOL)stopListeningWithError:(id *)a0;
- (void)mediaServicesWereReset:(id)a0;
- (void)audioRouteDidChange:(id)a0;
- (struct OpaqueExtAudioFile { } *)debugAudioFile;

@end
