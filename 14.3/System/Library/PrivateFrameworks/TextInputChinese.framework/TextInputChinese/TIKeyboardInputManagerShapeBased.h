@class NSString, NSMutableString;

@interface TIKeyboardInputManagerShapeBased : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion> {
    BOOL _keepRemainingInput;
}

@property (readonly, nonatomic) NSMutableString *searchString;
@property (retain, nonatomic) NSString *remainingInput;
@property (nonatomic) BOOL previousActionWasAutoConfirmation;

- (id)searchStringForMarkedText;
- (BOOL)suppliesCompletions;
- (void)clearInput;
- (id)keyboardBehaviors;
- (BOOL)usesCandidateSelection;
- (BOOL)acceptInputString:(id)a0;
- (BOOL)usesAutoDeleteWord;
- (void)setInputIndex:(unsigned int)a0;
- (void).cxx_destruct;
- (unsigned int)inputCount;
- (unsigned long long)initialSelectedIndex;
- (void)loadDictionaries;
- (id)candidateResultSet;
- (BOOL)hasCandidates;
- (unsigned int)inputIndex;
- (BOOL)shouldExtendPriorWord;
- (BOOL)supportsLearning;
- (id)keyboardConfigurationLayoutTag;
- (id)rawInputString;
- (void)inputLocationChanged;
- (id)didAcceptCandidate:(id)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)acceptInput;
- (id)sortingMethods;
- (BOOL)isHardwareKeyboardAutocorrectionEnabled;
- (BOOL)shouldLookForCompletionCandidates;
- (id)formattedSearchString;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (BOOL)updateCandidatesWithTIWordSearch:(id)a0 predictionEnabled:(BOOL)a1;
- (void)cancelCandidatesThread;
- (id)markedTextWithAutoconvertedCandidates;

@end
