@class NSString, NSURL, NSArray, NSDictionary, NSPersistentStoreCoordinator, NSMigrationManager, NSMappingModel, NSManagedObjectModel;

@interface NSStoreMigrationPolicy : NSObject {
    NSPersistentStoreCoordinator *_coordinator;
    NSURL *_sourceURL;
    NSString *_sourceConfiguration;
    NSDictionary *_sourceOptions;
    NSManagedObjectModel *_sourceModel;
    NSDictionary *_sourceMetadata;
    NSMappingModel *_mappingModel;
    NSURL *_destinationURL;
    NSString *_destinationType;
    NSString *_destinationConfiguration;
    NSDictionary *_destinationOptions;
    NSMigrationManager *_migrationManager;
    NSArray *_resourceBundles;
    long long _workingWithSkewedSource;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
}

+ (id)migrationStoreOptionsFromStoreOptions:(id)a0;
+ (id)destinationURLForMigrationSourceURL:(id)a0 createDocumentReplacementDirectory:(BOOL)a1 error:(id *)a2;
+ (int)migrationDebugLevel;
+ (void)setMigrationDebugLevel:(int)a0;

- (void)setSourceURL:(id)a0;
- (id)sourceURL;
- (id)sourceType;
- (id)persistentStoreCoordinator;
- (void)setDestinationURL:(id)a0;
- (id)destinationURL;
- (id)sourceModel;
- (id)mappingModel;
- (id)destinationModel;
- (void)setPersistentStoreCoordinator:(id)a0 sourceURL:(id)a1 configuration:(id)a2 metadata:(id)a3 options:(id)a4;
- (id)_gatherDataAndPerformMigration:(id *)a0;
- (void)dealloc;
- (id)resourceBundles;
- (void)setSourceMetadata:(id)a0;
- (id)_sourceModelForVersionHashes:(id)a0 withMetadata:(id)a1 inBundles:(id)a2 outPaths:(id)a3;
- (id)sourceOptions;
- (id)sourceMetadata;
- (BOOL)migrateStoreAtURL:(id)a0 toURL:(id)a1 storeType:(id)a2 options:(id)a3 withManager:(id)a4 error:(id *)a5;
- (id)sourceModelForStoreAtURL:(id)a0 metadata:(id)a1 error:(id *)a2;
- (id)createMigrationManagerForSourceModel:(id)a0 destinationModel:(id)a1 error:(id *)a2;
- (id)migrateStoreAtURL:(id)a0 withManager:(id)a1 metadata:(id)a2 options:(id)a3 error:(id *)a4;
- (id)sourceConfiguration;
- (id)externalDataReferencesURLForDestination:(id)a0 forStoreOfType:(id)a1;
- (void)setSourceModel:(id)a0;
- (id)mappingModelForSourceModel:(id)a0 destinationModel:(id)a1 error:(id *)a2;
- (void)setMappingModel:(id)a0;
- (void)setDestinationOptions:(id)a0;
- (id)destinationOptionsForMigration:(id)a0 sourceMetadata:(id)a1 error:(id *)a2;
- (id)destinationOptions;
- (id)destinationConfiguration;
- (id)destinationTypeForMigration:(id)a0 sourceMetadata:(id)a1 error:(id *)a2;
- (void)setMigrationManager:(id)a0;
- (void)setResourceBundles:(id)a0;
- (id)destinationConfigurationForMigration:(id)a0 sourceMetadata:(id)a1 error:(id *)a2;
- (void)setDestinationConfiguration:(id)a0;
- (void)setSourceOptions:(id)a0;
- (void)willPerformMigrationWithManager:(id)a0;
- (void)handleMigrationError:(id)a0 inManager:(id)a1;
- (void)didPerformMigrationWithManager:(id)a0;
- (id)addMigratedStoreToCoordinator:(id)a0 withType:(id)a1 configuration:(id)a2 URL:(id)a3 options:(id)a4 error:(id *)a5;
- (void)setSourceConfiguration:(id)a0;
- (void)setPersistentStoreCoordinator:(id)a0;
- (void)setDestinationType:(id)a0;
- (id)migrationManager;
- (id)destinationType;

@end
