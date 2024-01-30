@class TRITaskDatabase, TRIContentTracker, TRINamespaceDatabase, TRIKVStore, TRIDatabase, TRIExperimentDatabase, TRIClient, TRIExperimentHistoryDatabase;
@protocol TRIXPCActivityManagementProtocol, TRIPaths;

@interface TRIServerContext : NSObject

@property (readonly, nonatomic) TRIDatabase *underlyingDatabase;
@property (readonly, nonatomic) id<TRIPaths> paths;
@property (readonly, nonatomic) TRIExperimentDatabase *experimentDatabase;
@property (readonly, nonatomic) TRIExperimentHistoryDatabase *experimentHistoryDatabase;
@property (readonly, nonatomic) TRINamespaceDatabase *namespaceDatabase;
@property (readonly, nonatomic) TRITaskDatabase *taskDatabase;
@property (readonly, nonatomic) TRIClient *client;
@property (readonly, nonatomic) TRIKVStore *keyValueStore;
@property (readonly, nonatomic) TRIContentTracker *contentTracker;
@property (readonly, weak, nonatomic) id<TRIXPCActivityManagementProtocol> xpcActivityManager;
@property (nonatomic) BOOL useCKNative;

- (id)init;
- (void).cxx_destruct;
- (void)setXpcActivityManager:(id)a0;
- (void)logErrorMetric:(id)a0;
- (id)initWithPaths:(id)a0 client:(id)a1 storageManagement:(id)a2 xpcActivityManagement:(id)a3;
- (void)_logInitErrorWithClient:(id)a0 message:(id)a1;
- (id)initWithPaths:(id)a0 client:(id)a1 storageManagement:(id)a2;

@end
