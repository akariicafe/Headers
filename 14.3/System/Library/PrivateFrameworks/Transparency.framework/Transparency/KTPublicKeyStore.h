@class NSArray, NSMutableDictionary, NSDictionary, KTApplicationPublicKeyStore;

@interface KTPublicKeyStore : NSObject

@property (retain) NSMutableDictionary *_applicationKeyStores;
@property (retain) NSArray *applications;
@property (retain) KTApplicationPublicKeyStore *tltKeyStore;
@property BOOL forceRefresh;
@property (readonly) BOOL ready;
@property (readonly) NSDictionary *applicationKeyStores;

- (id)initWithDataStore:(id)a0;
- (void).cxx_destruct;
- (void)configureWithClient:(id)a0 ignoreCachedKeys:(BOOL)a1 dataStore:(id)a2 completionHandler:(id /* block */)a3;
- (void)clearApplicationState:(id)a0 error:(id *)a1;
- (id)copyKeyStoreState;
- (id)copyMetadata;
- (id)readPublicKeyStoreFromDisk:(id *)a0;
- (BOOL)writePublicKeyStoreToDisk:(id)a0 error:(id *)a1;
- (id)createApplicationKeyStore:(id)a0 keyStoreResponse:(id)a1 dataStore:(id)a2 error:(id *)a3;
- (void)updateTLTKeyStoreWithApplicationKeyStore:(id)a0;
- (BOOL)saveDiskApplicationKeyStore:(id)a0 error:(id *)a1;
- (BOOL)configureWithDisk:(id)a0 error:(id *)a1;
- (void)fetchKeyStore:(id)a0 application:(id)a1 completionHandler:(id /* block */)a2;
- (id)createApplicationKeyStore:(id)a0 keyStoreData:(id)a1 dataStore:(id)a2 error:(id *)a3;
- (BOOL)clearDiskApplicationKeyStore:(id)a0 error:(id *)a1;
- (BOOL)hasApplicationPublicKeyStoreOnDisk:(id)a0 error:(id *)a1;
- (void)configureWithClient:(id)a0 dataStore:(id)a1 completionHandler:(id /* block */)a2;

@end
