@class NSString, MNTraceRouteSimulator;

@interface MNSimulatorAudioSession : NSObject <MNAudioSession> {
    BOOL _isSpeaking;
}

@property (retain, nonatomic) MNTraceRouteSimulator *simulator;
@property (weak, nonatomic) id delegate;
@property (nonatomic) unsigned long long voiceGuidanceLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endSession;
- (void).cxx_destruct;
- (void)stop;
- (void)beginSession;
- (BOOL)isSpeaking;
- (void)prepareToAnnounce;
- (void)speak:(id)a0 shortPromptType:(unsigned long long)a1 ignorePromptStyle:(BOOL)a2 minimumRequiredLevel:(unsigned long long)a3 completionBlock:(id /* block */)a4;
- (void)speak:(id)a0 shortPromptType:(unsigned long long)a1 ignorePromptStyle:(BOOL)a2 completionBlock:(id /* block */)a3;
- (BOOL)vibrateForPrompt:(unsigned long long)a0;
- (void)clearAllAnnouncements;
- (id)initWithSimulator:(id)a0;

@end
