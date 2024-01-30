@class CHStringOVSChecker;

@interface CHSemanticTokenizerStep : CHPostprocessingStep

@property (nonatomic) void *wordLanguageModel;
@property (retain, nonatomic) CHStringOVSChecker *ovsStringChecker;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateTokenInappropriateFlag:(id)a0;
- (id)initWithWordLanguageModel:(void *)a0 ovsStringChecker:(id)a1;
- (id)process:(id)a0 options:(id)a1;

@end
