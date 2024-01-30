@interface PXCuratedLibraryProcessingProgressReport : NSObject

+ (void)computeBriefDescriptionWithResultBlock:(id /* block */)a0;
+ (void)computeFullDescriptionWithResultBlock:(id /* block */)a0;
+ (id)colorForNotEnriched;
+ (id)colorForDefault;
+ (id)colorForPartial;
+ (id)colorForSceneComplete;
+ (id)colorForComplete;
+ (void)computeProgressWithResultBlock:(id /* block */)a0;
+ (void)getLibraryProcessingProgressWithResult:(id /* block */)a0;
+ (void)getHighlightEnrichmentProgressWithResult:(id /* block */)a0;
+ (id)highlightEnrichmentProgressImageWithProgressReport:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })a0;

@end
