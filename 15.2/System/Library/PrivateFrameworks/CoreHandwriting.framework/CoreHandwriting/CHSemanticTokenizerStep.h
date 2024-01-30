@class CHRecognizer;

@interface CHSemanticTokenizerStep : CHPostprocessingStep

@property (nonatomic) CHRecognizer *recognizer;
@property (nonatomic) void *languageModel;

- (id)process:(id)a0;
- (void)dealloc;
- (id)initWithRecognizer:(id)a0 languageModel:(void *)a1;
- (void)_updateTokenInappropriateFlag:(id)a0;

@end
