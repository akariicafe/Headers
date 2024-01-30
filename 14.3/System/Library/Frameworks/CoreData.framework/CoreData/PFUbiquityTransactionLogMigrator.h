@class NSMappingModel, NSString, NSManagedObjectModel, NSDictionary, NSSet;

@interface PFUbiquityTransactionLogMigrator : NSObject {
    NSManagedObjectModel *_srcModel;
    NSManagedObjectModel *_dstModel;
    NSMappingModel *_mappingModel;
    NSString *_localPeerID;
    NSDictionary *_mappingsByEntityName;
    NSSet *_removedEntities;
}

@property (readonly) BOOL throttleLogs;

- (void)dealloc;
- (void)populateMappingsByEntityName;
- (BOOL)migrateTransactionLogFromLocation:(id)a0 toLocation:(id)a1 error:(id *)a2;
- (BOOL)migrateBaselineFromLocation:(id)a0 toLocation:(id)a1 error:(id *)a2;
- (id)createDestinationObjectsFromSourceObjects:(id)a0 migrationContext:(id)a1;
- (id)createDestinationGlobalObjectIDFromSourceGlobalObjectID:(id)a0;
- (id)createDestinationObjectContentFromSourceObjectContent:(id)a0 withEntityMapping:(id)a1 migrationContext:(id)a2;
- (id)initWithSourceModel:(id)a0 destinationModel:(id)a1 mappingModel:(id)a2 localPeerID:(id)a3;
- (BOOL)migrateTransactionLogsForStoreName:(id)a0 andLocalPeerID:(id)a1 atUbiquityRootLocation:(id)a2 error:(id *)a3;

@end
