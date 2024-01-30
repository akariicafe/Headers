@interface TIKeyboardInputManager_ko : TIKeyboardInputManager {
    struct Hangul2SetAutomata { BOOL x0; unsigned short x1; unsigned short x2; int x3; struct __CFString *x4; struct HangulSyllable { unsigned short x0; unsigned short x1; unsigned short x2; } x5; struct HangulSyllable { unsigned short x0; unsigned short x1; unsigned short x2; } x6; } *_batchConverter;
    BOOL _deleteSyllable;
}

@property (readonly, nonatomic) struct Hangul2SetAutomata { BOOL x0; unsigned short x1; unsigned short x2; int x3; struct __CFString *x4; struct HangulSyllable { unsigned short x0; unsigned short x1; unsigned short x2; } x5; struct HangulSyllable { unsigned short x0; unsigned short x1; unsigned short x2; } x6; } *batchConverter;

- (BOOL)canHandleKeyHitTest;
- (BOOL)doesComposeText;
- (void)clearInput;
- (BOOL)shouldExtendPriorWord;
- (void)setInput:(id)a0;
- (void)dealloc;
- (void)setInputIndex:(unsigned int)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (void)textAccepted:(id)a0 fromPredictiveInputBar:(BOOL)a1 withInput:(id)a2;
- (BOOL)supportsLearning;
- (id)externalStringToInternal:(id)a0;
- (id)internalStringToExternal:(id)a0;
- (BOOL)acceptsCharacter:(unsigned int)a0;
- (BOOL)dictionaryUsesExternalEncoding;
- (void)syncToLayoutState:(id)a0;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void *)initImplementation;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)acceptInput;
- (id)composeJamo:(id)a0;

@end
