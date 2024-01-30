@class NSMutableSet, NSMutableDictionary;

@interface PLCloudPhotoLibraryUploadTracker : NSObject {
    unsigned long long _totalNumberOfPushedMasters;
    unsigned long long _totalSizeOfPushedOriginals;
    NSMutableSet *_mastersToUpload;
    NSMutableSet *_deferredAssetsToUpload;
    NSMutableDictionary *_trackedResourceProgressSize;
    NSMutableDictionary *_trackedResourceMasterUploaded;
    NSMutableDictionary *_masterRecordUploadState;
    NSMutableSet *_mastersToUploadTrackingSize;
}

@property unsigned long long totalNumberOfUnpushedMasters;
@property unsigned long long totalNumberOfUploadedMasters;
@property unsigned long long totalNumberOfDeferredAssets;
@property unsigned long long totalSizeOfUnpushedOriginals;
@property unsigned long long totalUploadedOriginalSize;

- (id)currentStateForDebug;
- (BOOL)_isMasterRecordUploaded:(id)a0;
- (void)uploadFinishedForMasterRecordWithScopedIdentifier:(id)a0 didUpdateStatus:(BOOL *)a1;
- (void)addSizeForUnpushedOriginals:(unsigned long long)a0 forMasterScopedIdentifier:(id)a1 forAssetScopedIdentifier:(id)a2;
- (void)_setBatchUploadStateForTrackedMasters:(id)a0 withState:(BOOL)a1;
- (void)updateForMasterResourceUploadWithScopedIdentifier:(id)a0 progress:(float)a1 fileSize:(unsigned long long)a2 type:(int)a3;
- (void)setupFromCPLManager:(id)a0;
- (void)setupFromLibrary:(id)a0 isInitialUpload:(BOOL)a1;
- (void)trackDeferredAssetForScopedIdentifier:(id)a0;
- (void)dealloc;
- (void)resetIfNeededWithLibrary:(id)a0 isInitialUpload:(BOOL)a1;
- (BOOL)_trackingScopedIdentifier:(id)a0;
- (id)init;
- (id)_constructKeyForScopedIdentifier:(id)a0 type:(int)a1;
- (void)uploadFinishedForMasterResourceWithScopedIdentifier:(id)a0 fileSize:(unsigned long long)a1 type:(int)a2 withError:(BOOL)a3;
- (void)_stopTrackingResourceWithScopedIdentifier:(id)a0 fileSize:(unsigned long long)a1 type:(int)a2;
- (void)stopTrackingMaster:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
