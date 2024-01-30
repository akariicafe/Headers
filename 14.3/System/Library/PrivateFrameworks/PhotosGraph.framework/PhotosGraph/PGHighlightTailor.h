@class PGMoodGenerationContext, NSArray, NSSet, PGManager, NSObject;
@protocol OS_dispatch_group;

@interface PGHighlightTailor : NSObject {
    NSObject<OS_dispatch_group> *_enrichmentCommitGroup;
    PGMoodGenerationContext *_moodGenerationContext;
}

@property (retain, nonatomic) PGManager *manager;
@property (retain, nonatomic) NSArray *enrichmentProfiles;
@property (readonly) NSSet *verifiedPersonLocalIdentifiers;

+ (BOOL)itemScoreIsAutoplayable:(double)a0;

- (id)initWithManager:(id)a0;
- (id)initForTesting;
- (void).cxx_destruct;
- (id)computeChangedVisibilityScoresForItems:(id)a0;
- (id)keyAssetFromHighlight:(id)a0;
- (void)writeHighlightEnrichmentValues:(id)a0 toChangeRequest:(id)a1;
- (BOOL)enrichHighlights:(id)a0 options:(unsigned long long)a1 progressBlock:(id /* block */)a2;
- (id)enrichmentValuesForHighlight:(id)a0 usingEnrichmentProfile:(id)a1 options:(unsigned long long)a2 reportChangedValuesOnly:(BOOL)a3 progressBlock:(id /* block */)a4;
- (BOOL)enrichDayHighlights:(id)a0 dayGroupHighlights:(id)a1 withOptions:(unsigned long long)a2 progressBlock:(id /* block */)a3;
- (BOOL)enrichAllHighlightsWithOptions:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (id)assetSortDescriptors;
- (id)allHighlightModelsNeedingEnrichmentForHighlightSubtype:(long long)a0 options:(unsigned long long)a1;
- (id)sortedCurationOfType:(unsigned short)a0 fromHighlight:(id)a1;
- (id)bestEnrichmentProfileForHighlight:(id)a0 options:(unsigned long long)a1;
- (double)highlightVisibilityWeightForItem:(id)a0;

@end
