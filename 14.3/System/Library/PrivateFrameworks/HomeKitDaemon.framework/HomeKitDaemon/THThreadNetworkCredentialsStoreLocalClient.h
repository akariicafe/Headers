@class NSString;
@protocol THThreadNetworkCredentialsBackingStore;

@interface THThreadNetworkCredentialsStoreLocalClient : NSObject <THThreadNetworkCredentialsStore>

@property (readonly, nonatomic) NSString *keychainAccessGroup;
@property (readonly, weak, nonatomic) id<THThreadNetworkCredentialsBackingStore> backingStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initApplePrivateStoreWithBackingStore:(id)a0;
- (void)retrieveRecordWithUniqueIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)retrieveAllRecordsForNetwork:(id)a0 completion:(id /* block */)a1;
- (void)retrieveAllRecordsWithCompletion:(id /* block */)a0;
- (void)deleteRecordWithUniqueIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)initWithKeychainAccessGroup:(id)a0 backingStore:(id)a1;
- (void)storeCredentials:(id)a0 waitForSync:(BOOL)a1 forNetwork:(id)a2 completion:(id /* block */)a3;
- (void)storeCredentials:(id)a0 forNetwork:(id)a1 completion:(id /* block */)a2;
- (void)deleteRecordForNetwork:(id)a0 completion:(id /* block */)a1;

@end
