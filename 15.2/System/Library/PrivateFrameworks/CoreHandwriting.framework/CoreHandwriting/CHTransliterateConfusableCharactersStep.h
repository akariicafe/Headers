@class NSArray, NSLocale;

@interface CHTransliterateConfusableCharactersStep : CHPostprocessingStep

@property (nonatomic) NSArray *characterTransliterations;
@property (nonatomic) const struct _LXLexicon { } *staticLexicon;
@property (nonatomic) const struct _LXLexicon { } *customLexicon;
@property (retain, nonatomic) NSLocale *locale;

+ (id)characterTransliterations;

- (id)process:(id)a0;
- (void)dealloc;
- (id)initWithStaticLexicon:(struct _LXLexicon { } *)a0 customLexicon:(struct _LXLexicon { } *)a1 locale:(id)a2;
- (id)handleConfusableCharactersInToken:(id)a0 previousContext:(id)a1;
- (unsigned int)wordIDForCandidateString:(id)a0;

@end
