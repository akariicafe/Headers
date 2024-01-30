@class MAAsset;

@interface SUDocumentationAssetMatcher : SUAssetStateMatcher {
    MAAsset *_suAsset;
}

+ (id)matcherDocumentationFromAsset:(id)a0;
+ (id)matcherForInstalledDocumentationFromAsset:(id)a0;

- (void)dealloc;
- (id)_findMatchFromCandidates:(id)a0 error:(id *)a1;
- (void)_modifyMADownloadOptions:(id)a0;
- (id)_queryPredicateForProperties:(id)a0;
- (id)_sortedMatcherPredicatesFromSoftwareUpdateAsset:(id)a0;
- (id)initWithSoftwareUpdateAsset:(id)a0;
- (id)initWithSoftwareUpdateAsset:(id)a0 limitingToStates:(int)a1;

@end
