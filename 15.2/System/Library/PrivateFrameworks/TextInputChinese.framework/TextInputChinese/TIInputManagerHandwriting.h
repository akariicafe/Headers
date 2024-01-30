@class TIHandwritingStrokes, RecognizerProvider, CHRecognizer, NSArray, NSString, NSMutableDictionary, NSLocale, CIMCandidateData, NSMutableArray;

@interface TIInputManagerHandwriting : TIKeyboardInputManager <TIKeyboardActivityObserving> {
    BOOL _showingCompletionCandidates;
    id /* block */ _contactObserver;
    id _userDictionaryObserver;
    id _dictionaryUpdateObserver;
}

@property (nonatomic) BOOL isInCompletionMode;
@property (nonatomic) BOOL shouldLearnAcceptedCandidate;
@property (retain, nonatomic) TIHandwritingStrokes *userDrawing;
@property (nonatomic) BOOL showingFacemarks;
@property (readonly, nonatomic) NSArray *facemarkCandidates;
@property (readonly, nonatomic) CIMCandidateData *candidateData;
@property (retain, nonatomic) NSArray *candidates;
@property (retain, nonatomic) NSMutableDictionary *candidateRefsDictionary;
@property (retain, nonatomic) NSMutableArray *committedCandidates;
@property (readonly, nonatomic) NSLocale *recognitionLanguage;
@property (readonly) CHRecognizer *recognizer;
@property (readonly, nonatomic) RecognizerProvider *recognizerProvider;
@property (retain, nonatomic) NSArray *proactiveTriggers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)usesCandidateSelection;
- (id)searchStringForMarkedText;
- (BOOL)suppliesCompletions;
- (id)candidateResultSet;
- (unsigned long long)autoquoteType;
- (void)clearInput;
- (id)addInputObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)suppressPlaceholderCandidate;
- (BOOL)usesAutoDeleteWord;
- (void)suspend;
- (void)loadDictionaries;
- (id)defaultCandidate;
- (unsigned long long)initialSelectedIndex;
- (void)dealloc;
- (void)keyboardActivityDidTransition:(id)a0;
- (void)cancelRecognition;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (void)deleteFromInputWithContext:(id)a0;
- (int)mecabraLanguage;
- (void)clearObservers;
- (void)updateUserWordEntries;
- (void)updateDictionaryPaths;
- (void)syncMarkedTextForKeyboardState:(id)a0 afterContextChange:(BOOL)a1;
- (id)keyboardConfigurationLayoutTag;
- (BOOL)shouldCommitInputString;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)inputLocationChanged;
- (id)didAcceptCandidate:(id)a0;
- (void *)initImplementation;
- (void)setLearnsCorrection:(BOOL)a0;
- (BOOL)shouldEnableHalfWidthPunctuationForCurrentInputContext;
- (BOOL)updateCompletionCandidatesIfAppropriate;
- (BOOL)shouldLookForCompletionCandidates;
- (void)mainThreadUpdateCandidates:(id)a0;
- (void)updateAddressBook;
- (BOOL)shouldUpdateDictionaryPaths;
- (id)keyboardCandidateResultSetFromResults;
- (BOOL)isDummyCandidate:(id)a0;
- (id)markedTextForDefaultCandidate;
- (id)historyForRecognition;
- (BOOL)updateCandidates;
- (void)clearCandidateRefsDictionary;
- (unsigned long long)predictionOptions:(BOOL)a0;
- (void)resetCompletionStates;
- (id)processCandidates:(id)a0;

@end
