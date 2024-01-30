@interface CHCyrillicAddAlternativeScriptCandidatesStep : CHPostprocessingStep

@property (nonatomic) const struct _LXLexicon { } *staticLexicon;
@property (nonatomic) const struct _LXLexicon { } *customLexicon;

- (id)initWithStaticLexicon:(struct _LXLexicon { } *)a0 customLexicon:(struct _LXLexicon { } *)a1;
- (id)process:(id)a0 options:(id)a1;

@end
