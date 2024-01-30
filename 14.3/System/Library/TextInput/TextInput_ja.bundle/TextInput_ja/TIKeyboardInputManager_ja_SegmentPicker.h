@class TIWordSearch, NSString, TIKeyboardCandidate, TILiveConversionSegments, NSArray;

@interface TIKeyboardInputManager_ja_SegmentPicker : TIKeyboardInputManager_zh_ja {
    TIWordSearch *_wordSearch;
}

@property (copy, nonatomic) NSString *remainingInput;
@property (copy, nonatomic) id /* block */ syncKeyboardStateHandler;
@property (retain, nonatomic) TILiveConversionSegments *liveConversionSegments;
@property (copy, nonatomic) TIKeyboardCandidate *currentCandidate;
@property (nonatomic) BOOL supportsSetPhraseBoundary;
@property (nonatomic) BOOL shouldShowCandidateWindow;
@property (nonatomic) long long transliterationType;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) NSArray *segments;

- (id)searchStringForMarkedText;
- (id)keyboardBehaviors;
- (BOOL)usesCandidateSelection;
- (id)markedText;
- (unsigned long long)phraseBoundary;
- (void).cxx_destruct;
- (id)inputString;
- (BOOL)delayedCandidateList;
- (unsigned int)inputCount;
- (id)wordCharacters;
- (void)loadDictionaries;
- (id)candidateResultSet;
- (BOOL)syncToKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)usesLiveConversion;
- (id)keyEventMap;
- (BOOL)commitsAcceptedCandidate;
- (unsigned int)inputIndex;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (id)wordSearch;
- (void)openCandidateGenerationContextWithCompletionHandler:(id /* block */)a0;
- (BOOL)closeCandidateGenerationContextWithResults:(id)a0;
- (id)rawInputString;
- (id)didAcceptCandidate:(id)a0;
- (void)loadFavoniusTypingModel;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (void)_selectPartialCandidate:(id)a0 forOperation:(id)a1;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 at:(unsigned long long)a3 wordSearch:(id)a4;
- (void)selectCandidate:(id)a0;

@end
