@class PGGraphMomentNodeCollection, PGCurationManager, CLSSceneTaxonomyHierarchy, PHPhotoLibrary, PGSearchComputationCache;

@interface PGZeroKeywordComputer : NSObject {
    PHPhotoLibrary *_photoLibrary;
    PGCurationManager *_curationManager;
    CLSSceneTaxonomyHierarchy *_sceneTaxonomy;
}

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodesWhereMeIsPresent;
@property (readonly, nonatomic) BOOL shouldFilterMomentNodesWithPresence;
@property (readonly, nonatomic) PGSearchComputationCache *searchComputationCache;

+ (id)zeroKeywordLog;
+ (id)contextualHolidayZeroKeywordsWithGraph:(id)a0 options:(id)a1 progressBlock:(id /* block */)a2;

- (void).cxx_destruct;
- (BOOL)_conflictBetweenLocationOrAreaNode:(id)a0 andOtherLocationOrAreaNodes:(id)a1;
- (id)_locationBasedContextualLocationNodeInGraph:(id)a0 withLocation:(id)a1 date:(id)a2 locationHelper:(id)a3 progressBlock:(id /* block */)a4;
- (id)_timeBasedContextualLocationNodeInGraph:(id)a0 withDate:(id)a1 locationHelper:(id)a2 progressBlock:(id /* block */)a3;
- (id)_tripZeroKeywordWithGraph:(id)a0 curationContext:(id)a1 score:(out double *)a2;
- (id)_zeroKeywordDisplayMeaningNodeForMeaningNode:(id)a0;
- (id)_zeroKeywordsWithGraph:(id)a0 curationContext:(id)a1 options:(id)a2 progressBlock:(id /* block */)a3;
- (id)contextualDateZeroKeywordsWithGraph:(id)a0 options:(id)a1;
- (id)contextualLocationNodesWithGraph:(id)a0 options:(id)a1 locationHelper:(id)a2 progressBlock:(id /* block */)a3;
- (id)contextualMeaningAndTripZeroKeywordsWithGraph:(id)a0 curationContext:(id)a1 options:(id)a2 progressBlock:(id /* block */)a3;
- (id)contextualPersonZeroKeywordsWithGraph:(id)a0 options:(id)a1 progressBlock:(id /* block */)a2;
- (id)contextualSceneZeroKeywordsWithGraph:(id)a0 options:(id)a1 progressBlock:(id /* block */)a2;
- (id)contextualSeasonZeroKeywordsWithGraph:(id)a0 curationContext:(id)a1 options:(id)a2;
- (id)contextualSocialGroupZeroKeywordsWithGraph:(id)a0 options:(id)a1 progressBlock:(id /* block */)a2;
- (id)densestCloseLocationNodeForNode:(id)a0 locationMask:(unsigned long long)a1 locationHelper:(id)a2;
- (id)eventZeroKeywordsWithGraph:(id)a0 curationContext:(id)a1 options:(id)a2 progressBlock:(id /* block */)a3;
- (id)initWithPhotoLibrary:(id)a0 curationManager:(id)a1 searchComputationCache:(id)a2;
- (id)locationZeroKeywordsWithGraph:(id)a0 options:(id)a1 progressBlock:(id /* block */)a2;
- (id)meaningNodeZeroKeywordForDisplayMeaningNode:(id)a0 collectionUUIDsToAvoid:(id)a1 curationContext:(id)a2;
- (id)momentNodesOverlappingLocalDateInterval:(id)a0 inGraph:(id)a1;
- (id)peopleZeroKeywordsWithGraph:(id)a0 curationContext:(id)a1 options:(id)a2 progressBlock:(id /* block */)a3;
- (id)sceneZeroKeywordsWithGraph:(id)a0 options:(id)a1 progressBlock:(id /* block */)a2;
- (id)socialGroupKeywordsWithGraph:(id)a0 curationContext:(id)a1 options:(id)a2 progressBlock:(id /* block */)a3;
- (id)tripRankedKeywordWithGraph:(id)a0 curationContext:(id)a1;
- (id)tripZeroKeywordWithGraph:(id)a0 curationContext:(id)a1;
- (id)zeroKeywordsWithGraph:(id)a0 curationContext:(id)a1 options:(id)a2 progressBlock:(id /* block */)a3;

@end
