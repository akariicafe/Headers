@class NSArray, NSMutableDictionary, NSMutableArray;

@interface TIKeyboardInputManager_hi_Transliteration : TIKeyboardInputManager_hi

@property (nonatomic) void *transliterator;
@property (nonatomic) BOOL prioritizeLatinCandidates;
@property (nonatomic) BOOL hasCandidates;
@property (retain, nonatomic) NSArray *currentCandidates;
@property (retain, nonatomic) NSMutableDictionary *candidateRefsDictionary;
@property (retain, nonatomic) NSMutableArray *committedCandidates;

- (BOOL)usesCandidateSelection;
- (BOOL)supportsNumberKeySelection;
- (id)keyboardBehaviors;
- (id)candidates;
- (id)keyboardConfiguration;
- (id)keyEventMap;
- (id)wordCharacters;
- (void).cxx_destruct;
- (void)suspend;
- (id)defaultCandidate;
- (void)dealloc;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (void)deleteFromInputWithContext:(id)a0;
- (id)dictionaryInputMode;
- (void *)initImplementation;
- (id)titleForSortingMethod:(id)a0;
- (id)sortingMethods;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1;
- (id)autocorrectionCandidates;
- (id)_generateTIKeyboardCandidatesFromInputStrings:(id)a0 ignoreExtensionCandidates:(BOOL)a1;
- (id)candidateContextByVerifyingAgainstDocumentState;

@end
