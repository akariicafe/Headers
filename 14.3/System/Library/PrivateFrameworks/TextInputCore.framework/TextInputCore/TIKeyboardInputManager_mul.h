@interface TIKeyboardInputManager_mul : TIKeyboardInputManager {
    BOOL _isSuspended;
}

- (void)enumerateInputModesWithBlock:(id /* block */)a0;
- (float)weightForInputMode:(id)a0;
- (struct vector<KB::LexiconInfo, std::__1::allocator<KB::LexiconInfo> > { struct *x0; struct *x1; struct __compressed_pair<KB::LexiconInfo *, std::__1::allocator<KB::LexiconInfo> > { struct *x0; } x2; })lexiconInformationVector;
- (struct { struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x0; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x1; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x2; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x3; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x4; unsigned int x5; float x6; })lexiconInfoForInputMode:(id)a0;
- (struct LanguageModelContainer { void /* function */ **x0; struct vector<std::__1::shared_ptr<KB::LanguageModel>, std::__1::allocator<std::__1::shared_ptr<KB::LanguageModel> > > { struct shared_ptr<KB::LanguageModel> *x0; struct shared_ptr<KB::LanguageModel> *x1; struct __compressed_pair<std::__1::shared_ptr<KB::LanguageModel> *, std::__1::allocator<std::__1::shared_ptr<KB::LanguageModel> > > { struct shared_ptr<KB::LanguageModel> *x0; } x2; } x1; struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x2; } *)languageModelContainer;
- (BOOL)shouldUpdateDictionary;
- (id)keyboardConfiguration;
- (unsigned int)lexiconIDForInputMode:(id)a0;
- (void)updateLanguagePriors;
- (void)loadDictionaries;
- (void)resume;
- (void)didUpdateInputModes:(id)a0;
- (void)suspend;
- (BOOL)updateLanguageModelForKeyboardState;
- (void)didUpdateInputModeProbabilities:(id)a0;
- (id)resourceInputModes;

@end
