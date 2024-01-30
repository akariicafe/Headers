@class NSMappingModel, NSString, NSManagedObjectModel, NSDictionary, NSSet;

@interface PFUbiquityTransactionLogMigrator : NSObject {
    NSManagedObjectModel *_srcModel;
    NSManagedObjectModel *_dstModel;
    NSMappingModel *_mappingModel;
    NSString *_localPeerID;
    NSDictionary *_mappingsByEntityName;
    NSSet *_removedEntities;
    BOOL _throttleLogs;
}

- (void)populateMappingsByEntityName;
- (id)createDestinationObjectsFromSourceObjects:(id)a0 migrationContext:(id)a1;
- (id)createDestinationObjectContentFromSourceObjectContent:(id)a0 withEntityMapping:(id)a1 migrationContext:(id)a2;
- (id)initWithSourceModel:(id)a0 destinationModel:(id)a1 mappingModel:(id)a2 localPeerID:(id)a3;
- (void)dealloc;

@end
