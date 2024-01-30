@class BRLTScriptString, NSRecursiveLock, BRLTBrailleBuffer, NSMutableArray, BRLTBrailleString;
@protocol BRLTBrailleStateManagerDelegate, BRLTBrailleTranslationDelegateProtocol;

@interface BRLTBrailleStateManager : NSObject <NSCopying> {
    BRLTScriptString *_scriptString;
    BRLTBrailleBuffer *_brailleBuffer;
    BRLTBrailleString *_staticBrailleString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _scriptForwardEditingRegion;
    struct _NSRange { unsigned long long location; unsigned long long length; } _scriptBackwardEditingRegion;
    struct _NSRange { unsigned long long location; unsigned long long length; } _scriptMergeEditingRegion;
    struct _NSRange { unsigned long long location; unsigned long long length; } _brailleForwardEditingRegion;
    struct _NSRange { unsigned long long location; unsigned long long length; } _brailleBackwardEditingRegion;
    struct _NSRange { unsigned long long location; unsigned long long length; } _brailleMergeEditingRegion;
    struct _NSRange { unsigned long long location; unsigned long long length; } _activeScriptEditingRegion;
    struct _NSRange { unsigned long long location; unsigned long long length; } _activeBrailleEditingRegion;
    struct _NSRange { unsigned long long location; unsigned long long length; } _brailleSelection;
    struct _NSRange { unsigned long long location; unsigned long long length; } _brailleFocus;
    BOOL _brailleDirty;
    BOOL _scriptDirty;
    id<BRLTBrailleStateManagerDelegate> _delegate;
    id<BRLTBrailleTranslationDelegateProtocol> _translationDelegate;
    struct _NSRange { unsigned long long location; unsigned long long length; } _pendingScriptSelection;
    NSRecursiveLock *_apiLock;
    NSMutableArray *_runningScriptStringHistory;
    double _lastScriptStringOutputTime;
}

@property (readonly, nonatomic) BRLTBrailleBuffer *brailleBuffer;
@property (nonatomic) BOOL editable;
@property (nonatomic) unsigned long long inputTranslationMode;
@property (nonatomic) unsigned long long outputTranslationMode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDelegate:(id)a0;
- (void)translate;
- (void)_translate:(BOOL)a0;
- (void)insertBrailleChar:(id)a0;
- (BOOL)deleteBrailleChar;
- (id)initWithDelegate:(id)a0 translationDelegate:(id)a1;
- (void)insertBrailleChar:(id)a0 silently:(BOOL)a1;
- (void)_generateBrailleBufferForInsert;
- (id)brailleDisplayString;
- (BOOL)_generateBrailleBuffer:(BOOL)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })backwardEditingAtomForScriptString:(id)a0;
- (BOOL)_deleteBrailleCharSilently:(BOOL)a0;
- (BOOL)_selectionIsValidForDelete;
- (BOOL)_generateBrailleBufferForDelete;
- (BOOL)_forwardDeleteBrailleCharSilently:(BOOL)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })brailleSelection;
- (void)setBrailleSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_setBrailleSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 newScriptLocation:(out unsigned long long *)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_textRangeForBrailleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 textPositions:(id)a1 scriptLength:(long long)a2;
- (BOOL)_selectionIsValidForInsert;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })forwardEditingAtomForScriptString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })deleteMergeAtomForScriptString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_brailleRangeForTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 textPositions:(id)a1 brailleLength:(unsigned long long)a2;
- (unsigned long long)scriptLocationForBrailleLocation:(unsigned long long)a0;
- (void)setTranslationDelegate:(id)a0;
- (id)translationDelegate;
- (void)setScriptString:(id)a0;
- (BOOL)deleteBrailleCharSilently;
- (BOOL)forwardDeleteBrailleChar;
- (BOOL)forwardDeleteBrailleCharSilently;
- (void)setBrailleSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 needsForwardToScreenReader:(out BOOL *)a1 newScriptLocation:(out unsigned long long *)a2;
- (void)translateForced:(BOOL)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })brailleFocus;
- (id)outputScriptString;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })scriptEditingRange;
- (unsigned long long)brailleLocationForScriptLocation:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })brailleRangeForScriptRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })scriptRangeForBrailleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })scriptRangeOfBrailleCellRepresentingCharacterAtScriptIndex:(unsigned long long)a0;

@end
