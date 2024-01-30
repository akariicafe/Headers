@interface TIKeyboardInputManager_mul : TIKeyboardInputManager {
    BOOL _isSuspended;
}

- (struct { struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x0; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x1; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x2; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x3; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x4; unsigned int x5; float x6; })lexiconInfoForInputMode:(id)a0;
- (id)keyboardConfiguration;
- (id)resourceInputModes;
- (void)enumerateInputModesWithBlock:(id /* block */)a0;
- (BOOL)shouldUpdateDictionary;
- (struct vector<KB::LexiconInfo, std::allocator<KB::LexiconInfo>> { struct *x0; struct *x1; struct __compressed_pair<KB::LexiconInfo *, std::allocator<KB::LexiconInfo>> { struct *x0; } x2; })lexiconInformationVector;
- (float)weightForInputMode:(id)a0;
- (void *)languageModelContainer;
- (void)didUpdateInputModes:(id)a0;
- (unsigned int)lexiconIDForInputMode:(id)a0;
- (void)suspend;
- (void)updateLanguagePriors;
- (BOOL)updateLanguageModelForKeyboardState;
- (void)loadDictionaries;
- (void)resume;
- (void)didUpdateInputModeProbabilities:(id)a0;

@end
