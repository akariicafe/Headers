@class TIHandwritingStrokes, RecognizerProvider, CHRecognizer, NSArray, TIWordSearchHandwriting, NSMutableDictionary, NSLocale, NSString, CIMCandidateData, NSMutableArray;

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
@property (readonly, nonatomic) TIWordSearchHandwriting *wordSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)wordSearchClass;

- (void)clearInput;
- (id)addInputObject:(id)a0;
- (BOOL)usesCandidateSelection;
- (BOOL)usesAutoDeleteWord;
- (id)searchStringForMarkedText;
- (BOOL)suppliesCompletions;
- (void *)initImplementation;
- (void)loadDictionaries;
- (BOOL)suppressPlaceholderCandidate;
- (void)keyboardActivityDidTransition:(id)a0;
- (void)suspend;
- (void)dealloc;
- (unsigned long long)autoquoteType;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)candidateResultSet;
- (void).cxx_destruct;
- (id)defaultCandidate;
- (unsigned long long)initialSelectedIndex;
- (void)cancelRecognition;
- (int)mecabraLanguage;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)clearObservers;
- (void)deleteFromInputWithContext:(id)a0;
- (id)didAcceptCandidate:(id)a0;
- (void)inputLocationChanged;
- (id)keyboardConfigurationLayoutTag;
- (void)setLearnsCorrection:(BOOL)a0;
- (BOOL)shouldCommitInputString;
- (void)syncMarkedTextForKeyboardState:(id)a0 afterContextChange:(BOOL)a1;
- (void)updateAddressBook;
- (void)updateDictionaryPaths;
- (void)updateUserWordEntries;
- (void)clearCandidateRefsDictionary;
- (id)historyForRecognition;
- (BOOL)isDummyCandidate:(id)a0;
- (id)keyboardCandidateResultSetFromResults;
- (void)mainThreadUpdateCandidates:(id)a0;
- (id)markedTextForDefaultCandidate;
- (unsigned long long)predictionOptions:(BOOL)a0;
- (id)processCandidates:(id)a0;
- (void)resetCompletionStates;
- (BOOL)shouldEnableHalfWidthPunctuationForCurrentInputContext;
- (BOOL)shouldLookForCompletionCandidates;
- (BOOL)shouldUpdateDictionaryPaths;
- (BOOL)updateCandidates;
- (BOOL)updateCompletionCandidatesIfAppropriate;

@end
