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

- (void)resetIfNeededWithLibrary:(id)a0 isInitialUpload:(BOOL)a1;
- (id)_constructKeyForScopedIdentifier:(id)a0 type:(int)a1;
- (void)updateForMasterResourceUploadWithScopedIdentifier:(id)a0 progress:(float)a1 fileSize:(unsigned long long)a2 type:(int)a3;
- (void)_setBatchUploadStateForTrackedMasters:(id)a0 withState:(BOOL)a1;
- (id)currentStateForDebug;
- (void)setupFromLibrary:(id)a0 isInitialUpload:(BOOL)a1;
- (void)uploadFinishedForMasterRecordWithScopedIdentifier:(id)a0 didUpdateStatus:(BOOL *)a1;
- (BOOL)_trackingScopedIdentifier:(id)a0;
- (BOOL)_isMasterRecordUploaded:(id)a0;
- (void)_stopTrackingResourceWithScopedIdentifier:(id)a0 fileSize:(unsigned long long)a1 type:(int)a2;
- (void).cxx_destruct;
- (void)addSizeForUnpushedOriginals:(unsigned long long)a0 forMasterScopedIdentifier:(id)a1 forAssetScopedIdentifier:(id)a2;
- (id)init;
- (void)stopTrackingMaster:(id)a0;
- (void)uploadFinishedForMasterResourceWithScopedIdentifier:(id)a0 fileSize:(unsigned long long)a1 type:(int)a2 withError:(BOOL)a3;
- (void)dealloc;
- (void)trackDeferredAssetForScopedIdentifier:(id)a0;
- (void)reset;
- (void)setupFromCPLManager:(id)a0;

@end
