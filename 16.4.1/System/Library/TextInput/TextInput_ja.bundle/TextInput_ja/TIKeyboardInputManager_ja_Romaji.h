@class NSString, NSMutableArray, TIMathSymbolPunctuationController;

@interface TIKeyboardInputManager_ja_Romaji : TIKeyboardInputManager_ja {
    NSMutableArray *_externalIndexToInternalIndexMappingArray;
    unsigned long long _externalInputIndex;
    NSString *_externalString;
    TIMathSymbolPunctuationController *_mathSymbolPunctuationController;
}

+ (Class)wordSearchClass;

- (void)clearInput;
- (id)wordCharacters;
- (unsigned int)inputIndex;
- (BOOL)usesCandidateSelection;
- (unsigned int)inputCount;
- (void)setInputIndex:(unsigned int)a0;
- (void)loadDictionaries;
- (void)dealloc;
- (id)inputString;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)deleteFromInput:(unsigned long long *)a0;
- (BOOL)shouldFixupIncompleteRomaji;
- (id)handleKeyboardInput:(id)a0;
- (void)updateState;
- (void).cxx_destruct;
- (void)checkAutocorrectionDictionaries;
- (void)addInput:(id)a0 withContext:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })analysisStringRange;
- (void)inputLocationChanged;
- (id)remainingInput;
- (id)validCharacterSetForAutocorrection;
- (id)_convertStringWithBoundary:(unsigned long long)a0;
- (unsigned long long)actualInternalInputIndex;
- (id)liveConversionTextInputManager;
- (unsigned long long)remainingInputLengthOfCandidate:(id)a0;
- (id)transliterate:(id)a0;

@end
