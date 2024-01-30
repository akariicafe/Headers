@class CHStringOVSChecker, CHSpellChecker, NSLocale, NSDictionary, NSCharacterSet;

@interface CHLexiconCorrectionStep : CHPostprocessingStep

@property (nonatomic) BOOL shouldAutoCapitalize;
@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) const struct _LXLexicon { } *staticLexicon;
@property (nonatomic) const struct _LXLexicon { } *customLexicon;
@property (nonatomic) const struct _LXLexicon { } *phraseLexicon;
@property (nonatomic) const struct _LXLexicon { } *customPhraseLexicon;
@property (nonatomic) void *lmVocabulary;
@property (retain, nonatomic) CHStringOVSChecker *ovsStringChecker;
@property (readonly, nonatomic) int autoCapitalizationMode;
@property (nonatomic) BOOL shouldAutoCorrect;
@property (nonatomic) BOOL shouldCreatePseudoTokens;
@property (retain, nonatomic) CHSpellChecker *spellChecker;
@property (retain, nonatomic) NSDictionary *textReplacements;
@property (retain, nonatomic) NSCharacterSet *consumableStrokesCharSet;
@property (retain, nonatomic) NSCharacterSet *fullWidthPunctuationThatExpectsUppercaseAfter;
@property (retain, nonatomic) NSCharacterSet *punctuationThatExpectsUppercaseAfter;

+ (id)validatedTokenForCorrectedToken:(id)a0 rawToken:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)applyCorrectionsAcrossToken:(id)a0 isFirstToken:(BOOL)a1 contextBeforeToken:(id)a2 shouldCapitalizeGivenHistory:(BOOL)a3 textReplacements:(id)a4 isSingleIsolatedCharacter:(BOOL)a5;
- (id)applyCorrectionsOnSingleToken:(id)a0 isFirstToken:(BOOL)a1 contextBeforeToken:(id)a2 shouldCapitalizeGivenHistory:(BOOL)a3 textReplacements:(id)a4 isSingleIsolatedCharacter:(BOOL)a5 allowSpellChecker:(BOOL)a6;
- (id)applyLexiconCorrections:(id)a0 shouldCapitalizeWord:(BOOL)a1 shouldSkipEntryCorrection:(BOOL)a2 outBestTokenIndex:(long long *)a3 bestLexiconTokenScore:(double *)a4 textReplacements:(id)a5 contextBeforeToken:(id)a6 allowSpellChecker:(BOOL)a7;
- (id)createPseudoTokensFromToken:(id)a0;
- (id)getSpellCorrectedToken:(id)a0 contextBeforeToken:(id)a1;
- (id)initWithAutoCapitalizationMode:(int)a0 shouldAutoCorrect:(BOOL)a1 shouldAutoCapitalize:(BOOL)a2 shouldCreatePseudoTokens:(BOOL)a3 locale:(id)a4 staticLexicon:(struct _LXLexicon { } *)a5 customLexicon:(struct _LXLexicon { } *)a6 phraseLexicon:(struct _LXLexicon { } *)a7 customPhraseLexicon:(struct _LXLexicon { } *)a8 spellChecker:(id)a9 lmVocabulary:(void *)a10 ovsStringChecker:(id)a11 textReplacements:(id)a12;
- (id)process:(id)a0 options:(id)a1;

@end
