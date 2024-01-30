@interface PGMoodSourceScene : PGMoodSource

+ (id)_plistName;
+ (BOOL)shouldUseSceneIdentifier:(id)a0;

- (double)weight;
- (void)_combineMoodVectorsWithGraph:(id)a0;
- (unsigned long long)_sourceInputCount;

@end
