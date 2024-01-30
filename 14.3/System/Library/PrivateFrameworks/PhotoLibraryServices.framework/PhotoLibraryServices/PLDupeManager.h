@class NSCountedSet, NSMutableDictionary, PLPhotoLibrary, NSMutableSet, NSSet, NSMutableArray;

@interface PLDupeManager : NSObject {
    NSMutableArray *_normalAssetsObjectIDsToAnalyze;
    NSMutableDictionary *_cloudAssetsToAnalyze;
    NSMutableArray *_assetsWithUpdatedVisibility;
    BOOL _doneWithCloudAssets;
    BOOL _isRebuilding;
    NSMutableSet *_normalInserts;
    NSMutableSet *_cloudInserts;
    NSCountedSet *_pauseReasons;
    NSSet *_softPauseReasons;
    double _rebuildStartTime;
}

@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;

+ (id)placeholderHash;
+ (BOOL)_computeHashForAsset:(id)a0;
+ (id)_hashForFileAtPath:(id)a0 utiType:(id)a1;
+ (BOOL)resetDupesAnalysisForOfflineStore:(id)a0 pathManager:(id)a1;
+ (id)hashForAsset:(id)a0;
+ (BOOL)_resetDupesAnalysisInManagedObjectContext:(id)a0 pathManager:(id)a1;
+ (void)_setPlaceHolderHashOnAsset:(id)a0;

- (void)resetDupesAnalysis;
- (BOOL)_analyzeDupeForCloudAssetsAndHashes:(id)a0 andPublicGlobalUUIDs:(id)a1 forManagedObjectContext:(id)a2;
- (void)_removeCloudAssetFromAnalysis:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)_duplicateCloudAssetForHash:(id)a0 orPublicGlobalUUID:(id)a1;
- (void)dealloc;
- (void)persistPublicGlobalUUIDsForAssets:(id)a0 completionHandler:(id /* block */)a1;
- (void)_analyzeDupeForNormalAsset:(id)a0;
- (void)_resetSoftPauseReasons;
- (void)_continueAnalysisForRebuild;
- (void)_analyzeDupes;
- (void)_noteAssetVisibilityDidChange:(id)a0;
- (void)_continueAnalysisForRebuildOrPause;
- (void)launchDupeAnalysisIfNeeded;
- (short)_analyzeNormalAssetsForManagedObjectContext:(id)a0;
- (short)_adjustCloudAssetVisibilityStateForManagedObjectContext:(id)a0;
- (short)_analyzeDupesForCloudInsertsForManagedObjectContext:(id)a0;
- (void)_updateVisibilityState:(short)a0 forAsset:(id)a1;
- (short)_analyzeDupesForNormalInsertsForManagedObjectContext:(id)a0;
- (void)analyzeDupesWithNormalInserts:(id)a0 cloudInserts:(id)a1 completionHandler:(id /* block */)a2;
- (void)resumeAnalysisWithReason:(id)a0;
- (void)_analyzeDupesForRebuild;
- (void)_continueAnalysis;
- (void)_performAnalysisTransaction:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (BOOL)_prepareCloudAssetsToAnalyzeForManagedObjectContext:(id)a0;
- (void)pauseAnalysisWithReason:(id)a0;
- (short)_computeAssetHashesForManagedObjectContext:(id)a0;
- (short)_computeCloudAssetHashesForManagedObjectContext:(id)a0;

@end
