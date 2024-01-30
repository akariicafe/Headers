@class TIWordSearch, NSString, TIKeyboardCandidate, TICandidateSorter;

@interface TIKeyboardInputManager_ja_Candidates : TIKeyboardInputManager_zh_ja {
    TIWordSearch *_wordSearch;
}

@property (copy, nonatomic) TICandidateSorter *candidateSorter;
@property (copy, nonatomic) NSString *inputString;
@property (copy, nonatomic) TIKeyboardCandidate *defaultCandidate;
@property (copy, nonatomic) NSString *autoCommitString;
@property (nonatomic) BOOL showsPartialCandidate;
@property (nonatomic) BOOL autoSelectFirstCandidate;
@property (nonatomic) NSString *autoSelectCandidate;
@property (nonatomic) long long autoSelectTransliterateCandidate;

+ (id)sortTitleFromSort:(unsigned long long)a0;
+ (unsigned long long)sortFromSortTitle:(id)a0;

- (void).cxx_destruct;
- (BOOL)delayedCandidateList;
- (id)keyboardConfiguration;
- (void)loadDictionaries;
- (BOOL)usesLiveConversion;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)supportsCandidateGeneration;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (id)wordSearch;
- (id)candidateResultSetFromCandidates:(id)a0;
- (id)candidateResultSetFromCandidates:(id)a0 proactiveTriggers:(id)a1;
- (void)loadFavoniusTypingModel;
- (BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)a0;
- (id)titleForSortingMethod:(id)a0;
- (id)sortingMethods;
- (id)indexTitlesForGroupTitles:(id)a0 sortingMethod:(id)a1;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 wordSearch:(id)a2;
- (void)_notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (BOOL)makeCandidatesWithInputString:(id)a0 autoCommitString:(id)a1 contextString:(id)a2 predictionEnabled:(BOOL)a3 reanalysisMode:(BOOL)a4 singlePhrase:(BOOL)a5 geometoryModelData:(id)a6;
- (long long)indexFromTransliterationType:(long long)a0;
- (id)transliterationCandidates;

@end
