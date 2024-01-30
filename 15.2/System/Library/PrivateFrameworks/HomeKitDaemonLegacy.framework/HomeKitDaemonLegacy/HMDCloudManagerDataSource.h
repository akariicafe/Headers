@class HMDHomeManager;

@interface HMDCloudManagerDataSource : HMFObject

@property (readonly, weak) HMDHomeManager *homeManager;

- (BOOL)isKeychainSyncEnabled;
- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsKeyTransferServer;
- (BOOL)isControllerKeyAvailable;
- (id)queryDatabaseOperationWithBlock:(id /* block */)a0;
- (id)keyTransferAgent;
- (unsigned long long)dataMigrationOptions;

@end
