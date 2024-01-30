@class TIWordSearch, NSString, TIMathSymbolPunctuationController, NSOperationQueue, CIMCandidateData;

@interface TIKeyboardInputManagerChinese : TIKeyboardInputManager_zh_ja {
    TIWordSearch *_wordSearch;
}

@property (readonly) CIMCandidateData *candidateData;
@property (readonly) NSOperationQueue *operationQueue;
@property (readonly) TIMathSymbolPunctuationController *mathSymbolPunctuationController;
@property BOOL duringDeleteFromInputWithContext;
@property (nonatomic) BOOL isAlphabeticPlane;
@property (copy, nonatomic) NSString *pairedPunctuationOpenQuote;
@property (copy, nonatomic) NSString *pairedPunctuationSelectedText;
@property (readonly, nonatomic) unsigned long long predictionOptions;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *modeName;
@property (nonatomic) BOOL isInCompletionMode;
@property (nonatomic) BOOL shouldLearnAcceptedCandidate;
@property (copy, nonatomic) NSString *currentKeyHint;

+ (Class)wordSearchClass;
+ (id)GB18030CandidateFromString:(id)a0;
+ (id)pairedPunctuationDictionary;
+ (id)punctuationPredictionsForString:(id)a0;
+ (BOOL)shouldEnableHalfWidthPunctuationForDocumentContext:(id)a0 composedText:(id)a1;
+ (id)unicodeCandidateFromString:(id)a0;

- (void)clearInput;
- (id)wordCharacters;
- (id)searchStringForMarkedText;
- (void)setInput:(id)a0;
- (id)replacementForDoubleSpace;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void).cxx_destruct;
- (id)firstCandidate;
- (unsigned long long)initialSelectedIndex;
- (id)sortMethodsGroupsForCandidates:(id)a0;
- (BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)a0;
- (id)candidateResultSetFromCandidates:(id)a0 proactiveTriggers:(id)a1;
- (void)deleteFromInputWithContext:(id)a0;
- (id)didAcceptCandidate:(id)a0;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1;
- (void)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1 completion:(id /* block */)a2;
- (void)inputLocationChanged;
- (void)loadFavoniusTypingModel;
- (void)setLearnsCorrection:(BOOL)a0;
- (id)sortingMethods;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (void)syncToLayoutState:(id)a0;
- (id)titleForSortingMethod:(id)a0;
- (id)wordSearch;
- (BOOL)supportsPairedPunctutationInput;
- (void)acceptFirstCandidateWithContext:(id)a0;
- (id)candidateResultSetUsedForCompletionQuery;
- (id)completionCandidateResultSetForKeyHint:(id)a0;
- (id)generateCompletions;
- (BOOL)handlePairedPunctuationInput:(id)a0 context:(id)a1;
- (BOOL)hasIdeographicCandidates;
- (void *)initImplementationWithMode:(id)a0 andLanguage:(id)a1;
- (BOOL)isFacemarkInput:(id)a0;
- (void *)mecabraCandidateRefFromPointerValue:(id)a0;
- (id)outputByConvertingDecimalPointForInput:(id)a0;
- (void)resetCommitHistory;
- (BOOL)shouldEnableHalfWidthPunctuationForCurrentInputContext;
- (BOOL)shouldSearchCompletionForSubstrings;
- (BOOL)showingFacemarkCandidates;
- (BOOL)updateCompletionCandidatesIfAppropriate;
- (void)willExitCompletionMode;
- (void)wordSearchEngineDidFindPredictionCandidates:(id)a0;

@end
