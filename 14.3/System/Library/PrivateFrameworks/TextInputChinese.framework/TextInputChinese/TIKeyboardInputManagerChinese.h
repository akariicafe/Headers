@class TIWordSearch, NSString, TIMathSymbolPunctuationController, NSOperationQueue, CIMCandidateData;

@interface TIKeyboardInputManagerChinese : TIKeyboardInputManager_zh_ja {
    TIWordSearch *_wordSearch;
}

@property (readonly) CIMCandidateData *candidateData;
@property (readonly) NSOperationQueue *operationQueue;
@property (readonly) TIMathSymbolPunctuationController *mathSymbolPunctuationController;
@property BOOL duringDeleteFromInputWithContext;
@property (nonatomic) BOOL isAlphabeticPlane;
@property (copy, nonatomic) NSString *pairedPunctuationOpenQuote;
@property (copy, nonatomic) NSString *pairedPunctuationSelectedText;
@property (readonly, nonatomic) unsigned long long predictionOptions;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *modeName;
@property (nonatomic) BOOL isInCompletionMode;
@property (nonatomic) BOOL shouldLearnAcceptedCandidate;
@property (copy, nonatomic) NSString *currentKeyHint;

+ (Class)wordSearchClass;
+ (id)pairedPunctuationDictionary;
+ (id)punctuationPredictionsForString:(id)a0;
+ (BOOL)shouldEnableHalfWidthPunctuationForDocumentContext:(id)a0 composedText:(id)a1;
+ (id)GB18030CandidateFromString:(id)a0;
+ (id)unicodeCandidateFromString:(id)a0;

- (id)searchStringForMarkedText;
- (void)clearInput;
- (void).cxx_destruct;
- (id)firstCandidate;
- (unsigned long long)initialSelectedIndex;
- (id)wordCharacters;
- (id)replacementForDoubleSpace;
- (void)setInput:(id)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (void)deleteFromInputWithContext:(id)a0;
- (id)wordSearch;
- (void)syncToLayoutState:(id)a0;
- (id)sortMethodsGroupsForCandidates:(id)a0;
- (id)candidateResultSetFromCandidates:(id)a0 proactiveTriggers:(id)a1;
- (void)inputLocationChanged;
- (id)didAcceptCandidate:(id)a0;
- (void)loadFavoniusTypingModel;
- (id)deleteFromInput:(unsigned long long *)a0;
- (BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)a0;
- (id)titleForSortingMethod:(id)a0;
- (id)sortingMethods;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1;
- (void)setLearnsCorrection:(BOOL)a0;
- (void)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1 completion:(id /* block */)a2;
- (void)resetCommitHistory;
- (struct TIInputManager { void /* function */ **x0; struct vector<KB::Input, std::__1::allocator<KB::Input> > { struct Input *x0; struct Input *x1; struct __compressed_pair<KB::Input *, std::__1::allocator<KB::Input> > { struct Input *x0; } x2; } x1; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x2; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x3; unsigned int x4; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x5; struct retain_ptr<const __CFLocale *> { struct __CFLocale *x0; } x6; struct ConfidenceModel { struct Params { float x0; float x1; float x2; float x3; float x4; int x5; int x6; } x0; } x7; struct LockedInput { unsigned int x0; unsigned int x1; } x8; struct unique_ptr<TI::Favonius::StrokeBuildManager, std::__1::default_delete<TI::Favonius::StrokeBuildManager> > { struct __compressed_pair<TI::Favonius::StrokeBuildManager *, std::__1::default_delete<TI::Favonius::StrokeBuildManager> > { struct StrokeBuildManager *x0; } x0; } x9; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x10; struct RefPtr<KB::DictionaryContainer> { struct DictionaryContainer *x0; } x11; struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; } x12; unsigned int x13; struct Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> { unsigned long long x0; struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> { struct RefPtr<TI::Favonius::LayoutKey> *x0; unsigned long long x1; } x1; } x14; BOOL x15; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x16; struct RefPtr<TI::Favonius::KeyboardLayout> { struct KeyboardLayout *x0; } x17; struct ContinuousPathDetector { struct map<int, KB::ContinuousPathDetector::AnnotatedPath, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, KB::ContinuousPathDetector::AnnotatedPath> > > { struct __tree<std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath>, std::__1::__map_value_compare<int, std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath>, std::__1::less<int>, true> > { unsigned long long x0; } x2; } x0; } x0; struct Parameters { float x0; float x1; float x2; float x3; float x4; float x5; } x1; double x2; float x3; float x4; } x18; int x19; BOOL x20; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x21; struct LanguageModelContext { struct vector<TITokenID, std::__1::allocator<TITokenID> > { struct TITokenID *x0; struct TITokenID *x1; struct __compressed_pair<TITokenID *, std::__1::allocator<TITokenID> > { struct TITokenID *x0; } x2; } x0; unsigned long long x1; unsigned long long x2; struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x1; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x2; } x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x5; } x22; struct shared_ptr<KB::InputManagerSpecialization> { struct InputManagerSpecialization *x0; struct __shared_weak_count *x1; } x23; id /* block */ x24; struct shared_ptr<KB::TypologyLogger> { struct TypologyLogger *x0; struct __shared_weak_count *x1; } x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; int x35; } *)initImplementationWithMode:(id)a0 andLanguage:(id)a1;
- (BOOL)shouldEnableHalfWidthPunctuationForCurrentInputContext;
- (void)willExitCompletionMode;
- (id)candidateResultSetUsedForCompletionQuery;
- (BOOL)isFacemarkInput:(id)a0;
- (BOOL)showingFacemarkCandidates;
- (BOOL)hasIdeographicCandidates;
- (void *)mecabraCandidateRefFromPointerValue:(id)a0;
- (id)generateCompletions;
- (BOOL)updateCompletionCandidatesIfAppropriate;
- (void)wordSearchEngineDidFindPredictionCandidates:(id)a0;
- (id)completionCandidateResultSetForKeyHint:(id)a0;
- (BOOL)shouldSearchCompletionForSubstrings;
- (id)outputByConvertingDecimalPointForInput:(id)a0;
- (void)acceptFirstCandidateWithContext:(id)a0;
- (BOOL)supportsPairedPunctutationInput;
- (BOOL)handlePairedPunctuationInput:(id)a0 context:(id)a1;

@end
