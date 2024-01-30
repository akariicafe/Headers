@class PGGraph, PGSearchComputationCache;

@interface PGZeroKeywordComputer : NSObject

@property (readonly) PGGraph *graph;
@property (readonly, nonatomic) PGSearchComputationCache *searchComputationCache;

+ (id)zeroKeywordLog;

- (id)zeroKeywordsWithOptions:(id)a0 progressBlock:(id /* block */)a1;
- (id)initWithGraph:(id)a0 searchComputationCache:(id)a1;
- (id)_zeroKeywordsWithOptions:(id)a0 progressBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)peopleZeroKeywordsWithOptions:(id)a0 progressBlock:(id /* block */)a1;
- (id)contextualDateZeroKeywordsWithOptions:(id)a0;
- (id)sceneZeroKeywordsWithOptions:(id)a0 progressBlock:(id /* block */)a1;
- (id)locationZeroKeywordsWithOptions:(id)a0 progressBlock:(id /* block */)a1;
- (id)_tripZeroKeywordWithScore:(out double *)a0;
- (id)_locationBasedContextualLocationNodeWithLocation:(id)a0 date:(id)a1 progressBlock:(id /* block */)a2;
- (id)_timeBasedContextualLocationNodeWithDate:(id)a0 progressBlock:(id /* block */)a1;
- (id)tripRankedKeyword;
- (id)contextualSceneZeroKeywordsWithOptions:(id)a0 progressBlock:(id /* block */)a1;
- (id)contextualMeaningAndTripZeroKeywordsWithOptions:(id)a0 progressBlock:(id /* block */)a1;
- (id)socialGroupKeywordsWithOptions:(id)a0 progressBlock:(id /* block */)a1;
- (id)_zeroKeywordDisplayMeaningNodeForMeaningNode:(id)a0;
- (id)contextualLocationNodesWithOptions:(id)a0 progressBlock:(id /* block */)a1;
- (id)contextualPersonZeroKeywordsWithOptions:(id)a0 progressBlock:(id /* block */)a1;
- (id)meaningNodeZeroKeywordForDisplayMeaningNode:(id)a0 collectionUUIDsToAvoid:(id)a1;
- (BOOL)_conflictBetweenLocationOrAreaNode:(id)a0 andOtherLocationOrAreaNodes:(id)a1;
- (id)eventZeroKeywordsWithOptions:(id)a0 progressBlock:(id /* block */)a1;
- (id)densestCloseLocationNodeForNode:(id)a0 locationMask:(unsigned long long)a1;
- (id)tripZeroKeyword;
- (id)contextualSeasonZeroKeywordsWithOptions:(id)a0;
- (id)contextualSocialGroupZeroKeywordsWithOptions:(id)a0 progressBlock:(id /* block */)a1;
- (id)contextualHolidayZeroKeywordsWithOptions:(id)a0 progressBlock:(id /* block */)a1;

@end
