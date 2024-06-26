@class NSData, NSString, SCROBrailleLineVirtualStatus, NSAttributedString, SCROBrailleFormatter, NSMutableArray, NSMutableAttributedString, BRLTBrailleStateManager;
@protocol BRLTBrailleStateManagerDelegate, SCROBrailleDriverProtocol;

@interface SCROBrailleLine : NSObject <BRLTBrailleTranslationDelegateProtocol, BRLTBrailleStateManagerDelegate> {
    id<SCROBrailleDriverProtocol> _brailleDriver;
    long long _size;
    long long _statusSize;
    long long _insetSize;
    long long _leftInset;
    long long _rightInset;
    long long _masterStatusCellIndex;
    long long _iBeamLocation;
    long long _focusLocation;
    struct _NSRange { unsigned long long location; unsigned long long length; } _focusRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _selectionRange;
    int _displayMode;
    int _lineFocus;
    BOOL _needsStatusFlush;
    BOOL _needsFocusFlush;
    BOOL _blink;
    BOOL _currentUnread;
    BOOL _anyUnread;
    BOOL _isPanning;
    BOOL _showDotsSevenAndEight;
    BOOL _brailleChunksAreDirty;
    char *_displayBuffer;
    char *_mainCellsBuffer;
    char *_displayFilter;
    char *_blinkerBuffer;
    char *_statusFilter;
    NSData *_statusData;
    NSMutableAttributedString *_lineBuffer;
    id _appToken;
    long long _firstToken;
    long long _lastToken;
    SCROBrailleLineVirtualStatus *_virtualStatus;
    BRLTBrailleStateManager *_stateManager;
    SCROBrailleFormatter *_brailleFormatter;
}

@property (readonly, nonatomic) BRLTBrailleStateManager *stateManager;
@property (retain, nonatomic) NSMutableArray *pendingBrailleStringDictionaries;
@property (nonatomic) BOOL editableFieldInterruptedByAlert;
@property (readonly, nonatomic) BOOL needsDisplayFlush;
@property (nonatomic) BOOL displayEnabled;
@property (nonatomic) BOOL wordWrapEnabled;
@property (nonatomic) BOOL isSingleLetterInputOn;
@property (nonatomic) BOOL isTextSearchModeOn;
@property (nonatomic) long long lineOffset;
@property (nonatomic) unsigned long long generationID;
@property (readonly, nonatomic) BOOL hasEdits;
@property (readonly, nonatomic) BOOL wantsEdits;
@property (weak, nonatomic) id<BRLTBrailleStateManagerDelegate> translationDelegate;
@property (readonly, nonatomic) NSAttributedString *editingString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (int)displayMode;
- (void)_flush;
- (void)setDisplayMode:(int)a0;
- (BOOL)panRight;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)display;
- (void)setFormatter:(id)a0;
- (BOOL)panLeft;
- (void)blinker;
- (BOOL)_blink:(BOOL)a0;
- (void)translate;
- (void)discardEdits;
- (id)appToken;
- (void)brailleDisplayInsertedCharacter:(id)a0;
- (void)brailleDisplayStringDidChange:(id)a0 brailleSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)printBrailleForText:(id)a0 language:(id)a1 mode:(unsigned long long)a2 textPositionsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 locations:(id *)a4;
- (void)brailleDisplayDeletedCharacter:(id)a0;
- (id)textForPrintBraille:(id)a0 language:(id)a1 mode:(unsigned long long)a2 locations:(id *)a3;
- (void)scriptSelectionDidChange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)replaceScriptStringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withScriptString:(id)a1 cursorLocation:(unsigned long long)a2;
- (void)didInsertScriptString:(id)a0;
- (void)setMasterStatusCellIndex:(long long)a0;
- (long long)masterStatusCellIndex;
- (void)setShowDotsSevenAndEight:(BOOL)a0;
- (BOOL)showDotsSevenAndEight;
- (id)initWithDriver:(id)a0 mainSize:(long long)a1 statusSize:(long long)a2;
- (id)newLineDescriptor;
- (long long)tokenForRouterIndex:(long long *)a0 location:(long long *)a1 appToken:(id *)a2;
- (BOOL)anyUnread;
- (BOOL)currentUnread;
- (BOOL)canPanLeft;
- (BOOL)canPanRight;
- (void)setVirtualStatus:(id)a0 alignment:(int)a1;
- (void)setRealStatus:(id)a0;
- (void)setMainSize:(long long)a0;
- (void)setStatusSize:(long long)a0;
- (id)translatedBrailleForTableIdentifier:(id)a0;
- (BOOL)insertBrailleStringAtCursor:(id)a0 modifiers:(id)a1;
- (long long)firstToken;
- (long long)lastToken;
- (BOOL)moveCursorLeft;
- (BOOL)moveCursorRight;
- (BOOL)moveCursorToRouterIndex:(unsigned long long)a0 forwardToScreenReader:(out BOOL *)a1 updateRouterLocation:(long long *)a2;
- (BOOL)deleteAtCursor;
- (BOOL)forwardDeleteAtCursor;
- (BOOL)getStatusRouterIndex:(long long *)a0 forRawIndex:(long long)a1;
- (id)spokenStringForInsertedBrailleString:(id)a0 speakLiterally:(out BOOL *)a1;
- (id)spokenStringForDeletedBrailleString:(id)a0 speakLiterally:(out BOOL *)a1;
- (void)setLineFocus:(int)a0;
- (void)setCurrentUnread:(BOOL)a0;
- (void)setAnyUnread:(BOOL)a0;
- (void)setAppToken:(id)a0;
- (int)lineFocus;
- (void)_updateOffsets;
- (BOOL)_allowInset;
- (BOOL)_insertBrailleStringAtCursor:(id)a0 modifiers:(id)a1 silently:(BOOL)a2;
- (BOOL)_forwardDeleteAtCursorSilently:(BOOL)a0;
- (BOOL)_deleteAtCursorSilently:(BOOL)a0;
- (void)enumerateWordsBetweenCharacters:(id)a0 text:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 usingBlock:(id /* block */)a3;
- (BOOL)_setMainCells:(const char *)a0 length:(long long)a1;
- (void)_flushRealStatus;
- (void)addAttributedStringToLineBuffer:(id)a0 brailleOffset:(unsigned long long)a1;
- (void)addAttributedPaddingToLineBuffer:(id)a0;
- (id)_translatedTextInIsolationForBraille:(id)a0 translationMode:(unsigned long long)a1;
- (id)_trimCommonPrefixWithString:(id)a0 fromString:(id)a1;
- (id)_translatedTextForPrefixBraille:(id)a0 printBraille:(id)a1 translationMode:(unsigned long long)a2;
- (id)_dotDescriptionForBrailleString:(id)a0;
- (id)_spokenStringForBrailleString:(id)a0 isDelete:(BOOL)a1 speakLiterally:(out BOOL *)a2;
- (id)newLineDescriptorWithoutPadding;
- (long long)_indexOfWhitespaceBeforeIBeam:(long long)a0 inLine:(id)a1;
- (long long)_indexOfWhitespaceAfterIBeam:(long long)a0 inLine:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRangeForBrailleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)bufferIndexForRouterIndex:(unsigned long long)a0;

@end
