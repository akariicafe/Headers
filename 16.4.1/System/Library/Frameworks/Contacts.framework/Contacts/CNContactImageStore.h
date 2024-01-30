@class CNContactMetadataPersistentStoreManager;

@interface CNContactImageStore : NSObject

@property (retain, nonatomic) CNContactMetadataPersistentStoreManager *storeManager;

+ (long long)maximumContactImagesPerContact;

- (id)init;
- (void).cxx_destruct;
- (id)performFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)performSaveRequest:(id)a0 error:(id *)a1;
- (void)ensureImageQuotasForImages:(id)a0 inContext:(id)a1;
- (id)initWithContactMetadataStoreManager:(id)a0;
- (void)insertContactImage:(id)a0 withContactIdentifier:(id)a1 inContext:(id)a2;
- (id)managedObjectsToContactImages:(id)a0;
- (BOOL)updateExistingImages:(id)a0 withContactImage:(id)a1;
- (BOOL)updateOrInsertNewContactImages:(id)a0 forContactIdentifier:(id)a1 inContext:(id)a2 error:(id *)a3;

@end
