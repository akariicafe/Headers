@interface CHTransliterateChineseStep : CHPostprocessingStep

@property (nonatomic) void **icuTransliterator;

- (id)init;
- (void)dealloc;
- (id)process:(id)a0;

@end
