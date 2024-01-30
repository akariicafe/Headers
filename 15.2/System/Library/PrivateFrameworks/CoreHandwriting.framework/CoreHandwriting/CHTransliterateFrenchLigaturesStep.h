@class CVNLPDecodingLanguageModel;

@interface CHTransliterateFrenchLigaturesStep : CHPostprocessingStep

@property (nonatomic) CVNLPDecodingLanguageModel *characterLM;
@property (nonatomic) const struct _LXLexicon { } *staticLexicon;

- (id)process:(id)a0;
- (id)initWithCharacterLM:(id)a0 staticLexicon:(struct _LXLexicon { } *)a1;
- (id)handleFrenchLigaturesInToken:(id)a0;

@end
