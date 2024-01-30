@class CHRecognizer, NSDictionary, NSLocale, NSCharacterSet;

@interface CHLexiconCorrectionStep : CHPostprocessingStep

@property (nonatomic) BOOL shouldAutocapitalize;
@property (nonatomic) CHRecognizer *recognizer;
@property (nonatomic) NSLocale *locale;
@property (nonatomic) const struct _LXLexicon { } *staticLexicon;
@property (nonatomic) const struct _LXLexicon { } *customLexicon;
@property (nonatomic) const struct _LXLexicon { } *phraseLexicon;
@property (nonatomic) const struct _LXLexicon { } *customPhraseLexicon;
@property (readonly, nonatomic) int autoCapitalizationMode;
@property (retain, nonatomic) NSDictionary *textReplacements;
@property (retain, nonatomic) NSCharacterSet *consumableStrokesCharSet;
@property (retain, nonatomic) NSCharacterSet *fullWidthPunctuationThatExpectsUppercaseAfter;

- (void)dealloc;
- (id)process:(id)a0;
- (id)initWithAutoCapitalizationMode:(int)a0 locale:(id)a1 staticLexicon:(struct _LXLexicon { } *)a2 customLexicon:(struct _LXLexicon { } *)a3 phraseLexicon:(struct _LXLexicon { } *)a4 customPhraseLexicon:(struct _LXLexicon { } *)a5 recognizer:(id)a6 textReplacements:(id)a7;
- (id)getSpellCorrectedToken:(id)a0 contextBeforeToken:(id)a1;
- (id)capitalizeString:(id)a0;
- (id)applyLexiconCorrections:(id)a0 shouldCapitalizeWord:(BOOL)a1 shouldSkipEntryCorrection:(BOOL)a2 outBestTokenIndex:(long long *)a3 bestLexiconTokenScore:(double *)a4 textReplacements:(id)a5 contextBeforeToken:(id)a6;
- (id)capitalizeToken:(id)a0;
- (BOOL)tokenIsExemptFromCorrection:(id)a0 inPath:(id)a1 withTokensInRow:(id)a2;
- (id)applyLexiconCorrectionOnToken:(id)a0 hasEmptyContext:(BOOL)a1 history:(id)a2 historyEndsAlphabetic:(BOOL)a3 historyEndsWithLineBreak:(BOOL)a4 prevToken:(id)a5 shouldCapitalizeGivenHistory:(BOOL)a6 tokenIndex:(long long)a7 textReplacements:(id)a8 shouldEntrySkipCorrection:(BOOL)a9 contextBeforeToken:(id)a10;

@end
