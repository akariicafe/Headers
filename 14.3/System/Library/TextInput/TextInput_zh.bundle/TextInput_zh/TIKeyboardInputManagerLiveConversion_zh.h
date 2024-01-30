@class NSArray, TIKeyboardCandidate, NSString, TIZhuyinInputManager;

@interface TIKeyboardInputManagerLiveConversion_zh : TIKeyboardInputManagerChinesePhonetic

@property (copy, nonatomic) TIKeyboardCandidate *topCandidate;
@property (copy, nonatomic) TIKeyboardCandidate *currentCandidate;
@property (copy, nonatomic) NSArray *segments;
@property (copy, nonatomic) NSString *remainingInput;
@property (copy, nonatomic) TIZhuyinInputManager *zhuyinInputManager;
@property (copy, nonatomic) NSString *cachedInputString;
@property (nonatomic) BOOL revertTonlessZhuyin;

- (void)clearInput;
- (id)keyboardBehaviors;
- (id)markedText;
- (BOOL)supportsNumberKeySelection;
- (void).cxx_destruct;
- (id)inputString;
- (id)keyBehaviorsForState:(id)a0;
- (BOOL)delayedCandidateList;
- (unsigned int)inputCount;
- (unsigned long long)initialSelectedIndex;
- (id)wordCharacters;
- (BOOL)usesLiveConversion;
- (id)keyEventMap;
- (BOOL)commitsAcceptedCandidate;
- (unsigned int)inputIndex;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (BOOL)shouldClearInputOnMarkedTextOutOfSync;
- (id)validCharacterSetForAutocorrection;
- (void)saveGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (void)restoreGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void)commitComposition;
- (BOOL)closeCandidateGenerationContextWithResults:(id)a0;
- (id)rawInputString;
- (id)didAcceptCandidate:(id)a0;
- (struct TIInputManager { void /* function */ **x0; struct vector<KB::Input, std::__1::allocator<KB::Input> > { struct Input *x0; struct Input *x1; struct __compressed_pair<KB::Input *, std::__1::allocator<KB::Input> > { struct Input *x0; } x2; } x1; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x2; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x3; unsigned int x4; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x5; struct retain_ptr<const __CFLocale *> { struct __CFLocale *x0; } x6; struct ConfidenceModel { struct Params { float x0; float x1; float x2; float x3; float x4; int x5; int x6; } x0; } x7; struct LockedInput { unsigned int x0; unsigned int x1; } x8; struct unique_ptr<TI::Favonius::StrokeBuildManager, std::__1::default_delete<TI::Favonius::StrokeBuildManager> > { struct __compressed_pair<TI::Favonius::StrokeBuildManager *, std::__1::default_delete<TI::Favonius::StrokeBuildManager> > { struct StrokeBuildManager *x0; } x0; } x9; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x10; struct RefPtr<KB::DictionaryContainer> { struct DictionaryContainer *x0; } x11; struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; } x12; unsigned int x13; struct Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> { unsigned long long x0; struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> { struct RefPtr<TI::Favonius::LayoutKey> *x0; unsigned long long x1; } x1; } x14; BOOL x15; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x16; struct RefPtr<TI::Favonius::KeyboardLayout> { struct KeyboardLayout *x0; } x17; struct ContinuousPathDetector { struct map<int, KB::ContinuousPathDetector::AnnotatedPath, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, KB::ContinuousPathDetector::AnnotatedPath> > > { struct __tree<std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath>, std::__1::__map_value_compare<int, std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath>, std::__1::less<int>, true> > { unsigned long long x0; } x2; } x0; } x0; struct Parameters { float x0; float x1; float x2; float x3; float x4; float x5; } x1; double x2; float x3; float x4; } x18; int x19; BOOL x20; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x21; struct LanguageModelContext { struct vector<TITokenID, std::__1::allocator<TITokenID> > { struct TITokenID *x0; struct TITokenID *x1; struct __compressed_pair<TITokenID *, std::__1::allocator<TITokenID> > { struct TITokenID *x0; } x2; } x0; unsigned long long x1; unsigned long long x2; struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x1; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x2; } x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x5; } x22; struct shared_ptr<KB::InputManagerSpecialization> { struct InputManagerSpecialization *x0; struct __shared_weak_count *x1; } x23; id /* block */ x24; struct shared_ptr<KB::TypologyLogger> { struct TypologyLogger *x0; struct __shared_weak_count *x1; } x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; int x35; } *)initImplementation;
- (id)deleteFromInput:(unsigned long long *)a0;
- (int)inputMethodType;
- (BOOL)shouldSearchCompletionForSubstrings;
- (id)internalInputString;
- (BOOL)_shouldCommitInputDirectly:(id)a0;
- (void)addInputToInternal:(id)a0;
- (BOOL)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)a0;
- (id)phoneticSortingMethod;
- (BOOL)updateCandidatesByWaitingForResults:(BOOL)a0;
- (id)composedTextForSelectedCandidate:(id)a0 remainingInput:(id)a1;
- (BOOL)skipSetMarkedTextDuringInput;
- (void)_notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (void)presetSegmentPickerForLastSegment;
- (void)presentSegmentAdjuster;
- (void)_addInputToInternal:(id)a0;

@end
