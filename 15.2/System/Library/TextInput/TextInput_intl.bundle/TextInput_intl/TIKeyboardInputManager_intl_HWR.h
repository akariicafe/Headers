@class CHRecognizer, NSArray, TIHandwritingStrokes;

@interface TIKeyboardInputManager_intl_HWR : TIKeyboardInputManager

@property (readonly, nonatomic) CHRecognizer *recognizer;
@property (retain, nonatomic) TIHandwritingStrokes *userDrawing;
@property (retain, nonatomic) NSArray *candidates;

- (BOOL)usesCandidateSelection;
- (BOOL)suppliesCompletions;
- (id)keyboardBehaviors;
- (id)candidateResultSet;
- (BOOL)canHandleKeyHitTest;
- (void)clearInput;
- (void).cxx_destruct;
- (BOOL)usesAutoDeleteWord;
- (BOOL)shouldExtendPriorWord;
- (void)loadDictionaries;
- (id)defaultCandidate;
- (unsigned long long)initialSelectedIndex;
- (unsigned int)inputCount;
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
