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

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;
+ (id)userInterfaceProtocol;

- (void)stopListening;
- (void)dictationConnection:(id)a0 didRecognizeTokens:(id)a1 languageModel:(id)a2;
- (void)dictationConnection:(id)a0 didRecognizePackage:(id)a1;
- (void)dictationConnection:(id)a0 speechRecognitionDidFail:(id)a1;
- (void).cxx_destruct;
- (void)cancel;
- (void)dictationConnection:(id)a0 speechRecordingDidFail:(id)a1;
- (id)recognitionError;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)finishRunningWithError:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)runWithRemoteUserInterface:(id)a0 locale:(id)a1 stopListeningValue:(id)a2;
- (void)runWithSiriUserInterface:(id)a0 input:(id)a1;

@end
