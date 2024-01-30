@class TIWordSearch, NSString, TIKeyboardCandidate, NSArray;
@protocol TIMarkedTextBuffer;

@interface TIKeyboardInputManager_ja_Inline : TIKeyboardInputManager_ja_Base {
    TIWordSearch *_wordSearch;
}

@property (retain, nonatomic) id<TIMarkedTextBuffer> markedTextBuffer;
@property (retain, nonatomic) TIKeyboardCandidate *inlineCandidate;
@property (copy, nonatomic) NSString *remainingInput;
@property (retain, nonatomic) NSArray *segments;
@property (nonatomic) BOOL romajiMode;

- (id)searchStringForMarkedText;
- (id)candidateResultSet;
- (void)clearInput;
- (id)wordCharacters;
- (void).cxx_destruct;
- (unsigned int)inputIndex;
- (void)setMarkedText;
- (unsigned int)inputCount;
- (id)inputString;
- (unsigned long long)phraseBoundary;
- (id)wordSearch;
- (id)geometryModelData;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (id)handleKeyboardInput:(id)a0;
- (void)commitComposition;
- (void)abortComposition;
- (void)openCandidateGenerationContextWithCompletionHandler:(id /* block */)a0;
- (id)keyboardConfigurationLayoutTag;
- (id)rawInputString;
- (void)syncToKeyboardState:(id)a0;
- (void)addInput:(id)a0 withContext:(id)a1;
- (id)didAcceptCandidate:(id)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 wordSearch:(id)a2 romajiMode:(BOOL)a3;
- (void)invokeEditMode;
- (void)generateInlineCandidate;
- (void)deleteLastCharacter:(unsigned long long *)a0;
- (BOOL)shouldSkipCandidateGeneration;
- (void)removeInlineCandidate:(id)a0;
- (id)convertString;
- (unsigned int)rawInputIndex;
- (BOOL)isEditMode;
- (void)syncWithEditMode:(id)a0;

@end
