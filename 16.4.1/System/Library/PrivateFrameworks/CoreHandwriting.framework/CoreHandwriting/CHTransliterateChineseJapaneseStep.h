@interface CHTransliterateChineseJapaneseStep : CHPostprocessingStep

@property (nonatomic) void **icuTransliterator;
@property (nonatomic) BOOL transliterateSentences;

- (void)dealloc;
- (id)handleChineseLigaturesInString:(id)a0;
- (id)initWithTransliterateSentences:(BOOL)a0;
- (id)process:(id)a0 options:(id)a1;

@end
