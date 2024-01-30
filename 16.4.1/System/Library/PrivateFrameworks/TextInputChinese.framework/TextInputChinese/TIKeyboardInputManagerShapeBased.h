@class NSString, NSMutableString;

@interface TIKeyboardInputManagerShapeBased : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion> {
    BOOL _keepRemainingInput;
}

@property (readonly, nonatomic) NSMutableString *searchString;
@property (retain, nonatomic) NSString *remainingInput;
@property (nonatomic) BOOL previousActionWasAutoConfirmation;

- (void)clearInput;
- (unsigned int)inputIndex;
- (BOOL)usesCandidateSelection;
- (unsigned int)inputCount;
- (BOOL)acceptInputString:(id)a0;
- (BOOL)usesAutoDeleteWord;
- (void)setInputIndex:(unsigned int)a0;
- (id)searchStringForMarkedText;
- (BOOL)suppliesCompletions;
- (void)loadDictionaries;
- (void)acceptInput;
- (id)keyboardBehaviors;
- (BOOL)shouldExtendPriorWord;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)candidateResultSet;
- (BOOL)hasCandidates;
- (void).cxx_destruct;
- (unsigned long long)initialSelectedIndex;
- (id)didAcceptCandidate:(id)a0;
- (void)inputLocationChanged;
- (BOOL)isHardwareKeyboardAutocorrectionEnabled;
- (id)keyboardConfigurationLayoutTag;
- (id)rawInputString;
- (id)sortingMethods;
- (BOOL)supportsLearning;
- (void)cancelCandidatesThread;
- (id)formattedSearchString;
- (id)markedTextWithAutoconvertedCandidates;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (BOOL)shouldLookForCompletionCandidates;
- (BOOL)updateCandidatesWithTIWordSearch:(id)a0 predictionEnabled:(BOOL)a1;

@end
