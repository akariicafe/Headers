@interface TIKeyboardInputManagerCangjie : TIKeyboardInputManagerShapeBased

@property (nonatomic) BOOL suchengEnabled;
@property (nonatomic) BOOL supportsEnglish;

+ (Class)wordSearchClass;

- (BOOL)supportsNumberKeySelection;
- (id)keyboardBehaviors;
- (id)nonstopPunctuationCharacters;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)addInput:(id)a0 withContext:(id)a1;
- (id)sortingMethods;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (void)syncToLayoutState:(id)a0;
- (id)cangjieAlphabetSet;
- (unsigned long long)cangjieInputType:(id)a0 fromPopupVariant:(BOOL)a1;
- (id)cangjieSet;
- (BOOL)firstCandidateIsEnglish;
- (id)formattedSearchString;
- (BOOL)isPunctuationInput;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (BOOL)selectedCandidateIsEnglish;
- (void)syncWordSearch;
- (BOOL)updateCandidatesWithTIWordSearch:(id)a0 predictionEnabled:(BOOL)a1;
- (void)updateMarkedText;

@end
