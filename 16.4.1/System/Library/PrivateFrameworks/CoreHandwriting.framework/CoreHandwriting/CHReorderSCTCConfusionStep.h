@interface CHReorderSCTCConfusionStep : CHPostprocessingStep

@property (nonatomic) void **icuTransliterator;
@property (nonatomic) long long maxResultCount;

- (void)dealloc;
- (id)initWithMaxResultCount:(long long)a0;
- (id)process:(id)a0 options:(id)a1;

@end
