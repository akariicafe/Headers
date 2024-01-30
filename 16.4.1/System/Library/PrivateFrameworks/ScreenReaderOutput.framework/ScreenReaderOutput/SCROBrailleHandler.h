@class NSString, SCROBrailleDisplayManager;

@interface SCROBrailleHandler : SCROHandler <SCROSBrailleDisplayManagerDelegate> {
    SCROBrailleDisplayManager *_brailleDisplayManager;
    BOOL _wantsInputCallbacks;
    BOOL _wantsDidDisplayCallbacks;
    struct { BOOL didDisplay; BOOL keypress; BOOL userEventOccured; BOOL replaceTextRange; BOOL keyWillMem; BOOL keymem; BOOL panLeft; BOOL panRight; BOOL showPreviousAnnouncement; BOOL showNextAnnouncement; BOOL configChanged; BOOL playDisplayConnectionSound; BOOL playBorderHitSound; BOOL playCommandNotSupportedSound; BOOL bluetoothDisplayLoadFailed; BOOL tableLoadFailed; BOOL displayModeChanged; BOOL copyStringToClipboard; BOOL tacticalGraphicsCanvasDidChange; BOOL startEditing; BOOL insertUntranslatedText; BOOL deleteUntranslatedText; } _callbacks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)handleBrailleDriverDisconnected;
- (void)handleBrailleTableFailedToLoad:(id)a0;
- (void)configurationDidChange;
- (void)handleBrailleDeletedUntranslatedText:(id)a0 speakLiterally:(BOOL)a1;
- (void)handleBrailleDidDisplay:(id)a0;
- (void)handleBrailleDidPanLeft:(id)a0 elementToken:(id)a1 appToken:(id)a2 lineOffset:(id)a3;
- (void)handleBrailleDidPanRight:(id)a0 elementToken:(id)a1 appToken:(id)a2 lineOffset:(id)a3;
- (void)handleBrailleDidShowNextAnnouncement:(id)a0;
- (void)handleBrailleDidShowPreviousAnnouncement:(id)a0;
- (void)handleBrailleDriverDidLoad;
- (void)handleBrailleInsertedUntranslatedText:(id)a0 speakLiterally:(BOOL)a1;
- (void)handleBrailleKeyMemorize:(id)a0;
- (void)handleBrailleKeyWillMemorize:(id)a0;
- (void)handleBrailleKeypress:(id)a0;
- (void)handleBrailleReplaceTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1 cursor:(unsigned long long)a2;
- (void)handleCopyStringToClipboard:(id)a0;
- (void)handleDisplayModeChanged:(id)a0;
- (void)handleFailedToLoadBluetoothDevice:(id)a0;
- (int)handleGetValue:(id *)a0 forKey:(int)a1 withObject:(id)a2 trusted:(BOOL)a3;
- (int)handlePerformActionForKey:(int)a0 trusted:(BOOL)a1;
- (void)handlePlayBorderHitSound;
- (void)handlePlayCommandNotSupportedSound;
- (int)handleRegisterCallbackForKey:(int)a0 trusted:(BOOL)a1;
- (int)handleSetValue:(id)a0 forKey:(int)a1 trusted:(BOOL)a2;
- (void)handleStartEditing;
- (void)handleTacticalGraphicsCanvasDidChange:(id)a0;
- (void)handleUserEventOccured;
- (id)initWithBrailleDisplayManager:(id)a0;

@end
