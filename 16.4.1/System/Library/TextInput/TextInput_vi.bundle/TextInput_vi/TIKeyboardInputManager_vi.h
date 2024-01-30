@class NSNumber;

@interface TIKeyboardInputManager_vi : TIKeyboardInputManager_mul {
    void **m_transliterator;
    BOOL m_useInternalIndex;
    NSNumber *m_lexiconID;
}

@property (readonly, nonatomic) unsigned int lexiconID;

+ (void)cleanupUnikey;
+ (void)setupUnikey;

- (BOOL)usesRetrocorrection;
- (BOOL)doesComposeText;
- (unsigned int)inputIndex;
- (void **)createTransliterator;
- (void)updateUnikeyWithVietnameseType:(int)a0;
- (void)setInputIndex:(unsigned int)a0;
- (id)internalStringToExternal:(id)a0;
- (void *)initImplementation;
- (id)externalStringToInternal:(id)a0;
- (void)acceptInput;
- (BOOL)shouldDynamicallySwitchComposedTextBetweenInternalAndExternal;
- (id)internalStringToExternal:(id)a0 ignoreCompositionDisabled:(BOOL)a1;
- (unsigned long long)deleteLengthForString:(id)a0;
- (id)decomposeTelex:(id)a0;
- (void)dealloc;
- (int)vietnameseType;
- (BOOL)inputTypeSupportsDecomposition;
- (id)addInput:(id)a0 flags:(unsigned int)a1 point:(struct CGPoint { double x0; double x1; })a2 firstDelete:(unsigned long long *)a3;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)externalStringToInternal:(id)a0 ignoreCompositionDisabled:(BOOL)a1;
- (void).cxx_destruct;
- (void)setInput:(id)a0 withIndex:(unsigned int)a1;
- (BOOL)canHandleCharacter:(unsigned short)a0;

@end
