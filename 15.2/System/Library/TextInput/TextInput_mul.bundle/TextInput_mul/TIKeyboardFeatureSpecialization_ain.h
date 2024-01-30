@interface TIKeyboardFeatureSpecialization_ain : TIKeyboardFeatureSpecialization

- (id)wordCharacters;
- (BOOL)shouldConvertEagerly;
- (id)findPrefixMatchesFor:(id)a0 fromIndex:(unsigned long long)a1 usingCompositionMap:(id)a2 matchesInputAsPrefix:(BOOL)a3;
- (id)internalStringToExternal:(id)a0;

@end
