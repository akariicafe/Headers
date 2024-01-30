@class NSManagedObjectModel, PFUbiquityLocation, NSString;

@interface PFUbiquityMigrationManager : NSObject {
    NSString *_localPeerID;
}

@property (readonly) NSManagedObjectModel *sourceModel;
@property (readonly) NSManagedObjectModel *destinationModel;
@property (readonly) PFUbiquityLocation *rootLocation;

- (void)dealloc;
- (id)initWithDestinationModel:(id)a0 sourceModel:(id)a1 ubiquityRootLocation:(id)a2 localPeerID:(id)a3;
- (id)initWithDestinationModel:(id)a0 storeName:(id)a1 previousModelVersionHash:(id)a2 ubiquityRootLocation:(id)a3 localPeerID:(id)a4;
- (BOOL)migrateTransactionLogs:(BOOL)a0 andBaselineIfNecessaryForStoreName:(id)a1 peerID:(id)a2 error:(id *)a3;

@end
