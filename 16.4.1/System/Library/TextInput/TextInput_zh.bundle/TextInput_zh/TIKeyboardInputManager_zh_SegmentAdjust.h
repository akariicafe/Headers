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
- (id)wordCharacters;
- (unsigned int)inputIndex;
- (BOOL)usesCandidateSelection;
- (unsigned int)inputCount;
- (BOOL)delayedCandidateList;
- (BOOL)supportsNumberKeySelection;
- (void)loadDictionaries;
- (BOOL)supportsSetPhraseBoundary;
- (BOOL)usesLiveConversion;
- (id)keyboardBehaviors;
- (id)inputString;
- (id)keyEventMap;
- (id)handleKeyboardInput:(id)a0;
- (void).cxx_destruct;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (id)didAcceptCandidate:(id)a0;
- (void)loadFavoniusTypingModel;
- (id)wordSearch;
- (id)convertString;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 inputManager:(id)a3 wordSearch:(id)a4;

@end
