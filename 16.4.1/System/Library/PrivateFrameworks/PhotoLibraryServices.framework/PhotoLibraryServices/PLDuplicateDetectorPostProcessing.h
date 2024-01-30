@interface PLDuplicateDetectorPostProcessing : NSObject

+ (id)_postProcessSortOIDs:(id)a0 oidMetadataMap:(id)a1 sortKey:(id)a2 secondarySortKey:(id)a3;
+ (void)postProcessDuplicateSubGroupWithResult:(id)a0 metadataMap:(id)a1 metadataKey:(id)a2 secondarySortKey:(id)a3 subGroupSplitDecisionBlock:(id /* block */)a4;
+ (id /* block */)sharedLibraryLivePhotoPostProcessDuplicateSubGroupSplitDecisionBlockWithMetadataMap:(id)a0;
+ (id /* block */)sharedLibraryRawPlusJPEGPostProcessDuplicateSubGroupSplitDecisionBlockWithMetadataMap:(id)a0;

@end
