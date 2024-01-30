@class PGMoodGenerationContext, NSArray, PGManager, NSObject;
@protocol OS_dispatch_group;

@interface PGHighlightTailor : NSObject {
    NSObject<OS_dispatch_group> *_enrichmentCommitGroup;
    PGMoodGenerationContext *_moodGenerationContext;
}

@property (retain, nonatomic) PGManager *manager;
@property (retain, nonatomic) NSArray *enrichmentProfiles;

+ (BOOL)itemScoreIsAutoplayable:(double)a0;

- (id)initWithManager:(id)a0;
- (id)initForTesting;
- (void).cxx_destruct;
- (id)assetSortDescriptors;
- (double)highlightVisibilityWeightForItem:(id)a0;
- (id)computeChangedVisibilityScoresForItems:(id)a0;
- (id)enrichmentValuesForHighlight:(id)a0 usingEnrichmentProfile:(id)a1 graph:(id)a2 options:(unsigned long long)a3 reportChangedValuesOnly:(BOOL)a4 highlightTailorContext:(id)a5 progressBlock:(id /* block */)a6;
- (void)writeHighlightEnrichmentValues:(id)a0 toChangeRequest:(id)a1;
- (id)allHighlightModelsNeedingEnrichmentForHighlightSubtype:(long long)a0 options:(unsigned long long)a1;
- (BOOL)shouldEnrichHighlight:(id)a0 withEnrichmentProfile:(id)a1 options:(unsigned long long)a2;
- (BOOL)enrichHighlights:(id)a0 options:(unsigned long long)a1 progressBlock:(id /* block */)a2;
- (BOOL)enrichAllHighlightsWithOptions:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (BOOL)enrichDayHighlights:(id)a0 dayGroupHighlights:(id)a1 withOptions:(unsigned long long)a2 progressBlock:(id /* block */)a3;
- (id)bestEnrichmentProfileForHighlight:(id)a0 options:(unsigned long long)a1;
- (id)keyAssetFromHighlight:(id)a0;
- (id)sortedCurationOfType:(unsigned short)a0 fromHighlight:(id)a1;

@end
