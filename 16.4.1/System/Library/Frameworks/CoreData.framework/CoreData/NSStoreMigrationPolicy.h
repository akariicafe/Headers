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
    BOOL _forcedMigration;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
}

+ (void)setMigrationDebugLevel:(int)a0;
+ (int)migrationDebugLevel;
+ (id)destinationURLForMigrationSourceURL:(id)a0 createDocumentReplacementDirectory:(BOOL)a1 error:(id *)a2;
+ (id)migrationStoreOptionsFromStoreOptions:(id)a0;

- (void)dealloc;
- (id)createMigrationManagerForSourceModel:(id)a0 destinationModel:(id)a1 error:(id *)a2;
- (id)migrateStoreAtURL:(id)a0 withManager:(id)a1 metadata:(id)a2 options:(id)a3 error:(id *)a4;
- (id)sourceModelForStoreAtURL:(id)a0 metadata:(id)a1 error:(id *)a2;

@end
