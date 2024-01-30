@class NSString, AXUIClient;

@interface SpeakThisServices : NSObject <AXUIClientDelegate> {
    AXUIClient *_client;
}

@property (nonatomic) BOOL springBoardReady;
@property (nonatomic) BOOL triedToShowSpeechControllerBeforeSBReady;
@property (nonatomic) id /* block */ errorHandlerFromPriorShowControllerAttempt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)speakThisMessageKeyKBFrame;

- (id)_clientIdentifier;
- (void)updateSpeakingRateTo:(long long)a0 errorHandler:(id /* block */)a1;
- (void)fastForward:(id /* block */)a0;
- (void)pauseSpeaking:(id /* block */)a0;
- (void)speakThisWithOptions:(long long)a0 forAppWithBundleID:(id)a1 errorHandler:(id /* block */)a2;
- (void)speakThisWithOptions:(long long)a0 forSceneID:(id)a1 errorHandler:(id /* block */)a2;
- (void)_checkSpringBoardStarted;
- (void)rewind:(id /* block */)a0;
- (void)speakThisWithOptions:(long long)a0 useAppAtPoint:(struct CGPoint { double x0; double x1; })a1 errorHandler:(id /* block */)a2;
- (void)showSpeechController:(id /* block */)a0;
- (id)_descriptionForErrorCode:(long long)a0;
- (void)_sendMessageWithIdentifier:(unsigned long long)a0 errorHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)hideSpeechController:(id /* block */)a0;
- (void)speakSlower:(id /* block */)a0;
- (id)init;
- (void)_sendMessage:(id)a0 withIdentifier:(unsigned long long)a1 errorHandler:(id /* block */)a2;
- (void)speakThisWithOptions:(long long)a0 errorHandler:(id /* block */)a1;
- (void)keyboardFrameWillUpdate:(id)a0 errorHandler:(id /* block */)a1;
- (id)userInterfaceClient:(id)a0 processMessageFromServer:(id)a1 withIdentifier:(unsigned long long)a2 error:(id *)a3;
- (void)resumeSpeaking:(id /* block */)a0;
- (id)_client;
- (void)didCancelSpeakThisErrorHandler:(id /* block */)a0;
- (void)toggleSpeaking:(id /* block */)a0;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (void)speakFaster:(id /* block */)a0;
- (id)_descriptionForMessageIdentifier:(unsigned long long)a0;

@end
