@class CHRecognizer;

@interface CHReorderSCTCConfusionStep : CHPostprocessingStep

@property (nonatomic) void **icuTransliterator;
@property (nonatomic) CHRecognizer *recognizer;

- (id)process:(id)a0;
- (void)dealloc;
- (id)initWithRecognizer:(id)a0;

@end
