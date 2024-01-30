@class TIWordSearch, NSString, TIKeyboardCandidate, NSSet, TIWordSearchCandidateResultSet;

@interface TIKeyboardInputManager_zh_Candidates : TIKeyboardInputManagerChinesePhonetic

@property (copy, nonatomic) NSString *inputString;
@property (copy, nonatomic) TIKeyboardCandidate *defaultCandidate;
@property (readonly, nonatomic) TIWordSearch *kbws;
@property (copy, nonatomic) NSString *autoCommitString;
@property (retain, nonatomic) TIWordSearchCandidateResultSet *wholePhraseCandidateResultSet;
@property (retain, nonatomic) TIWordSearchCandidateResultSet *lastCharacterCandidateResultSet;
@property (nonatomic) BOOL skipLastCharacterCandidates;
@property (copy, nonatomic) NSSet *autoSelectCandidates;
@property (retain, nonatomic) NSString *syntheticCandidate;

- (BOOL)delayedCandidateList;
- (BOOL)supportsNumberKeySelection;
- (id)keyboardConfiguration;
- (BOOL)usesLiveConversion;
- (id)handleKeyboardInput:(id)a0;
- (void).cxx_destruct;
- (id)candidateResultSetFromCandidates:(id)a0;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (void *)mecabraCandidateRefFromCandidate:(id)a0;
- (BOOL)shouldClearInputOnMarkedTextOutOfSync;
- (BOOL)supportsCandidateGeneration;
- (BOOL)hasIdeographicCandidates;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 wordSearch:(id)a2;
- (void)_notifyLastCharacterCandidate:(id)a0 forOperation:(id)a1;
- (void)_notifyUpdateCandidates;
- (void)_notifyWholePhraseCandidate:(id)a0 forOperation:(id)a1;
- (id)candidateResultSetFromCandidateResultSet:(id)a0 lastCharacterCandidateResultSet:(id)a1;
- (id)inputStringForLastCharacter:(id)a0;
- (BOOL)makeCandidatesWithInputString:(id)a0 autoCommitString:(id)a1 predictionEnabled:(BOOL)a2 reanalysisMode:(BOOL)a3 geometoryModelData:(id)a4;
- (void)performWordSearch:(id)a0 action:(SEL)a1 waitUntilFinished:(BOOL)a2;
- (id)punctuationCandiadtesFor:(id)a0 withAutoCommit:(id)a1;

@end
