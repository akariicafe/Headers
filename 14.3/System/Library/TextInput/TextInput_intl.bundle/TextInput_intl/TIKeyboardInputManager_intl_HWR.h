@class CHRecognizer, NSArray, TIHandwritingStrokes;

@interface TIKeyboardInputManager_intl_HWR : TIKeyboardInputManager

@property (readonly, nonatomic) CHRecognizer *recognizer;
@property (retain, nonatomic) TIHandwritingStrokes *userDrawing;
@property (retain, nonatomic) NSArray *candidates;

- (BOOL)suppliesCompletions;
- (void)clearInput;
- (id)keyboardBehaviors;
- (BOOL)usesCandidateSelection;
- (BOOL)usesAutoDeleteWord;
- (BOOL)canHandleKeyHitTest;
- (void).cxx_destruct;
- (unsigned int)inputCount;
- (id)defaultCandidate;
- (unsigned long long)initialSelectedIndex;
- (void)loadDictionaries;
- (id)candidateResultSet;
- (BOOL)shouldExtendPriorWord;
- (id)handleKeyboardInput:(id)a0;
- (void)deleteFromInputWithContext:(id)a0;
- (BOOL)supportsLearning;
- (void)syncMarkedTextForKeyboardState:(id)a0 afterContextChange:(BOOL)a1;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)inputLocationChanged;
- (BOOL)isDummyCandidate:(id)a0;
- (void)updateCandidates;
- (id)recognitionResultsForStrokes:(id)a0 context:(id)a1;
- (id)addInputObject:(id)a0 withContext:(id)a1;

@end
