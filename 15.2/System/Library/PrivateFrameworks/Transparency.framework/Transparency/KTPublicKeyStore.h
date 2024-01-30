@class NSArray, NSMutableDictionary, NSDictionary, KTApplicationPublicKeyStore, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface KTPublicKeyStore : NSObject

@property (retain) NSMutableDictionary *_applicationKeyStores;
@property (retain) NSArray *applications;
@property (retain) KTApplicationPublicKeyStore *tltKeyStore;
@property BOOL forceRefresh;
@property (retain) NSObject<OS_dispatch_group> *configureGroup;
@property (retain) NSObject<OS_dispatch_queue> *configureQueue;
@property (readonly) BOOL ready;
@property (readonly) NSDictionary *applicationKeyStores;

- (void)clearApplicationState:(id)a0 error:(id *)a1;
- (id)initWithDataStore:(id)a0;
- (id)createApplicationKeyStore:(id)a0 keyStoreData:(id)a1 dataStore:(id)a2 error:(id *)a3;
- (BOOL)hasApplicationPublicKeyStoreOnDisk:(id)a0 error:(id *)a1;
- (BOOL)writePublicKeyStoreToDisk:(id)a0 error:(id *)a1;
- (BOOL)configureWithDisk:(id)a0 error:(id *)a1;
- (id)createApplicationKeyStore:(id)a0 keyStoreResponse:(id)a1 dataStore:(id)a2 error:(id *)a3;
- (BOOL)saveDiskApplicationKeyStore:(id)a0 error:(id *)a1;
- (void)fetchKeyStore:(id)a0 application:(id)a1 completionHandler:(id /* block */)a2;
- (void)configureWithClient:(id)a0 ignoreCachedKeys:(BOOL)a1 dataStore:(id)a2 applicationHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)copyMetadata;
- (void).cxx_destruct;
- (id)readPublicKeyStoreFromDisk:(id *)a0;
- (id)keyStoreFileName;
- (void)configureWithClient:(id)a0 dataStore:(id)a1 applicationHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)copyKeyStoreState;
- (void)updateTLTKeyStoreWithApplicationKeyStore:(id)a0;
- (BOOL)clearDiskApplicationKeyStore:(id)a0 error:(id *)a1;

@end
