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

- (BOOL)usesCandidateSelection;
- (BOOL)supportsNumberKeySelection;
- (BOOL)delayedCandidateList;
- (id)keyboardBehaviors;
- (void)clearInput;
- (BOOL)supportsSetPhraseBoundary;
- (id)keyEventMap;
- (id)wordCharacters;
- (void).cxx_destruct;
- (BOOL)usesLiveConversion;
- (unsigned int)inputIndex;
- (void)loadDictionaries;
- (unsigned int)inputCount;
- (id)inputString;
- (id)wordSearch;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (id)didAcceptCandidate:(id)a0;
- (void)loadFavoniusTypingModel;
- (id)convertString;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 inputManager:(id)a3 wordSearch:(id)a4;

@end
