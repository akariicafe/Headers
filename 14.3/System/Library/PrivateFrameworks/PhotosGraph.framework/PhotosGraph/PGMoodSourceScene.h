@interface PGMoodSourceScene : PGMoodSource

+ (id)_plistName;
+ (BOOL)shouldUseSceneIdentifier:(id)a0;

- (double)weight;
- (void)_combineMoodVectors;
- (unsigned long long)_sourceInputCount;

@end
