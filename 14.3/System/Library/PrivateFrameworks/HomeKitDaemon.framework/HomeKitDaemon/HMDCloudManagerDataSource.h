@class HMDHomeManager;

@interface HMDCloudManagerDataSource : HMFObject

@property (readonly, weak) HMDHomeManager *homeManager;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0;
- (BOOL)isKeychainSyncEnabled;
- (BOOL)supportsKeyTransferServer;
- (id)keyTransferAgent;
- (BOOL)isControllerKeyAvailable;
- (unsigned long long)dataMigrationOptions;
- (id)queryDatabaseOperationWithBlock:(id /* block */)a0;

@end
