@class NSPersistentStore, PFUbiquityLocation, NSPersistentStoreCoordinator, PFUbiquityMetadataFactoryFilePresenter;

@interface PFUbiquityMetadataFactoryEntry : NSObject {
    PFUbiquityLocation *_metadataStoreFileLocation;
    NSPersistentStoreCoordinator *_psc;
    NSPersistentStore *_store;
    PFUbiquityMetadataFactoryFilePresenter *_filePresenter;
}

- (id)initWithMetadataStoreFileLocation:(id)a0;
- (id)description;
- (id)init;
- (void)dealloc;

@end
