@class GEOResourceManifestConfiguration, NSString, NSObject, GEOReportedProgress, NSSet, GEOTileGroup, NSProgress, GEOActiveTileGroupMigrationTaskOptions, GEOResources, GEORegionalResourcesVersionMigrator;
@protocol OS_dispatch_queue, NSObject;

@interface _GEORegionalResourcesVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask> {
    GEORegionalResourcesVersionMigrator *_migrator;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOTileGroup *_newTileGroup;
    GEOResources *_resourceManifest;
    NSSet *_activeScales;
    NSSet *_activeScenarios;
    id /* block */ _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOReportedProgress *_progress;
}

@property (readonly, nonatomic) long long estimatedWeight;
@property (retain, nonatomic) id<NSObject> transaction;
@property (retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options;
@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_resourcesDirectory:(id)a0;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0 callbackQueue:(id)a1;
- (void)populateTileGroup:(id)a0;
- (id)_resourcesDirectory;
- (void)removeOldData:(id)a0;
- (id)initWithMigrator:(id)a0 manifestConfiguration:(id)a1 newTileGroup:(id)a2 inResourceManifest:(id)a3 activeScales:(id)a4 activeScenarios:(id)a5;

@end
