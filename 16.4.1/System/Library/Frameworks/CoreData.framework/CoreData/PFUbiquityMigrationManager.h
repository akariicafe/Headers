@class NSManagedObjectModel, PFUbiquityLocation, NSString;

@interface PFUbiquityMigrationManager : NSObject {
    NSManagedObjectModel *_destinationModel;
    NSManagedObjectModel *_sourceModel;
    PFUbiquityLocation *_rootLocation;
    NSString *_localPeerID;
}

- (void)dealloc;
- (id)initWithDestinationModel:(id)a0 sourceModel:(id)a1 ubiquityRootLocation:(id)a2 localPeerID:(id)a3;
- (id)initWithDestinationModel:(id)a0 storeName:(id)a1 previousModelVersionHash:(id)a2 ubiquityRootLocation:(id)a3 localPeerID:(id)a4;

@end
