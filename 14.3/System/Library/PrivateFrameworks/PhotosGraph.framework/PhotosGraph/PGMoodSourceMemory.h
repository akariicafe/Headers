@interface PGMoodSourceMemory : PGMoodSource

+ (id)_plistName;

- (double)weight;
- (id)_plistMoodIdentifiers;
- (BOOL)_shouldProcessSource;

@end
