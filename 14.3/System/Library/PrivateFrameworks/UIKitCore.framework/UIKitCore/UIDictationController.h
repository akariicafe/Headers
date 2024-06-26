@class CADisplayLink, UIDictationConnection, _UIDictationTelephonyMonitor, _UIVoiceCommandButtonTapGestureRecognizer, NSDictionary, UITapGestureRecognizer, NSMutableArray, NSString, _UIDictationPrivacySheetController, NSTimer, UIDictationConnectionPreferences, AFAnalyticsTurnBasedInstrumentationContext, NSArray, UIKeyboardInputMode, NSNumber, UIDictationStreamingOperations, UIWindow;

@interface UIDictationController : NSObject <UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol, UIAdaptivePresentationControllerDelegate, _UIDictationPrivacySheetControllerDelegate, VTUIDictationDataSharingOptInPresentationDelegate, _UITouchPhaseChangeDelegate> {
    UIDictationConnection *_dictationConnection;
    UIDictationConnectionPreferences *_preferences;
    NSTimer *_recordingLimitTimer;
    BOOL _connectionWasAlreadyAliveForStatisticsLogging;
    UIDictationStreamingOperations *_streamingOperations;
    NSString *_language;
    BOOL _recievingResults;
    BOOL _streamingAnimationActive;
    double _lastAnimationUpdateTimeStamp;
    id /* block */ _finalResultsOperation;
    CADisplayLink *_streamingAnimationDisplayLink;
    BOOL cancelledByWaitingForLocalResults;
    long long _updatingDocument;
    BOOL _deferredCancellationRequested;
    BOOL _isOfflineMetricsSessionActive;
    BOOL _didUseOfflineDictation;
    long long _lastOfflineDictationMetricEvent;
    _UIDictationTelephonyMonitor *_monitor;
    NSString *_prefixTextForStart;
    NSString *_selectionTextForStart;
    NSString *_postfixTextForStart;
    BOOL _hasDictated;
    NSDictionary *_selectedAttributesForDictation;
    id /* block */ _privacySheetDismissalHandler;
    int _dictationInputModeNotifierToken;
    long long _currentShortcutType;
    UITapGestureRecognizer *_hardwareShortcutRecognizer;
    _UIVoiceCommandButtonTapGestureRecognizer *_hardwareVoiceCommandKeyRecognizer;
    BOOL _prevForceDisplayOverridePlaceholder;
}

