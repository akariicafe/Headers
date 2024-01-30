@class NSString, NSMutableArray, TIMathSymbolPunctuationController;

@interface TIKeyboardInputManager_ja_Romaji : TIKeyboardInputManager_ja {
    NSMutableArray *_externalIndexToInternalIndexMappingArray;
    unsigned long long _externalInputIndex;
    NSString *_externalString;
    TIMathSymbolPunctuationController *_mathSymbolPunctuationController;
}

+ (Class)wordSearchClass;

- (BOOL)usesCandidateSelection;
- (void)updateState;
- (void)clearInput;
- (id)wordCharacters;
- (void).cxx_destruct;
- (unsigned int)inputIndex;
- (BOOL)shouldFixupIncompleteRomaji;
- (void)loadDictionaries;
- (void)dealloc;
- (unsigned int)inputCount;
- (id)inputString;
- (void)setInputIndex:(unsigned int)a0;
- (id)validCharacterSetForAutocorrection;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })analysisStringRange;
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
