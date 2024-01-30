@class PHPhotoLibrary, NSObject;
@protocol OS_os_log;

@interface PGSharingFeatureExtractor : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
}

+ (id)extractFeatureNodesFromAsset:(id)a0 andPersonLocalIdentifiers:(id)a1 inGraph:(id)a2;
+ (id)personLocalIdentifiersByAssetUUIDFromSharingRecords:(id)a0;
+ (id)featuresFilename;
+ (id)recordsFilename;
+ (void)invalidateCacheForPhotoLibrary:(id)a0;

- (void).cxx_destruct;
- (id)persistedFeatures;
- (id)initWithPhotoLibrary:(id)a0 loggingConnection:(id)a1;
- (id)_loadAllPersistedSharingRecordsFromDisk;
- (void)prefetchAssetInSharingRecords:(id)a0;
- (id)persistedSharingRecords;
- (id)persistedSharingRecordsForType:(unsigned long long)a0;
- (BOOL)persistSharingRecords:(id)a0;
- (id)extractSharingRecordsWithGraph:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)persistFeatures:(id)a0;
- (id)extractFeaturesFromSharingRecords:(id)a0 withGraph:(id)a1 progressBlock:(id /* block */)a2;

@end
