@class CNContactMetadataPersistentStoreManager;

@interface CNContactImageStore : NSObject

@property (retain, nonatomic) CNContactMetadataPersistentStoreManager *storeManager;

+ (long long)maximumContactImagesPerContact;

- (id)performFetchRequest:(id)a0 error:(id *)a1;
- (id)initWithContactMetadataStoreManager:(id)a0;
- (id)managedObjectsToContactImages:(id)a0;
- (BOOL)updateExistingImagesIfNeededWithNewContactImage:(id)a0 forContactIdentifier:(id)a1 inContext:(id)a2 error:(id *)a3;
- (void)insertContactImage:(id)a0 withContactIdentifier:(id)a1 inContext:(id)a2;
- (void)ensureImageQuotasForImages:(id)a0 inContext:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)performSaveRequest:(id)a0 error:(id *)a1;

@end
