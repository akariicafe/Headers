@class NSSQLiteAdapter, NSString, NSSQLCore, NSArray, NSMutableDictionary, NSSQLiteConnection, NSMutableArray, NSMappingModel, NSSQLModel;

@interface _NSSQLiteStoreMigrator : NSObject {
    NSSQLCore *_store;
    NSSQLModel *_dstModel;
    NSSQLModel *_srcModel;
    NSSQLiteAdapter *_adapter;
    NSMappingModel *_mappingModel;
    NSSQLiteConnection *_connection;
    NSArray *_tableGenerationSQL;
    NSArray *_existingTableNames;
    NSMutableDictionary *_reindexedEntities;
    NSMutableDictionary *_reindexedPropertiesByEntity;
    NSMutableDictionary *_sourceToDestinationEntityMap;
    NSMutableDictionary *_addedEntityMigrations;
    NSMutableDictionary *_removedEntityMigrations;
    NSMutableDictionary *_transformedEntityMigrations;
    NSMutableDictionary *_copiedEntityMigrations;
    NSMutableDictionary *_tableMigrationDescriptionsByEntity;
    BOOL _hasPKTableChanges;
    NSMutableArray *_pkTableUpdateStatements;
    NSMutableDictionary *_attributeExtensionsToUpdate;
    NSMutableArray *_indexesToCreate;
    NSMutableArray *_indexesToDrop;
    NSMutableArray *_defaultValueStatements;
    NSMutableArray *_derivationsToDrop;
    NSMutableArray *_derivationsToRun;
    NSMutableDictionary *_historyMigrationPropertyDataForEntityCache;
    NSMutableArray *_cloudKitUpdateStatements;
    BOOL _hasCloudKitTables;
    BOOL _hasDeferredLightweightMigration;
    BOOL _forcedMigration;
}

@property (retain, nonatomic) NSString *destinationConfigurationForCloudKitValidation;

+ (void)_setAnnotatesMigrationMetadata:(BOOL)a0;
+ (BOOL)_annotatesMigrationMetadata;

- (void)dealloc;

@end
