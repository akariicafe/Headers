@class NSString, TIKeyboardCandidate, TIKeyboardInput, TIDocumentState;

@interface TIKeyboardInteractionProtocolEventCandidateAccepted : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {
    TIKeyboardCandidate *_candWord;
    TIKeyboardInput *_input;
    TIDocumentState *_documentState;
    NSString *_context;
    NSString *_inputStem;
    BOOL _predictionBarHit;
    BOOL _useCandidateSelection;
    long long _candidateIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)sendTo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCandidateAccepted:(id)a0 withInput:(id)a1 documentState:(id)a2 inputContext:(id)a3 inputStem:(id)a4 predictionBarHit:(BOOL)a5 useCandidateSelection:(BOOL)a6 candidateIndex:(long long)a7 keyboardState:(id)a8;

@end
