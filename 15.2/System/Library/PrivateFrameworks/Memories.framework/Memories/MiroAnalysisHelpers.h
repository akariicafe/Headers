@interface MiroAnalysisHelpers : VEiOSSharedObject

+ (int)timeInFramesWithDictionaryRepresentation:(id)a0 naturalFrameRate:(long long)a1;
+ (id)buildTransientAggregateRangeTreeWithPersistentRanges:(id)a0 masterSceneType:(unsigned long long)a1;

- (id)description;
- (id)init;
- (void)cancelAllAnalysisRequests;
- (void)dispatchFullOutOfProcessAnalysisForAssets:(id)a0;
- (void)analyzeUsingClientSideAnalyzerWithAsset:(id)a0 performedAnalysisTypes:(unsigned long long)a1 ranges:(id)a2 options:(unsigned long long)a3 relatedSortedAssets:(id)a4 cancelGroup:(id)a5 progressHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;

@end
