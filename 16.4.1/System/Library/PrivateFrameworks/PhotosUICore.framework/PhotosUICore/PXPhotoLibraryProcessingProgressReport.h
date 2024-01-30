@interface PXPhotoLibraryProcessingProgressReport : NSObject

+ (id)colorForPartial;
+ (id)colorForDefault;
+ (id)colorForComplete;
+ (id)colorForNotEnriched;
+ (id)colorForSceneComplete;
+ (void)getHighlightEnrichmentProgressForLibrary:(id)a0 result:(id /* block */)a1;
+ (void)getProcessingProgressForLibrary:(id)a0 result:(id /* block */)a1;
+ (void)getSyndicationProgressForLibrary:(id)a0 result:(id /* block */)a1;
+ (id)highlightEnrichmentProgressImageWithProgressReport:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })a0;
+ (void)requestBriefDescriptionForLibrary:(id)a0 resultBlock:(id /* block */)a1;
+ (void)requestFullDescriptionForLibrary:(id)a0 resultBlock:(id /* block */)a1;
+ (void)requestProgressForLibrary:(id)a0 resultBlock:(id /* block */)a1;
+ (id)syndicationProgressImageWithProgressReport:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; })a0;

@end