@property (nonatomic) BOOL hasPostedInstrumentationDictationContext;
@property (retain, nonatomic) _UIDictationPrivacySheetController *dictationPrivacySheetController;
@property (nonatomic) BOOL didToggleSoftwareKeyboardVisibleForDictation;
@property (nonatomic) BOOL wantsAvailabilityMonitoringWhenAppActive;
@property (copy) NSString *smartLanguageSelectionOverrideLanguage;
@property (copy, nonatomic) NSString *detectedLanguage;
@property (retain, nonatomic) NSArray *dictationLanguages;
@property (copy, nonatomic) NSString *initialDictationLanguage;
@property (copy, nonatomic) NSString *fallbackDictationLanguage;
@property (nonatomic) unsigned long long dictationSourceType;
@property (copy, nonatomic) NSString *currentKeyboardPrimaryLanguage;
@property (nonatomic) BOOL selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate;
@property (nonatomic) BOOL selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate;
@property (nonatomic) unsigned short initialPreviousCharacterForAsyncDelegate;
@property (nonatomic) unsigned short initialCharacterAfterSelectionForAsyncDelegate;
@property (nonatomic) unsigned long long stateHandler;
@property (nonatomic) BOOL localSpeechRecognitionForced;
@property (nonatomic) BOOL secureOfflineOnlySpeechRecognition;
@property (copy, nonatomic) NSString *modelInfo;
@property (nonatomic) BOOL ignoreFinalizePhrases;
@property (nonatomic, getter=isDetectingUtterances) BOOL detectingUtterances;
@property (nonatomic, getter=isFinalizingRecognizedUtterance) BOOL finalizingRecognizedUtterance;
@property (nonatomic) BOOL hasCheckedForLeadingSpaceOnce;
@property (nonatomic) BOOL neededLeadingSpace;
@property (retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *currentInstrumentationContext;
@property (copy, nonatomic) NSString *activationIdentifier;
@property (retain, nonatomic) NSMutableArray *pendingEdits;
@property (nonatomic) BOOL performingStreamingEditingOperation;
@property (copy, nonatomic) NSString *previousHypothesis;
@property (copy, nonatomic) NSString *lastHypothesis;
@property (copy, nonatomic) NSString *targetHypothesis;
@property (nonatomic) BOOL discardNextHypothesis;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } insertionRange;
@property (nonatomic) BOOL hasPreheated;
@property (retain, nonatomic) UIWindow *dictationPresenterWindow;
@property (nonatomic) unsigned long long reasonType;
@property (copy, nonatomic) NSString *lastRecognitionText;
@property (copy, nonatomic) id lastCorrectionIdentifier;
@property (copy, nonatomic) NSString *interactionIdentifier;
@property (copy, nonatomic) NSString *lastMessageKeyboardLanguage;
@property (readonly, retain, nonatomic) NSNumber *dictationRequestOrigin;
@property (nonatomic) BOOL logAppEnterBackground;
@property (retain, nonatomic) UIKeyboardInputMode *currentInputModeForDictation;
@property (retain, nonatomic) UIKeyboardInputMode *keyboardInputModeToReturn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)applicationDidEnterBackgroundNotification;
+ (void)viewServiceDidBecomeActive;
+ (BOOL)fetchCurrentInputModeSupportsDictation;
+ (BOOL)isRunning;
+ (id)dictionaryWithTextEntriesRemoved:(id)a0;
+ (BOOL)canShareDictationData;
+ (id)_dictationLog;
+ (void)performOperations:(id /* block */)a0 keyboardShifted:(BOOL)a1;
+ (int)UIDictationStartStopReasonToInstrumentationDictationEndPointType:(unsigned long long)a0;
+ (BOOL)shouldRemoveTextEntries;
+ (id)serializedInterpretationFromTokens:(id)a0 transform:(struct __CFString { } *)a1 capitalization:(unsigned long long)a2;
+ (id)UIDictationStartStopReasonTypeDescription:(unsigned long long)a0;
+ (id)activeInstance;
+ (id)bestInterpretationForDictationResult:(id)a0;
+ (BOOL)shouldDeleteBackwardInInputDelegate:(id)a0;
+ (id)whitelistedDictationDictionaryFromMetadata:(id)a0;
+ (BOOL)takesPressesBegan:(id)a0 forTextView:(id)a1;
+ (id)serializedInterpretationFromTokens:(id)a0 transform:(struct __CFString { } *)a1;
+ (void)logCorrectionStatisticsForDelegate:(id)a0 reason:(unsigned long long)a1;
+ (void)onDidBecomeActive;
+ (BOOL)takesPressesChanged:(id)a0 forTextView:(id)a1;
+ (void)instrumentationDictationAlternativeSelectedWithInstrumentationContext:(id)a0 originalText:(id)a1 replacementText:(id)a2 replacementIndex:(unsigned long long)a3 alternativesAvailableCount:(unsigned long long)a4 dictationLanguage:(id)a5;
+ (BOOL)isDictationSearchBarButtonVisible;
+ (void)keyboardWillChangeFromDelegate:(id)a0 toDelegate:(id)a1;
+ (double)serverManualEndpointingThreshold;
+ (void)logDictationString:(id)a0;
+ (id)whitelistedDictationDictionariesFromMetadataDictionaries:(id)a0;
+ (void)siriPreferencesChanged;
+ (BOOL)starkScreenExists;
+ (void)updateLandingView;
+ (id)slsDictationLanguages;
+ (BOOL)shouldHideSelectionUIForTextView:(id)a0;
+ (void)onWillResignActive;
+ (BOOL)usingServerManualEndpointingThreshold;
+ (id)activeConnection;
+ (id)removeTextIfNeeded:(id)a0 metadata:(id)a1;
+ (id)serializedDictationPhrases:(id)a0;
+ (BOOL)isTextViewOnStarkScreen:(id)a0;
+ (void)applicationDidBecomeActive;
+ (id)whitelistedDictationMetadataKeys;
+ (BOOL)shouldRemoveTextEntries:(id)a0;
+ (BOOL)dictationIsFunctional;
+ (id)removeTextIfNeeded:(id)a0;
+ (int)viewMode;
+ (int)UIDictationStartStopReasonToInstrumentationInvocationSourceType:(unsigned long long)a0;
+ (id)UIDictationInstrumentaionLocalIdentifierWithLocalString:(id)a0;
+ (void)keyboardDidUpdateOnScreenStatus;
+ (id)serializedInterpretationFromTokens:(id)a0 transform:(struct __CFString { } *)a1 autocapitalization:(long long)a2 capitalization:(unsigned long long)a3;
+ (void)viewServiceWillResignActive;
+ (id)stringForViewMode:(int)a0;
+ (id)interpretation:(id)a0 forPhraseIndex:(unsigned long long)a1 isShiftLocked:(BOOL)a2 autocapitalizationType:(long long)a3 useServerCapitalization:(BOOL)a4;
+ (BOOL)dictationInfoIsOnScreen;
+ (id)activeSLSDictationLanguages;
+ (id)textRelatedMetadataKeys;
+ (BOOL)_applicationIsActive;
+ (void)applicationWillResignActive;
+ (BOOL)takesPressesEnded:(id)a0 forTextView:(id)a1;
+ (id)stringForState:(int)a0;
+ (BOOL)shouldInsertText:(id)a0 inInputDelegate:(id)a1;
+ (BOOL)shouldPreferOnlineRecognition;
+ (BOOL)shouldHideCursorForTextView:(id)a0;
+ (void)poppedLastStreamingOperation;
+ (BOOL)checkTraitsSupportDictation:(id)a0;
+ (BOOL)remoteCanDictateCurrentInputMode;
+ (BOOL)usingTypeAndTalk;
+ (id)UIDictationLanguageSourceType:(unsigned long long)a0;
+ (id)arrayWithTextEntriesRemoved:(id)a0;
+ (void)didBeginEditingInTextView:(id)a0;
+ (id)streamingHypothesisForPhrases:(id)a0;
+ (void)instrumentationDictationAlternativesViewedWithInstrumentationContext:(id)a0 alternatives:(id)a1 dictationLanguage:(id)a2;

