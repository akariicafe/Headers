@class CHRecognizer, NSDictionary, NSLocale, NSCharacterSet;

@interface CHLexiconCorrectionStep : CHPostprocessingStep

@property (nonatomic) BOOL shouldAutoCapitalize;
@property (nonatomic) CHRecognizer *recognizer;
@property (nonatomic) NSLocale *locale;
@property (nonatomic) const struct _LXLexicon { } *staticLexicon;
@property (nonatomic) const struct _LXLexicon { } *customLexicon;
@property (nonatomic) const struct _LXLexicon { } *phraseLexicon;
@property (nonatomic) const struct _LXLexicon { } *customPhraseLexicon;
@property (readonly, nonatomic) int autoCapitalizationMode;
@property (nonatomic) BOOL shouldAutoCorrect;
@property (retain, nonatomic) NSDictionary *textReplacements;
@property (retain, nonatomic) NSCharacterSet *consumableStrokesCharSet;
@property (retain, nonatomic) NSCharacterSet *fullWidthPunctuationThatExpectsUppercaseAfter;
@property (retain, nonatomic) NSCharacterSet *punctuationThatExpectsUppercaseAfter;

- (id)process:(id)a0;
- (void)dealloc;
- (id)initWithAutoCapitalizationMode:(int)a0 shouldAutoCorrect:(BOOL)a1 locale:(id)a2 staticLexicon:(struct _LXLexicon { } *)a3 customLexicon:(struct _LXLexicon { } *)a4 phraseLexicon:(struct _LXLexicon { } *)a5 customPhraseLexicon:(struct _LXLexicon { } *)a6 recognizer:(id)a7 textReplacements:(id)a8;
- (id)getSpellCorrectedToken:(id)a0 contextBeforeToken:(id)a1;
- (id)applyLexiconCorrections:(id)a0 shouldCapitalizeWord:(BOOL)a1 shouldSkipEntryCorrection:(BOOL)a2 outBestTokenIndex:(long long *)a3 bestLexiconTokenScore:(double *)a4 textReplacements:(id)a5 contextBeforeToken:(id)a6;
- (id)createPseudoTokensFromToken:(id)a0;
- (id)applyCorrectionsOnSingleToken:(id)a0 isFirstToken:(BOOL)a1 contextBeforeToken:(id)a2 shouldCapitalizeGivenHistory:(BOOL)a3 textReplacements:(id)a4 isSingleIsolatedCharacter:(BOOL)a5;
- (id)applyCorrectionsAcrossToken:(id)a0 isFirstToken:(BOOL)a1 contextBeforeToken:(id)a2 shouldCapitalizeGivenHistory:(BOOL)a3 textReplacements:(id)a4 isSingleIsolatedCharacter:(BOOL)a5;

@end
