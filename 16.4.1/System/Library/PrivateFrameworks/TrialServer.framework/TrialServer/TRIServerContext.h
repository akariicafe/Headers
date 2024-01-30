@class TRITaskDatabase, TRIRolloutDatabase, TRISQLiteCKDatabase, TRILimitedCarryProfileManager, TRIExperimentDatabase, TRIClient, TRIMLRuntimeEvaluationHistoryDatabase, TRIContentTracker, TRIKVStore, TRIActivationEventDatabase, TRINamespaceDatabase, TRIExperimentHistoryDatabase, TRISQLiteCKDatabaseFailureInjectionDelegate, TRIDatabase;
@protocol TRIPaths, TRIXPCActivityManagementProtocol, TRIPushServiceConnectionMultiplexing, TRITaskQueuing;

@interface TRIServerContext : NSObject

@property (readonly, nonatomic) TRIDatabase *underlyingDatabase;
@property (retain, nonatomic) id<TRITaskQueuing> taskQueue;
@property (retain, nonatomic) id<TRIPushServiceConnectionMultiplexing> pushServiceMuxer;
@property (readonly, nonatomic) id<TRIPaths> paths;
@property (readonly, nonatomic) TRIExperimentDatabase *experimentDatabase;
@property (readonly, nonatomic) TRIActivationEventDatabase *activationEventDatabase;
@property (readonly, nonatomic) TRIExperimentHistoryDatabase *experimentHistoryDatabase;
@property (readonly, nonatomic) TRINamespaceDatabase *namespaceDatabase;
@property (readonly, nonatomic) TRIRolloutDatabase *rolloutDatabase;
@property (readonly, nonatomic) TRIMLRuntimeEvaluationHistoryDatabase *evaluationHistoryDatabase;
@property (readonly, nonatomic) TRITaskDatabase *taskDatabase;
@property (readonly, nonatomic) TRIClient *client;
@property (readonly, nonatomic) TRIKVStore *keyValueStore;
@property (readonly, nonatomic) TRIContentTracker *contentTracker;
@property (retain) TRISQLiteCKDatabase *fakeCKDatabase;
@property (retain, nonatomic) TRISQLiteCKDatabaseFailureInjectionDelegate *failureInjectionDelegate;
@property (retain, nonatomic) TRILimitedCarryProfileManager *limitedCarryManager;
@property (readonly, weak, nonatomic) id<TRIXPCActivityManagementProtocol> xpcActivityManager;
@property (nonatomic) BOOL useCKNative;

- (void)setXpcActivityManager:(id)a0;
- (void)_logInitErrorWithClient:(id)a0 message:(id)a1;
- (void)logErrorMetric:(id)a0;
- (id)ensureFakeCKDatabase;
- (id)initWithPaths:(id)a0 client:(id)a1 storageManagement:(id)a2;
- (id)init;
- (id)initWithPaths:(id)a0 client:(id)a1 storageManagement:(id)a2 xpcActivityManagement:(id)a3;
- (void).cxx_destruct;

@end
