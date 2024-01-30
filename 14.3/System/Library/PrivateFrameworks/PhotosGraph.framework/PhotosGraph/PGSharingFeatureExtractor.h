@class PGGraph, PGManager;

@interface PGSharingFeatureExtractor : NSObject {
    PGManager *_manager;
    PGGraph *_graph;
}

+ (id)extractFeatureNodesFromAsset:(id)a0 andPersonLocalIdentifiers:(id)a1 inGraph:(id)a2;
+ (id)personLocalIdentifiersByAssetUUIDFromSharingRecords:(id)a0;
+ (id)featuresFilename;
+ (id)recordsFilename;
+ (void)invalideCacheForManager:(id)a0;

- (void).cxx_destruct;
- (id)persistedFeatures;
- (id)initWithManager:(id)a0 graph:(id)a1;
- (id)_loadAllPersistedSharingRecordsFromDisk;
- (void)prefetchMomentNodeAndAssetInSharingRecords:(id)a0;
- (id)persistedSharingRecords;
- (id)persistedSharingRecordsForType:(unsigned long long)a0;
- (BOOL)persistSharingRecords:(id)a0;
- (id)extractSharingRecordsWithProgressBlock:(id /* block */)a0;
- (BOOL)persistFeatures:(id)a0;
- (id)extractFeaturesFromSharingRecords:(id)a0 withProgressBlock:(id /* block */)a1;

@end
