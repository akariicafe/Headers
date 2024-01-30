@class NSString, SCROBrailleDisplayManager;

@interface SCROBrailleHandler : SCROHandler <SCROSBrailleDisplayManagerDelegate> {
    SCROBrailleDisplayManager *_brailleDisplayManager;
    BOOL _wantsInputCallbacks;
    BOOL _wantsDidDisplayCallbacks;
    struct { BOOL didDisplay; BOOL keypress; BOOL userEventOccured; BOOL replaceTextRange; BOOL keyWillMem; BOOL keymem; BOOL panLeft; BOOL panRight; BOOL showPreviousAnnouncement; BOOL showNextAnnouncement; BOOL configChanged; BOOL playDisplayConnectionSound; BOOL playBorderHitSound; BOOL playCommandNotSupportedSound; BOOL bluetoothDisplayLoadFailed; BOOL tableLoadFailed; BOOL displayModeChanged; BOOL copyStringToClipboard; BOOL startEditing; BOOL insertUntranslatedText; BOOL deleteUntranslatedText; } _callbacks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)handleBrailleKeypress:(id)a0;
- (void)handleBrailleReplaceTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1 cursor:(unsigned long long)a2;
- (void)handleUserEventOccured;
- (void)handleBrailleInsertedUntranslatedText:(id)a0 speakLiterally:(BOOL)a1;
- (void)handleBrailleDeletedUntranslatedText:(id)a0 speakLiterally:(BOOL)a1;
- (void)handleBrailleKeyWillMemorize:(id)a0;
- (void)handleBrailleKeyMemorize:(id)a0;
- (void)handleBrailleDidDisplay:(id)a0;
- (void)handleBrailleDidPanLeft:(id)a0 elementToken:(id)a1 appToken:(id)a2;
- (void)handleBrailleDidPanRight:(id)a0 elementToken:(id)a1 appToken:(id)a2;
- (void)handleBrailleDidShowPreviousAnnouncement:(id)a0;
- (void)handleBrailleDidShowNextAnnouncement:(id)a0;
- (void)handleFailedToLoadBluetoothDevice:(id)a0;
- (void)handleBrailleTableFailedToLoad:(id)a0;
- (void)handleDisplayModeChanged:(id)a0;
- (void)handleBrailleDriverDidLoad;
- (void)configurationDidChange;
- (void)handleBrailleDriverDisconnected;
- (void)handleStartEditing;
- (void)handleCopyStringToClipboard:(id)a0;
- (void)handlePlayBorderHitSound;
- (void)handlePlayCommandNotSupportedSound;
- (int)handleRegisterCallbackForKey:(int)a0 trusted:(BOOL)a1;
- (int)handleSetValue:(id)a0 forKey:(int)a1 trusted:(BOOL)a2;
- (int)handleGetValue:(id *)a0 forKey:(int)a1 withObject:(id)a2 trusted:(BOOL)a3;
- (int)handlePerformActionForKey:(int)a0 trusted:(BOOL)a1;
- (id)initWithBrailleDisplayManager:(id)a0;

@end
