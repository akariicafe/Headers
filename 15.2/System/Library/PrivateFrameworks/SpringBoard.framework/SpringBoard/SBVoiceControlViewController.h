@class NSTimer, NSString, NSArray, VSRecognitionSession, UIView, SBVoiceControlPresentationSource, NSDictionary, SiriUISuggestionsView, UILabel, SUICFlamesView;
@protocol SBVoiceControlViewControllerDelegate;

@interface SBVoiceControlViewController : UIViewController <SiriUISuggestionsViewDelegate, SUICFlamesViewDelegate, VSRecognitionSessionDelegate, VSSpeechSynthesizerDelegate> {
    NSString *_avAudioRouteName;
    NSString *_avAudioRouteUID;
    UIView *_contentView;
    NSTimer *_delayedConfirmationActionTimer;
    SUICFlamesView *_flamesView;
    BOOL _hasConfiguredRouting;
    NSDictionary *_localizationKeys;
    BOOL _isHeadsetButtonPressedDown;
    VSRecognitionSession *_session;
    SBVoiceControlPresentationSource *_source;
    long long _startingKeywordIndex;
    UILabel *_subtitleLabel;
    SiriUISuggestionsView *_suggestionsView;
    UILabel *_titleLabel;
    BOOL _wasRecognizing;
}

@property (copy, nonatomic) NSArray *nextRecognitionAudioInputPaths;
@property (readonly, nonatomic) BOOL prefersProximityDetectionEnabled;
@property (nonatomic) BOOL shouldAllowSensitiveActions;
@property (nonatomic) BOOL shouldDisableHandlerActions;
@property (nonatomic) BOOL shouldDisableVoiceControlForBluetoothRequests;
@property (nonatomic, getter=isVoiceControlLoggingEnabled) BOOL voiceControlLoggingEnabled;
@property (weak, nonatomic) id<SBVoiceControlViewControllerDelegate> voiceControlDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)handleHomeButtonPress;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)_localizedStringForKey:(id)a0;
- (void)_requestDismissal;
- (float)audioLevelForFlamesView:(id)a0;
- (void)dealloc;
- (id)initWithSource:(id)a0;
- (void)_resetSession;
- (void)recognitionSessionDidBeginAction:(id)a0;
- (BOOL)recognitionSessionWillBeginAction:(id)a0;
- (void)recognitionSession:(id)a0 openURL:(id)a1 completion:(id /* block */)a2;
- (void)recognitionSession:(id)a0 didCompleteActionWithError:(id)a1;
- (void)recognitionSession:(id)a0 didFinishSpeakingFeedbackStringWithError:(id)a1;
- (void)_setSession:(id)a0;
- (void)_setStatusText:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_flamesViewFrame;
- (id)nextSuggestionsForSuggestionsView:(id)a0 maxSuggestions:(unsigned long long)a1;
- (void)_setTitleText:(id)a0;
- (void)resetSessionWithSource:(id)a0;
- (void)handleHeadsetButtonUpFromButtonDownSource:(BOOL)a0;
- (double)_titleBaseline;
- (double)_subtitleBaseline;
- (void)performDismissalTransitionAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)performPresentationTransitionAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_setPrefersProximityDetectionEnabled:(BOOL)a0;
- (void)_setAVAudioRouteUID:(id)a0;
- (void)_deviceProximityStateDidChangeNotification:(id)a0;
- (void)_setFeedbackVisible:(BOOL)a0 animated:(BOOL)a1;
- (id)_newRecognitionSession;
- (void)_startSession;
- (void)_performNoMatchFound;
- (void)_handleButtonUpCancel;
- (void)_configureRoutingIfNeeded;
- (void)_speakFeedbackText;
- (void)_continueWithRecognitionAction;
- (void)_continueRecognitionAction;
- (id)_currentPreferredRouteDictionary;
- (void)_setNeedsRoutingUpdate;
- (void)_avSystemControllerPickableRoutesDidChangeNotification:(id)a0;
- (void)_avSystemControllerHeadphoneJackIsConnectedDidChangeNotification:(id)a0;
- (id)_popNextRecognitionAudioInputPath;
- (void)_performConfirmationAction;
- (id)_availableRouteDictionaries;
- (id)_preferredRouteDictionaryWithAvailableRouteDictionaries:(id)a0 preferredAVAudioRouteName:(id)a1 preferredAVAudioRouteUID:(id)a2 shouldPreferBluetooth:(BOOL)a3;
- (BOOL)_hasPickableBluetoothDevice;
- (void)_speakText:(id)a0;
- (void)_recognitionSessionKeywordsDidChangeNotification:(id)a0;

@end
