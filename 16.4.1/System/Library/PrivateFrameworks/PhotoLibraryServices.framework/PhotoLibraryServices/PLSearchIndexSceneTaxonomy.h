@interface PLSearchIndexSceneTaxonomy : PFSceneTaxonomy

+ (BOOL)_useHighRecallThresholds;

- (void)enumerateKeywordAndSynonymsForSceneIdentifiers:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateKeywordAndSynonymsForScenes:(id)a0 usingBlock:(id /* block */)a1;

@end
