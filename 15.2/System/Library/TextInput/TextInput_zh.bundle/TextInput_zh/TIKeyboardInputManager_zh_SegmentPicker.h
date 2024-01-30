@class TIWordSearch, NSString, NSArray, NSMutableArray;

@interface TIKeyboardInputManager_zh_SegmentPicker : TIKeyboardInputManager_zh_ja {
    NSMutableArray *_segments;
}

@property (copy, nonatomic) TIWordSearch *kbws;
@property (copy, nonatomic) NSString *rawInputString;
@property (copy, nonatomic) NSString *inputString;
@property (copy, nonatomic) NSString *autoCommitString;
@property (nonatomic) unsigned int inputIndex;
@property (copy, nonatomic) NSString *remainingInput;
@property (copy, nonatomic) NSArray *originalSegments;
@property (retain, nonatomic) NSString *alternateDisplayString;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) NSArray *segments;

- (BOOL)usesCandidateSelection;
- (id)searchStringForMarkedText;
- (BOOL)supportsNumberKeySelection;
- (BOOL)delayedCandidateList;
- (id)keyboardBehaviors;
- (id)candidateResultSet;
- (id)markedText;
- (BOOL)supportsSetPhraseBoundary;
- (id)keyEventMap;
- (void).cxx_destruct;
- (BOOL)usesLiveConversion;
- (void)loadDictionaries;
- (unsigned long long)phraseBoundary;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void)openCandidateGenerationContextWithCompletionHandler:(id /* block */)a0;
- (BOOL)closeCandidateGenerationContextWithResults:(id)a0;
- (id)didAcceptCandidate:(id)a0;
- (void)loadFavoniusTypingModel;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (void)updateMarkedText;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 at:(unsigned long long)a3 wordSearch:(id)a4;
- (id)convertString;

@end
