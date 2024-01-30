@class NSMutableSet, NSMutableDictionary;

@interface PLCloudPhotoLibraryUploadTracker : NSObject {
    unsigned long long _totalNumberOfPushedMasters;
    unsigned long long _totalSizeOfPushedOriginals;
    NSMutableSet *_mastersToUpload;
    NSMutableDictionary *_trackedResourceProgressSize;
    NSMutableDictionary *_trackedResourceMasterUploaded;
}

@property unsigned long long totalNumberOfUnpushedMasters;
@property unsigned long long totalNumberOfUploadedMasters;
@property unsigned long long totalSizeOfUnpushedOriginals;
@property unsigned long long totalUploadedOriginalSize;

- (id)_constructKeyForScopedIdentifier:(id)a0 type:(int)a1;
- (BOOL)trackingScopedIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)updateForScopedIdentifier:(id)a0 progress:(float)a1 fileSize:(unsigned long long)a2 type:(int)a3;
- (void)setupFromLibrary:(id)a0;
- (void)uploadFinishedForScopedIdentifier:(id)a0 fileSize:(unsigned long long)a1 type:(int)a2 withError:(BOOL)a3;
- (void)setupFromCPLManager:(id)a0;
- (void)reset;
- (void)dealloc;
- (void)stopTrackingResourceWithScopedIdentifier:(id)a0 fileSize:(unsigned long long)a1 type:(int)a2;
- (void)stopTrackingScopedIdentifier:(id)a0;
- (void)addSizeForUnpushedOriginals:(unsigned long long)a0 forScopedIdentifier:(id)a1;
- (void)resetIfNeeded;

@end
