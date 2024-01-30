@class NSString, PFUbiquityLocation, NSPersistentStore, NSSQLiteConnection;

@interface PFUbiquityStoreMetadataMedic : NSObject

@property (readonly, nonatomic) NSString *localPeerID;
@property (readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation;
@property (readonly, nonatomic) NSString *storeName;
@property (readonly, nonatomic) NSPersistentStore *store;
@property (readonly, nonatomic) NSSQLiteConnection *connection;

- (void)dealloc;
- (id)initWithStore:(id)a0 localPeerID:(id)a1 andUbiquityRootLocation:(id)a2;
- (BOOL)recoverMetadataWithError:(id *)a0;
- (BOOL)recoverBaselineMetadataWithImportContext:(id)a0 error:(id *)a1;
- (BOOL)recoverTransactionLogMetadataWithImportContext:(id)a0 error:(id *)a1;
- (BOOL)addTransactionHistoryEntriesForObjectIDs:(id)a0 withImportContext:(id)a1 error:(id *)a2;
- (BOOL)cacheMetadataForTransactionLog:(id)a0 withImportContext:(id)a1 error:(id *)a2;

@end
