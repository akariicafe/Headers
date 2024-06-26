@class NSTimer, NSString, NSData, NSAttributedString, NSLock, SCROBrailleEventDispatcher, NSMutableArray, SCROBrailleDisplayStatus, SCROBrailleDisplayInput, SCROBrailleLine;
@protocol SCROIOElementProtocol, SCROBrailleDisplayDelegate, SCROBrailleDisplayCommandDispatcherProtocol, SCROBrailleDriverProtocol;

@interface SCROBrailleDisplay : NSObject <SCROBrailleDisplayCommandDispatcherDelegate, SCROBrailleDriverDelegate, BRLTBrailleStateManagerDelegate> {
    NSLock *_contentLock;
    id<SCROBrailleDisplayDelegate> _delegate;
    id<SCROBrailleDisplayCommandDispatcherProtocol> _commandDispatcher;
    id<SCROBrailleDriverProtocol> _brailleDriver;
    id<SCROIOElementProtocol> _ioElement;
    SCROBrailleLine *_brailleLine;
    BOOL _shouldBatchUpdates;
    BOOL _needsUpdating;
    BOOL _needsPanUpdating;
    BOOL _panWithTextCursorEnabled;
    BOOL _wordWrapEnabled;
    BOOL _autoAdvanceEnabled;
    BOOL _latinEscapeEnabled;
    NSString *_driverIdentifier;
    NSString *_driverModelIdentifier;
    long long _mainSize;
    long long _statusSize;
    BOOL _postsKeyboardEvents;
    int _brailleInputMode;
    SCROBrailleDisplayStatus *_status;
    SCROBrailleEventDispatcher *_eventDispatcher;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopTimer { } *_inputEventTimer;
    struct __CFRunLoopTimer { } *_blinkerEventTimer;
    BOOL _blinkingEnabled;
    BOOL _inputEnabled;
    BOOL _inputPaused;
    double _inputPausedTime;
    NSMutableArray *_keyEventsQueue;
    SCROBrailleDisplayInput *_input;
    BOOL _isValid;
    BOOL _delegateWantsDisplayCallback;
    BOOL _kSCROBrailleLatinEscapeEnabled;
}

@property (nonatomic) double brailleKeyDebounceTimeout;
@property (retain, nonatomic) NSTimer *autoAdvanceTimer;
@property (nonatomic) BOOL delegateWantsDisplayCallback;
@property (nonatomic) BOOL inputAllowed;
@property (nonatomic) BOOL automaticBrailleTranslationEnabled;
@property (nonatomic) BOOL wordWrapEnabled;
@property (nonatomic) BOOL panWithTextCursorEnabled;
@property (nonatomic) BOOL autoAdvanceEnabled;
@property (nonatomic) double autoAdvanceDuration;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) int inputContractionMode;
@property (nonatomic) int outputContractionMode;
@property (nonatomic) BOOL inputShowEightDot;
@property (nonatomic) BOOL outputShowEightDot;
@property (nonatomic) unsigned int persistentKeyModifiers;
@property (readonly, nonatomic) long long lineOffset;
@property (readonly, nonatomic) BOOL hasEdits;
@property (readonly, nonatomic) NSAttributedString *editingString;
@property (readonly, nonatomic) unsigned long long brailleLineGenerationID;
@property (readonly, nonatomic) SCROBrailleLine *testingBrailleLine;
@property (copy, nonatomic) id /* block */ eventHandled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)brailleDriverClassIsValid:(Class)a0;
+ (id)displayWithIOElement:(id)a0 driverIdentifier:(id)a1 delegate:(id)a2;

