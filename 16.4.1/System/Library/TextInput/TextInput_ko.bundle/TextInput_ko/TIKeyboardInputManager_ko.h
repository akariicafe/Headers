@class TIWordSearch;

@interface TIKeyboardInputManager_ko : TIKeyboardInputManager_zh_ja {
    struct Hangul2SetAutomata { BOOL x0; unsigned short x1; unsigned short x2; int x3; struct __CFString *x4; struct HangulSyllable { unsigned short x0; unsigned short x1; unsigned short x2; } x5; struct HangulSyllable { unsigned short x0; unsigned short x1; unsigned short x2; } x6; BOOL x7; } *_batchConverter;
    BOOL _deleteSyllable;
    TIWordSearch *_wordSearch;
}

@property (readonly, nonatomic) struct Hangul2SetAutomata { BOOL x0; unsigned short x1; unsigned short x2; int x3; struct __CFString *x4; struct HangulSyllable { unsigned short x0; unsigned short x1; unsigned short x2; } x5; struct HangulSyllable { unsigned short x0; unsigned short x1; unsigned short x2; } x6; BOOL x7; } *batchConverter;

+ (Class)wordSearchClass;

- (void)clearInput;
- (BOOL)doesComposeText;
- (BOOL)canHandleKeyHitTest;
- (void)setInputIndex:(unsigned int)a0;
- (id)internalStringToExternal:(id)a0;
- (void)setInput:(id)a0;
- (void *)initImplementation;
- (id)externalStringToInternal:(id)a0;
- (void)acceptInput;
- (void)dealloc;
- (BOOL)shouldExtendPriorWord;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void).cxx_destruct;
- (BOOL)acceptsCharacter:(unsigned int)a0;
- (void)addInput:(id)a0 withContext:(id)a1;
- (id)autocorrectionListWithCandidateCount:(unsigned long long)a0;
- (BOOL)dictionaryUsesExternalEncoding;
- (void)loadFavoniusTypingModel;
- (id)rawInputString;
- (void)setAutoCorrects:(BOOL)a0;
- (void)setLearnsCorrection:(BOOL)a0;
- (BOOL)supportsLearning;
- (void)syncToLayoutState:(id)a0;
- (void)textAccepted:(id)a0 fromPredictiveInputBar:(BOOL)a1 withInput:(id)a2;
- (BOOL)usesMarkedTextForInput;
- (id)validCharacterSetForAutocorrection;
- (struct USet { } *)validUSetForAutocorrection;
- (BOOL)whiteSpaceEndsSentence;
- (id)wordSearch;
- (id)autocorrectionListFromWordSearchCandidateResultSet:(id)a0 emojiCandidates:(id)a1;
- (id)composeJamo:(id)a0;

@end
