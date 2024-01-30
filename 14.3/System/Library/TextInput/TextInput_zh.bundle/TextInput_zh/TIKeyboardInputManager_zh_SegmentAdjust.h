@class TIMecabraIMLogger, NSString, TIKeyboardCandidate, NSArray, TIWordSearch, TIZhuyinInputManager;

@interface TIKeyboardInputManager_zh_SegmentAdjust : TIKeyboardInputManager_zh_ja {
    TIWordSearch *_wordSearch;
}

@property (copy, nonatomic) TIZhuyinInputManager *inputManager;
@property (readonly, copy, nonatomic) TIMecabraIMLogger *logger;
@property (copy, nonatomic) id /* block */ candidateGenerationCompletionHandler;
@property (copy, nonatomic) TIKeyboardCandidate *currentCandidate;
@property (copy, nonatomic) NSString *remainingInput;
@property long long segmentIndex;
@property (copy, nonatomic) NSArray *segments;

- (void)clearInput;
- (id)keyboardBehaviors;
- (BOOL)usesCandidateSelection;
- (BOOL)supportsNumberKeySelection;
- (void).cxx_destruct;
- (BOOL)supportsSetPhraseBoundary;
- (id)inputString;
- (BOOL)delayedCandidateList;
- (unsigned int)inputCount;
- (id)wordCharacters;
- (void)loadDictionaries;
- (BOOL)usesLiveConversion;
- (id)keyEventMap;
- (unsigned int)inputIndex;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (id)wordSearch;
- (id)didAcceptCandidate:(id)a0;
- (void)loadFavoniusTypingModel;
- (id)convertString;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 inputManager:(id)a3 wordSearch:(id)a4;

@end
