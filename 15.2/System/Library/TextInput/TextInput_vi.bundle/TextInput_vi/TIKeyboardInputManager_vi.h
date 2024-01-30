@interface TIKeyboardInputManager_vi : TIKeyboardInputManager {
    void **m_transliterator;
    BOOL m_compositionDisabled;
    BOOL m_useInternalIndex;
}

+ (void)setupUnikey;
+ (void)cleanupUnikey;

- (BOOL)doesComposeText;
- (unsigned int)inputIndex;
- (void)dealloc;
- (void)setInputIndex:(unsigned int)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)externalStringToInternal:(id)a0;
- (id)internalStringToExternal:(id)a0;
- (unsigned int)internalIndexToExternal:(unsigned int)a0;
- (unsigned int)externalIndexToInternal:(unsigned int)a0;
- (void *)initImplementation;
- (id)addInput:(id)a0 flags:(unsigned int)a1 point:(struct CGPoint { double x0; double x1; })a2 firstDelete:(unsigned long long *)a3;
- (void)setInput:(id)a0 withIndex:(unsigned int)a1;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)acceptInput;
- (int)vietnameseType;
- (void **)createTransliterator;
- (BOOL)inputTypeSupportsDecomposition;
- (id)decomposeTelex:(id)a0;
- (void)updateUnikeyWithVietnameseType:(int)a0;
- (BOOL)canHandleCharacter:(unsigned short)a0;
- (unsigned long long)deleteLengthForString:(id)a0;

@end
