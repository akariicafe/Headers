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

+ (BOOL)_resetDupesAnalysisInManagedObjectContext:(id)a0 pathManager:(id)a1;
+ (BOOL)_computeHashForAsset:(id)a0;
+ (void)_setPlaceHolderHashOnAsset:(id)a0;
+ (id)_hashForFileAtPath:(id)a0 utiType:(id)a1;
+ (id)placeholderHash;
+ (id)hashForAsset:(id)a0;
+ (BOOL)resetDupesAnalysisForOfflineStore:(id)a0 pathManager:(id)a1;

- (id)_duplicateCloudAssetForHash:(id)a0 orPublicGlobalUUID:(id)a1;
- (void)_analyzeDupeForNormalAsset:(id)a0;
- (void)_updateVisibilityState:(short)a0 forAsset:(id)a1;
- (short)_analyzeDupesForCloudInsertsForManagedObjectContext:(id)a0;
- (short)_analyzeDupesForNormalInsertsForManagedObjectContext:(id)a0;
- (BOOL)_analyzeDupeForCloudAssetsAndHashes:(id)a0 andPublicGlobalUUIDs:(id)a1 forManagedObjectContext:(id)a2;
- (void)analyzeDupesWithNormalInserts:(id)a0 cloudInserts:(id)a1 completionHandler:(id /* block */)a2;
- (void)_resetSoftPauseReasons;
- (short)_adjustCloudAssetVisibilityStateForManagedObjectContext:(id)a0;
- (void)_noteAssetVisibilityDidChange:(id)a0;
- (short)_analyzeNormalAssetsForManagedObjectContext:(id)a0;
- (void)persistPublicGlobalUUIDsForAssets:(id)a0 completionHandler:(id /* block */)a1;
- (short)_computeAssetHashesForManagedObjectContext:(id)a0;
- (void)_removeCloudAssetFromAnalysis:(id)a0;
- (void).cxx_destruct;
- (void)launchDupeAnalysisIfNeeded;
- (id)initWithPhotoLibrary:(id)a0;
- (void)_performAnalysisTransaction:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)_continueAnalysisForRebuild;
- (void)_analyzeDupesForRebuild;
- (void)_continueAnalysisForRebuildOrPause;
- (void)pauseAnalysisWithReason:(id)a0;
- (short)_computeCloudAssetHashesForManagedObjectContext:(id)a0;
- (BOOL)_prepareCloudAssetsToAnalyzeForManagedObjectContext:(id)a0;
- (void)dealloc;
- (void)resumeAnalysisWithReason:(id)a0;
- (void)_analyzeDupes;
- (void)resetDupesAnalysis;
- (void)_continueAnalysis;

@end
