@class NSMutableArray, NSString, GEOResourceManifestConfiguration, geo_isolater;

@interface GEOResourcesVersionMigrator : NSObject <GEOActiveTileGroupMigrator> {
    GEOResourceManifestConfiguration *_manifestConfiguration;
    geo_isolater *_isolater;
    NSMutableArray *_runningTasks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)taskForNewTileGroup:(id)a0 inResourceManifest:(id)a1 oldTileGroup:(id)a2 activeScales:(id)a3 activeScenarios:(id)a4 dataSet:(id)a5 updateType:(long long)a6;
- (void)_addRunningTask:(id)a0;
- (id)initWithManifestConfiguration:(id)a0 mapLayerDataManager:(id)a1;
- (void)_removeRunningTask:(id)a0;
- (void).cxx_destruct;

@end
