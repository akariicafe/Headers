@class NSString, NSMutableString;

@interface TIKeyboardInputManagerShapeBased : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion> {
    BOOL _keepRemainingInput;
}

@property (readonly, nonatomic) NSMutableString *searchString;
@property (retain, nonatomic) NSString *remainingInput;
@property (nonatomic) BOOL previousActionWasAutoConfirmation;

- (BOOL)usesCandidateSelection;
- (id)searchStringForMarkedText;
- (BOOL)acceptInputString:(id)a0;
- (BOOL)suppliesCompletions;
- (id)keyboardBehaviors;
- (id)candidateResultSet;
- (void)clearInput;
- (void).cxx_destruct;
- (unsigned int)inputIndex;
- (BOOL)usesAutoDeleteWord;
- (BOOL)shouldExtendPriorWord;
- (BOOL)hasCandidates;
- (void)loadDictionaries;
- (unsigned long long)initialSelectedIndex;
- (unsigned int)inputCount;
- (void)setInputIndex:(unsigned int)a0;
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
