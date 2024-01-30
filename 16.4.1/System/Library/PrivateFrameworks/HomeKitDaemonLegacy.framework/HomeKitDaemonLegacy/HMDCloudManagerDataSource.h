@class HMDHomeManager;

@interface HMDCloudManagerDataSource : HMFObject

@property (readonly, weak) HMDHomeManager *homeManager;

- (id)initWithHomeManager:(id)a0;
- (BOOL)supportsKeyTransferServer;
- (BOOL)isKeychainSyncEnabled;
- (void).cxx_destruct;
- (unsigned long long)dataMigrationOptions;
- (BOOL)isControllerKeyAvailable;
- (id)keyTransferAgent;
- (id)queryDatabaseOperationWithBlock:(id /* block */)a0;

@end
