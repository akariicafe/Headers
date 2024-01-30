@class NSPersistentStore, NSPersistentStoreCoordinator, PFUbiquityLocation, PFUbiquityMetadataFactoryFilePresenter;

@interface PFUbiquityMetadataFactoryEntry : NSObject

@property (readonly, nonatomic) PFUbiquityLocation *metadataStoreFileLocation;
@property (readonly, nonatomic) PFUbiquityMetadataFactoryFilePresenter *filePresenter;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *psc;
@property (readonly, nonatomic) NSPersistentStore *store;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithMetadataStoreFileLocation:(id)a0;
- (BOOL)initializePersistentStoreCoordinator:(id *)a0;

@end
