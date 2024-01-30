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
    struct _migrationManagerFlags { unsigned char _migrationWasCancelled : 1; unsigned char _usesStoreSpecificMigrationManager : 1; unsigned char _migrationWasInPlace : 1; unsigned int _reservedMigrationManager : 29; } _migrationManagerFlags;
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

+ (BOOL)_canMigrateWithMappingModel:(id)a0;
+ (BOOL)_performSanityCheckForMapping:(id)a0 fromSourceModel:(id)a1 toDestinationModel:(id)a2;
+ (int)migrationDebugLevel;
+ (void)setMigrationDebugLevel:(int)a0;

- (BOOL)migrateStoreFromURL:(id)a0 type:(id)a1 options:(id)a2 withMappingModel:(id)a3 toDestinationURL:(id)a4 destinationType:(id)a5 destinationOptions:(id)a6 error:(id *)a7;
- (BOOL)_migrateStoreFromURL:(id)a0 type:(id)a1 options:(id)a2 withMappingModel:(id)a3 toDestinationURL:(id)a4 destinationType:(id)a5 destinationOptions:(id)a6 error:(id *)a7;
- (id)currentPropertyMapping;
- (void)_doCleanupOnFailure:(id)a0;
- (id)_mappingNamed:(id)a0;
- (id)sourceEntityForEntityMapping:(id)a0;
- (id)destinationInstancesForEntityMappingNamed:(id)a0 sourceInstances:(id)a1;
- (id)destinationInstancesForSourceRelationshipNamed:(id)a0 sourceInstances:(id)a1;
- (void)cancelMigrationWithError:(id)a0;
- (id)_evaluateSourceExpressionForMapping:(id)a0 entityPolicy:(id)a1;
- (id)fetchRequestForSourceEntityNamed:(id)a0 predicateString:(id)a1 includesSubentities:(BOOL)a2;
- (BOOL)_performedInPlaceMigration;
- (BOOL)_doFirstPassForMapping:(id)a0 error:(id *)a1;
- (BOOL)_doSecondPassForMapping:(id)a0 error:(id *)a1;
- (BOOL)_validateAllObjectsAfterMigration:(id *)a0;
- (BOOL)_doThirdPassForMapping:(id)a0 error:(id *)a1;
- (void)_setPerformedInPlaceMigration:(BOOL)a0;
- (id)fetchRequestForSourceEntityNamed:(id)a0 predicateString:(id)a1;
- (void)reset;
- (void)dealloc;
- (id)initWithSourceModel:(id)a0 destinationModel:(id)a1;
- (id)_migrationContext;
- (id)destinationEntityForEntityMapping:(id)a0;
- (void)associateSourceInstance:(id)a0 withDestinationInstance:(id)a1 forEntityMapping:(id)a2;
- (id)sourceInstancesForEntityMappingNamed:(id)a0 destinationInstances:(id)a1;

@end
