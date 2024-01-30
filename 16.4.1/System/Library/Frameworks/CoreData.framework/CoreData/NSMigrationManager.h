@class NSEntityMapping, NSString, NSManagedObjectContext, NSError, NSDictionary, NSMigrationContext, NSMappingModel, NSManagedObjectModel;

@interface NSMigrationManager : NSObject {
    NSManagedObjectModel *_sourceModel;
    NSDictionary *_sourceEntitiesByVersionHash;
    NSManagedObjectModel *_destinationModel;
    NSDictionary *_destinationEntitiesByVersionHash;
    NSMappingModel *_mappingModel;
    NSManagedObjectContext *_sourceManagedObjectContext;
    NSManagedObjectContext *_destinationManagedObjectContext;
    NSMigrationContext *_migrationContext;
    NSDictionary *_userInfo;
    struct _migrationManagerFlags { unsigned char _migrationWasCancelled : 1; unsigned char _usesStoreSpecificMigrationManager : 1; unsigned char _migrationWasInPlace : 1; unsigned char _forcedMigration : 1; unsigned int _reservedMigrationManager : 28; } _migrationManagerFlags;
    NSError *_migrationCancellationError;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
}

@property (retain, nonatomic) NSString *destinationConfigurationForCloudKitValidation;
@property (retain, nonatomic) NSString *destinationConfigurationForCloudKitValidation;
@property BOOL usesStoreSpecificMigrationManager;
@property (readonly) NSMappingModel *mappingModel;
@property (readonly) NSManagedObjectModel *sourceModel;
@property (readonly) NSManagedObjectModel *destinationModel;
@property (readonly) NSManagedObjectContext *sourceContext;
@property (readonly) NSManagedObjectContext *destinationContext;
@property (readonly) NSEntityMapping *currentEntityMapping;
@property (readonly) float migrationProgress;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (void)setMigrationDebugLevel:(int)a0;
+ (int)migrationDebugLevel;
+ (BOOL)_canMigrateWithMappingModel:(id)a0;

- (void)dealloc;
- (void)reset;
- (id)destinationInstancesForSourceRelationshipNamed:(id)a0 sourceInstances:(id)a1;
- (void)associateSourceInstance:(id)a0 withDestinationInstance:(id)a1 forEntityMapping:(id)a2;
- (void)cancelMigrationWithError:(id)a0;
- (id)currentPropertyMapping;
- (id)destinationEntityForEntityMapping:(id)a0;
- (id)destinationInstancesForEntityMappingNamed:(id)a0 sourceInstances:(id)a1;
- (id)fetchRequestForSourceEntityNamed:(id)a0 predicateString:(id)a1;
- (id)fetchRequestForSourceEntityNamed:(id)a0 predicateString:(id)a1 includesSubentities:(BOOL)a2;
- (id)initWithSourceModel:(id)a0 destinationModel:(id)a1;
- (BOOL)migrateStoreFromURL:(id)a0 type:(id)a1 options:(id)a2 withMappingModel:(id)a3 toDestinationURL:(id)a4 destinationType:(id)a5 destinationOptions:(id)a6 error:(id *)a7;
- (id)sourceEntityForEntityMapping:(id)a0;
- (id)sourceInstancesForEntityMappingNamed:(id)a0 destinationInstances:(id)a1;

@end
