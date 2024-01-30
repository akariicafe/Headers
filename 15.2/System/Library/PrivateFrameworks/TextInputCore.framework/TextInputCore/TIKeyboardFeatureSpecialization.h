@class NSString, NSMutableDictionary, TIInputMode;

@interface TIKeyboardFeatureSpecialization : NSObject {
    NSString *m_softwareLayout;
    struct USet { } *m_precomposedCharacterSet;
    struct USet { } *m_acceptableCharacterSet;
    NSMutableDictionary *m_compositionMaps;
    NSMutableDictionary *m_reverseCompositionMaps;
}

@property (readonly, nonatomic) TIInputMode *inputMode;
@property (nonatomic) long long currentUserInterfaceIdiom;
@property (nonatomic) BOOL useRelaxedOVSPolicy;
@property (nonatomic) BOOL skipCandidateQualityFilter;

+ (id)createSpecializationForInputMode:(id)a0;
+ (id)findPrefixMatchesFor:(id)a0 fromIndex:(unsigned long long)a1 usingCompositionMap:(id)a2 matchesInputAsPrefix:(BOOL)a3;
+ (struct USet { } *)createAcceptableCharacterSetForKeyboardLocale:(id)a0;

- (id)keyboardBehaviors;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (id)terminatorsDeletingAutospace;
- (BOOL)canHandleKeyHitTest;
- (BOOL)doesComposeText;
- (id)sentenceTrailingCharacters;
- (id)sentenceDelimitingCharacters;
- (id)initWithInputMode:(id)a0;
- (id)wordCharacters;
- (void).cxx_destruct;
- (BOOL)shouldExtendPriorWord;
- (id)wordSeparator;
- (id)layoutTags;
- (id)nonstopPunctuationCharacters;
- (BOOL)shouldConvertAutocorrectionCandidatesToFullWidth;
- (void)dealloc;
- (id)allAccentKeyStrings;
- (id)sentencePrefixingCharacters;
- (id)replacementForDoubleSpace;
- (void)reloadPrecomposedCharacterSetWithIdiom:(long long)a0;
- (BOOL)supportsLearning;
- (BOOL)shouldLearnLowercaseAtBeginningOfSentence;
- (id)accentKeyStringForKeyboardState:(id)a0;
- (BOOL)shouldConvertEagerly;
- (void *)createInputManager;
- (id)dictionaryInputMode;
- (id)getComposedStringFor:(id)a0 usingMap:(id)a1 byConvertingEagerly:(BOOL)a2;
- (id)findPrefixMatchesFor:(id)a0 fromIndex:(unsigned long long)a1 usingCompositionMap:(id)a2 matchesInputAsPrefix:(BOOL)a3;
- (id)compositionMapForLayout:(id)a0 reverse:(BOOL)a1;
- (id)getComposedStringFor:(id)a0 usingMap:(id)a1;
- (const struct USet { } *)precomposedCharacterSet;
- (struct USet { } *)createAcceptableCharacterSet;
- (void)specializeInputManager:(void *)a0 forLayoutState:(id)a1;
- (BOOL)shouldClearInput:(id)a0;
- (id)externalStringToInternal:(id)a0;
- (id)internalStringToExternal:(id)a0;
- (unsigned long long)maxPriorWordTokensAfterTrimming;
- (BOOL)acceptsCharacter:(unsigned int)a0;
- (BOOL)dictionaryUsesExternalEncoding;
- (BOOL)shouldConvertCandidateToExternal;
- (BOOL)allowsAutocorrectionOfValidWords;

@end