- (int)token;
- (void)handleEvent:(id)a0;
- (void)panRight;
- (BOOL)isValid;
- (BOOL)isLoaded;
- (id)configuration;
- (void)dealloc;
- (void)panLeft;
- (void)invalidate;
- (void)endUpdates;
- (void).cxx_destruct;
- (void)beginUpdates;
- (void)_updateDisplay;
- (void)sleep;
- (void)_runThread;
- (void)brailleDisplayDeletedCharacter:(id)a0;
- (void)brailleDisplayInsertedCharacter:(id)a0 modifiers:(id)a1;
- (void)brailleDisplayStringDidChange:(id)a0 brailleSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 modifiers:(id)a2;
- (void)didInsertScriptString:(id)a0;
- (void)replaceScriptStringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withScriptString:(id)a1 cursorLocation:(unsigned long long)a2;
- (void)scriptSelectionDidChange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)unsleep;
- (void)_aggregatedStatusHandler:(id)a0;
- (BOOL)_attemptLoad;
- (void)_autoAdvancePanHandler:(id)a0;
- (void)_beginAutoAdvanceIfEnabled;
- (void)_blinkerEventHandler;
- (void)_bulkStatusAttributesHandler:(id)a0;
- (void)_configurationChangeHandler;
- (void)_configurationChangeNotification:(id)a0;
- (BOOL)_currentChordShouldExecuteEvenDuringTyping;
- (void)_delayedConfigurationChangeNotification;
- (void)_delayedDisplayLoad;
- (void)_delayedSleepNotification:(id)a0;
- (void)_delayedUnloadNotification;
- (BOOL)_hasBrailleChord;
- (BOOL)_hasKeyChord;
- (BOOL)_hasPressedBrailleKeys;
- (id)_initWithDriver:(id)a0 driverIdentifier:(id)a1 ioElement:(id)a2 delegate:(id)a3;
- (void)_inputEventHandler;
- (BOOL)_inputPaused;
- (BOOL)_isMemorizingKeys;
- (id)_newBrailleKeyForCurrentBrailleChord;
- (id)_newBrailleKeyForCurrentKeyChord;
- (id)_newBrailleKeyboardKeyForText:(id)a0 modifiers:(unsigned int)a1;
- (void)_panHandler:(id)a0;
- (void)_pauseInput;
- (void)_processKeyEvents:(id)a0;
- (void)_replaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1 cursor:(unsigned long long)a2;
- (void)_setBatchUpdates:(id)a0;
- (void)_setBrailleFormatter:(id)a0;
- (void)_setBrailleFormatterHandler:(id)a0;
- (void)_setBrailleKeyDebounceTimeoutHandler:(double)a0;
- (void)_setDelegateWantsDisplayCallbackHandler:(id)a0;
- (void)_setTactileGraphicsImageDataHandler:(id)a0;
- (void)_simulateKeypressHandler:(id)a0;
- (void)_singleLetterInputHandler:(id)a0;
- (void)_sleepNotification:(id)a0;
- (void)_startEditingText;
- (void)_statusDisplayHandler:(id)a0;
- (id)_statusStringWithDictionary:(id)a0;
- (void)_stopMemorization;
- (void)_textSearchModeHandler:(id)a0;
- (void)_translateBrailleStringAndPostEvent;
- (void)_translateBrailleToClipboard;
- (void)_unloadHandler;
- (void)_unloadNotification:(id)a0;
- (void)_unpauseInput;
- (void)_unpauseInputAndProcessKeyEvents;
- (id)aggregatedStatus;
- (void)brailleDriverDidReceiveInput;
- (id)brailleInputManager;
- (id)canvasDescriptor;
- (id)driverIdentifier;
- (id)driverModelIdentifier;
- (void)handleCommandDeleteKeyEvent:(id)a0 forDispatcher:(id)a1;
- (void)handleCommandEscapeKeyEvent:(id)a0 forDispatcher:(id)a1;
- (void)handleCommandForwardDeleteKeyEvent:(id)a0 forDispatcher:(id)a1;
- (void)handleCommandMoveLeftForDispatcher:(id)a0;
- (void)handleCommandMoveRightForDispatcher:(id)a0;
- (void)handleCommandPanLeftForDispatcher:(id)a0;
- (void)handleCommandPanRightForDispatcher:(id)a0;
- (void)handleCommandReturnBrailleEvent:(id)a0 forDispatcher:(id)a1;
- (void)handleCommandRouterKeyEvent:(id)a0 forDispatcher:(id)a1;
- (void)handleCommandToggleContractedBrailleEvent:(id)a0 forDispatcher:(id)a1;
- (void)handleCommandToggleEightDotBrailleEvent:(id)a0 forDispatcher:(id)a1;
- (void)handleCommandTranslateForDispatcher:(id)a0;
- (void)handleUnsupportedKeyEvent:(id)a0 forDispatcher:(id)a1;
- (void)insertTypingString:(id)a0;
- (id)ioElement;
- (id)keyArrayForBrailleStringWithCurrentModifiers:(id)a0;
- (id)lineDescriptor;
- (long long)mainSize;
- (long long)masterStatusCellIndex;
- (void)panBeginning;
- (void)panEnd;
- (id)realStatus;
- (void)requestFlushLine;
- (void)setAggregatedStatus:(id)a0;
- (void)setBrailleFormatter:(id)a0;
- (void)setMasterStatusCellIndex:(long long)a0;
- (void)setPrepareToMemorizeNextKey:(BOOL)a0 immediate:(BOOL)a1;
- (void)setSingleLetterInputIsOn:(BOOL)a0;
- (void)setStatusAttributesWithMasterCellIndex:(long long)a0 virtualAlignment:(int)a1;
- (void)setTextSearchModeOn:(BOOL)a0;
- (void)setVirtualStatusAlignment:(int)a0;
- (void)simulateKeypress:(id)a0;
- (long long)statusSize;
- (long long)tokenForRouterIndex:(long long)a0 location:(long long *)a1 appToken:(id *)a2;
- (void)translateBrailleToClipboard;
- (void)unpauseInputOnBrailleFormatterChange;
- (id)virtualStatus;
- (int)virtualStatusAlignment;

@end
