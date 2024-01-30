@class CHRecognizer, NSArray, TIHandwritingStrokes;

@interface TIKeyboardInputManager_intl_HWR : TIKeyboardInputManager

@property (readonly, nonatomic) CHRecognizer *recognizer;
@property (retain, nonatomic) TIHandwritingStrokes *userDrawing;
@property (retain, nonatomic) NSArray *candidates;

- (void)clearInput;
- (BOOL)usesCandidateSelection;
- (BOOL)canHandleKeyHitTest;
- (unsigned int)inputCount;
- (BOOL)usesAutoDeleteWord;
- (BOOL)suppliesCompletions;
- (void)loadDictionaries;
- (id)keyboardBehaviors;
- (BOOL)shouldExtendPriorWord;
- (id)candidateResultSet;
- (id)handleKeyboardInput:(id)a0;
- (void).cxx_destruct;
- (id)defaultCandidate;
- (unsigned long long)initialSelectedIndex;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)deleteFromInputWithContext:(id)a0;
- (void)inputLocationChanged;
- (BOOL)supportsLearning;
- (void)syncMarkedTextForKeyboardState:(id)a0 afterContextChange:(BOOL)a1;
- (BOOL)isDummyCandidate:(id)a0;
- (void)updateCandidates;
- (id)addInputObject:(id)a0 withContext:(id)a1;
- (id)recognitionResultsForStrokes:(id)a0 context:(id)a1;

@end
