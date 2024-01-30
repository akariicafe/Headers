@class _DECBackupHelper, NSString, NSXPCConnection, PETGoalConversionEventTracker, PETDistributionEventTracker, NSObject, PETScalarEventTracker;
@protocol OS_dispatch_queue, _DECExpertDelegate;

@interface _DECExpert : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    _DECBackupHelper *_backupHelper;
    PETGoalConversionEventTracker *_predictionResultTracker;
    PETDistributionEventTracker *_predictionTimeTracker;
    PETScalarEventTracker *_saveModelTracker;
    PETScalarEventTracker *_restoreModelTracker;
}

@property (nonatomic) unsigned long long category;
@property (retain, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<_DECExpertDelegate> delegate;

- (void)receiveFeedback:(id)a0 consumer:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)predictionForCategories:(unsigned long long)a0 consumer:(unsigned long long)a1 criteria:(id)a2 limit:(unsigned long long)a3 reply:(id /* block */)a4;
- (id)init;
- (void).cxx_destruct;
- (void)prewarmPredictionForCategories:(unsigned long long)a0 consumer:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)initWithCategory:(unsigned long long)a0 identifier:(id)a1;
- (void)restoreModelWithReply:(id /* block */)a0;
- (void)saveModelWithByteLimit:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)trainWithReply:(id /* block */)a0;
- (void)setPrediction:(id)a0 category:(unsigned long long)a1 consumer:(unsigned long long)a2;

@end
