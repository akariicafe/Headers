@interface TIKeyboardFeatureSpecialization_ta : TIKeyboardFeatureSpecialization

@property (nonatomic, getter=isQwertyLayout) BOOL qwertyLayout;

- (BOOL)doesComposeText;
- (id)nonstopPunctuationCharacters;
- (void)specializeInputManager:(void *)a0 forLayoutState:(id)a1;
- (BOOL)dictionaryUsesExternalEncoding;
- (BOOL)shouldConvertCandidateToExternal;
- (BOOL)allowsAutocorrectionOfValidWords;

@end
