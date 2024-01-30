@class NSString;

@interface THThreadNetworkCredentialsKeychainBackingStore : NSObject <THThreadNetworkCredentialsBackingStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultBackingStore;

- (void)retrieveRecordWithUniqueIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_doFetchRecords:(id)a0 error:(id *)a1;
- (void)errorout:(int)a0 completion:(id /* block */)a1;
- (void)storeRecord:(id)a0 waitForSync:(BOOL)a1 completion:(id /* block */)a2;
- (void)storeRecordAndSync:(id)a0 completion:(id /* block */)a1;
- (void)retrieveAllRecordsForNetwork:(id)a0 completion:(id /* block */)a1;
- (void)retrieveAllRecordsWithCompletion:(id /* block */)a0;
- (void)storeRecord:(id)a0 completion:(id /* block */)a1;
- (void)deleteRecordWithUniqueIdentifier:(id)a0 completion:(id /* block */)a1;

@end
