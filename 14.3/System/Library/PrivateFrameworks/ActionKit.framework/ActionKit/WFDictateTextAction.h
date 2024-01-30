@class NSString, AFDictationConnection;
@protocol WFDictateTextActionUserInterface;

@interface WFDictateTextAction : WFAction <AFDictationDelegate>

@property (retain, nonatomic) id<WFDictateTextActionUserInterface> actionUserInterface;
@property (retain, nonatomic) AFDictationConnection *dictationConnection;
@property (copy, nonatomic) NSString *latestTranscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userInterfaceProtocol;

- (void)cancel;
- (void)stopListening;
- (void).cxx_destruct;
- (void)dictationConnection:(id)a0 didRecognizePackage:(id)a1;
- (void)dictationConnection:(id)a0 speechRecordingDidFail:(id)a1;
- (void)dictationConnection:(id)a0 didRecognizeTokens:(id)a1 languageModel:(id)a2;
- (void)dictationConnection:(id)a0 speechRecognitionDidFail:(id)a1;
- (id)recognitionError;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)finishRunningWithError:(id)a0;
- (void)runWithSiriUserInterface:(id)a0 input:(id)a1;
- (void)runWithRemoteUserInterface:(id)a0 locale:(id)a1 stopListeningValue:(id)a2;

@end
