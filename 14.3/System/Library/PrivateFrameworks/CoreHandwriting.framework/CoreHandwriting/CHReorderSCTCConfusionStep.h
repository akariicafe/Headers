@class CHRecognizer;

@interface CHReorderSCTCConfusionStep : CHPostprocessingStep

@property (nonatomic) void **icuTransliterator;
@property (nonatomic) CHRecognizer *recognizer;

- (void)dealloc;
- (id)process:(id)a0;
- (id)initWithRecognizer:(id)a0;

@end
