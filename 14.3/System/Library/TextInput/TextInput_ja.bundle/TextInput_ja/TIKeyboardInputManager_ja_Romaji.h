@class NSString, NSMutableArray, TIMathSymbolPunctuationController;

@interface TIKeyboardInputManager_ja_Romaji : TIKeyboardInputManager_ja {
    NSMutableArray *_externalIndexToInternalIndexMappingArray;
    unsigned long long _externalInputIndex;
    NSString *_externalString;
    TIMathSymbolPunctuationController *_mathSymbolPunctuationController;
}

+ (Class)wordSearchClass;

- (void)clearInput;
- (BOOL)usesCandidateSelection;
- (void)setInputIndex:(unsigned int)a0;
- (void)updateState;
- (void).cxx_destruct;
- (void)dealloc;
- (id)inputString;
- (unsigned int)inputCount;
- (id)wordCharacters;
- (BOOL)shouldFixupIncompleteRomaji;
- (void)loadDictionaries;
- (unsigned int)inputIndex;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })analysisStringRange;
- (id)validCharacterSetForAutocorrection;
- (id)handleKeyboardInput:(id)a0;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)inputLocationChanged;
- (id)remainingInput;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)checkAutocorrectionDictionaries;
- (id)liveConversionTextInputManager;
- (id)transliterate:(id)a0;
- (unsigned long long)actualInternalInputIndex;
- (id)_convertStringWithBoundary:(unsigned long long)a0;
- (unsigned long long)remainingInputLengthOfCandidate:(id)a0;

@end
