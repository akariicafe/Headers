@class CHRecognizer;

@interface CHMultiWordOVSFilteringStep : CHPostprocessingStep

@property (nonatomic) CHRecognizer *recognizer;

- (id)process:(id)a0;
- (id)initWithRecognizer:(id)a0;

@end
