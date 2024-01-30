@interface CHTransliterateChineseStep : CHPostprocessingStep

@property (nonatomic) void **icuTransliterator;

- (id)init;
- (id)process:(id)a0;
- (void)dealloc;

@end