- (id)language;
- (void)markKeyboardDeleteMetricEvent;
- (id)fieldIdentifierInputDelegate:(id)a0;
- (void)setLanguage:(id)a0;
- (void)prepareStartDictationKeyboardGestures;
- (void)_startStreamingAnimations;
- (BOOL)shouldOverrideManualEndpointing;
- (id)connectionForStatisticsLogging;
- (BOOL)currentViewModeSupportsDictationMics;
- (id)selectedTextForInputDelegate:(id)a0;
- (void)switchToDictationInputModeWithTouch:(id)a0;
- (id)init;
- (void)stopDictationIgnoreFinalizePhrases;
- (void)_setFinalResultHandler:(id /* block */)a0;
- (void)stopHelpMessageDisplay;
- (void)endSmartLanguageSelectionOverride;
- (void)optInButtonPressedForPresenter:(id)a0;
- (void)finalizeDictationRecognitionWithPhrases:(id)a0 languageModel:(id)a1 correctionIdentifier:(id)a2 secureInput:(BOOL)a3 finalResult:(BOOL)a4;
- (void).cxx_destruct;
- (BOOL)dictationIsModifyingText;
- (void)setDictationInputMode:(id)a0;
- (void)setupToInsertResultForNewHypothesis:(id)a0;
- (id)_rangeByExtendingRange:(id)a0 backward:(long long)a1 forward:(long long)a2 inputDelegate:(id)a3;
- (id)_currentLanguageForOfflineDictationMetrics;
- (void)_displaySecureContentsAsPlainText:(BOOL)a0 afterDelay:(double)a1;
- (id)dictationConnection:(id)a0 willFilterTokensWithLanguageModel:(id)a1 forFinalize:(BOOL)a2;
- (void)dictationConnection:(id)a0 didReceiveSearchResults:(id)a1 recognizedText:(id)a2 stable:(BOOL)a3 final:(BOOL)a4;
- (void)prepareDoubleTapShortcutGesture:(id)a0;
- (void)_beginEnableDictationPrompt;
- (void)finishDictationRecognitionWithPhrases:(id)a0 languageModel:(id)a1 correctionIdentifier:(id)a2 secureInput:(BOOL)a3;
- (void)dictationConnection:(id)a0 updateOptions:(id)a1;
- (void)prepareStartDictationKeyboardGesturesForDelegate:(id)a0;
- (BOOL)shouldPresentOptInAlert;
- (id)_containingSearchBarForView:(id)a0;
- (void)_handleDataSharingSheetDecision;
- (void)dealloc;
- (void)_runFinalizeOperation;
- (void)_startDictation;
- (BOOL)smartLanguageSelectionOverridden;
- (void)stopAndCancelDictationWithReasonType:(unsigned long long)a0;
- (void)_displayLinkFired:(id)a0;
- (void)switchToDictationInputModeWithTouch:(id)a0 withKeyboardInputMode:(id)a1;
- (void)_restartDictation;
- (id)postfixTextForInputDelegate:(id)a0;
- (void)stopDictation;
- (BOOL)dictationSearchFieldUIEnabled;
- (void)instrumentationDictationContextEmitInstrumentation;
- (void)releaseConnectionAfterStatisticsLogging;
- (void)stopDictation:(BOOL)a0;
- (BOOL)isFallingBackToMonolingualDictation;
- (id)_assistantCompatibleLanguageCodeForInputMode:(id)a0;
- (id)streamingOperations;
- (void)_presentDataSharingOptInAlertWithCompletion:(id /* block */)a0;
- (void)preferencesChanged:(id)a0;
- (id)prefixTextForInputDelegate:(id)a0;
- (BOOL)isRecievingResults;
- (void)updateDoubleTapShortcutWithPreference:(long long)a0;
- (void)startHelpMessageDisplay;
- (void)_endOfflineMetricsSession;
- (void)overrideSmartLanguageSelection:(id)a0;
- (BOOL)dictationSearchFieldUISupportsTraitCollection:(id)a0;
- (void)clearTextFieldPlaceholder;
- (void)dictationConnectionWillStartRecording:(id)a0;
- (void)dictationConnectionDidStartRecording:(id)a0;
- (void)_deleteBackwardIntoText;
- (void)prepareVoiceCommandSingleTapGesture:(id)a0;
- (void)markKeyboardDidReset;
- (void)_handlePrivacySheetDismissal;
- (void)dictationConnection:(id)a0 receivedInterpretation:(id)a1 languageModel:(id)a2 secureInput:(BOOL)a3;
- (void)instrumentationDictationTranscriptionMetadataEmitInstrumentationWithDictationResult:(id)a0;
- (void)logDidAcceptDictationResult:(id)a0 reasonType:(unsigned long long)a1;
- (void)_touchPhaseChangedForTouch:(id)a0;
- (void)setupForStreamingDictationStart;
- (void)dictationConnection:(id)a0 didFailRecognitionWithError:(id)a1;
- (BOOL)dictationEnabled;
- (void)stopAndCancelDictationIfNeededWithReasonType:(unsigned long long)a0;
- (void)dictationConnnectionDidChangeAvailability:(id)a0;
- (void)_endEnableDictationPromptAnimated:(BOOL)a0;
- (id /* block */)dictationBlockForToken:(id)a0;
- (void)dictationConnection:(id)a0 finalizePhrases:(id)a1 languageModel:(id)a2 correctionIdentifier:(id)a3 secureInput:(BOOL)a4;
- (void)preheatIfNecessary;
- (void)startConnection;
- (void)_completeStartDictationWithContinuation:(id /* block */)a0;
- (void)_runFinalizeOperation:(BOOL)a0;
- (id)_getBestHypothesisRangeGivenHintRange:(id)a0 inputDelegate:(id)a1 hypothesisRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 documentTextInRange:(id *)a3;
- (BOOL)dictationConnection:(id)a0 filterState:(id)a1 shouldCheckpointAtToken:(id)a2;
- (void)cancelRecordingLimitTimer;
- (struct __CFString { } *)resultTransformForLanguageModel:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (BOOL)_shouldInsertText:(id)a0 inInputDelegate:(id)a1;
- (void)_presentOptInAlertWithCompletion:(id /* block */)a0;
- (void)dictationConnection:(id)a0 filterState:(id)a1 processFilteredToken:(id)a2 forFinalize:(BOOL)a3;
- (void)keyboardDismissed:(id)a0;
- (void)handleHardwareKeyboardGesture;
- (float)audioLevel;
- (void)_updateFromSelectedTextRange:(id)a0 withNewHypothesis:(id)a1;
- (void)showSoftwareKeyboardIfNeeded;
- (void)dismissDictationView:(id)a0;
- (void)keyboardInputModeChanged:(id)a0;
- (void)_clearExistingText;
- (BOOL)_systemLanguageSupportsDictation;
- (void)startDictationForFileAtURL:(id)a0 forInputModeIdentifier:(id)a1;
- (BOOL)_allowsMicsInSearchFieldForLanguageIdentifiers:(id)a0;
- (void)markKeyboardInputMetricEvent;
- (id)dictationUIState;
- (void)setState:(int)a0;
- (void)insertSerializedDictationResult:(id)a0 withCorrectionIdentifier:(id)a1;
- (void)dictationConnectionDidEndRecording:(id)a0;
- (void)voiceCommandSingleTapKey:(id)a0;
- (void)completeStartConnectionForFileAtURL:(id)a0 forInputModeIdentifier:(id)a1;
- (void)dictationConnection:(id)a0 didFailRecordingWithError:(id)a1;
- (void)logDidAcceptReplacement:(id)a0 replacementLanguageCode:(id)a1 originalText:(id)a2 correctionIdentifier:(id)a3 interactionIdentifier:(id)a4;
- (void)switchToDictationLanguage:(id)a0;
- (void)restoreTextFieldPlaceholder;
- (void)releaseConnection;
- (void)logAlternativeSelected:(id)a0 correctionIdentifier:(id)a1 interactionIdentifier:(id)a2;
- (BOOL)shouldUseDictationSearchFieldBehavior;
- (void)cancelDictation;
- (void)dictationConnection:(id)a0 didFilterTokensWithFilterState:(id)a1 forFinalize:(BOOL)a2;
- (void)startRecordingLimitTimer;
- (BOOL)supportsInputMode:(id)a0 error:(id *)a1;
- (BOOL)dataSharingDecided;
- (void)switchToDictationInputMode;
- (void)performIgnoringDocumentChanges:(id /* block */)a0;
- (id)resultWithTrailingSpace:(id)a0;
- (void)errorAnimationDidFinish;
- (void)releaseConnectionAfterDictationRequest;
- (void)removeStartDictationKeyboardGestures;
- (void)dismissSoftwareKeyboardIfNeeded;
- (void)_presentAlertForDictationInputModeOfType:(long long)a0 completionHandler:(id /* block */)a1;
- (void)setDictationInfoOnScreenNotifyKey:(BOOL)a0;
- (BOOL)supportsDictationLanguage:(id)a0 error:(id *)a1;
- (int)state;
- (void)_createDictationPresenterWindowIfNecessary;
- (void)doubleTappedKey:(id)a0;
- (BOOL)_shouldDeleteBackwardInInputDelegate:(id)a0;
- (void)_setupHypothesisAsFinalResults;
- (void)dictationPrivacySheetControllerDidFinish:(id)a0;
- (id)languageCodeForAssistantLanguageCode:(id)a0;
- (void)setupForDictationStart;
- (void)dictationConnectionDidCancelIncompatibleLocalRecognizer:(id)a0;
- (void)_markOfflineDictationInputMetricEvent;
- (id)_hypothesisRangeFromSelectionRange:(id)a0 inputDelegate:(id)a1;
- (void)_presentPrivacySheetForType:(long long)a0 completion:(id /* block */)a1;
- (void)stopDictationByTimer;
- (void)dictationConnection:(id)a0 didBeginLocalRecognitionWithModelInfo:(id)a1;
- (void)_stopStreamingAnimation;
- (void)dictationConnection:(id)a0 didStartRecordingWithOptions:(id)a1;
- (id)dictationConnection;
- (void)dictationConnectionDidCancelRecording:(id)a0;
- (void)dictationConnectionDidFinish:(id)a0;
- (void)_beginOfflineMetricsSession;
- (void)completeStartConnection;
- (void)startDictation;
- (void)optOutButtonPressedForPresenter:(id)a0;
- (void)cancelDictationForTextStoreChangesInResponder:(id)a0;
- (void)restartDictationForTypeAndTalk;
- (void)dictationConnection:(id)a0 didDetectLanguage:(id)a1;
- (void)dictationConnectionDidCancel:(id)a0;
- (BOOL)isIgnoringDocumentChanges;
- (void)endSessionIfNecessaryForTransitionFromState:(int)a0 toState:(int)a1;
- (void)didShowAlternatives:(id)a0 correctionIdentifier:(id)a1 interactionIdentifier:(id)a2 instrumentationContext:(id)a3 dictationLanguage:(id)a4;
- (BOOL)dictationDisabledDueToTelephonyActivity;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_getRangeOfString:(id)a0 inDocumentText:(id)a1;
- (void)presentAlertOfType:(long long)a0 withCompletion:(id /* block */)a1;

@end
