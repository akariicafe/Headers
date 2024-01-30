@class NSObject, _DECBackupHelper, _DECUpdatePredictionsNotification, _DECPredictionMap, _DECFeedbackBuilder, NSMutableArray;
@protocol _DECRankBuilder, OS_dispatch_queue;

@interface _DECServerResponder : NSObject <_DECServerResponder> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_servers;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _serversRWLock;
    _DECFeedbackBuilder *_feedbackBuilder;
    _DECBackupHelper *_backupHelper;
    _DECPredictionMap *_predictionsAwaitingFeedback;
    _DECUpdatePredictionsNotification *_updateNotification;
}

@property (retain, nonatomic) id<_DECRankBuilder> rankBuilder;

+ (id)sharedInstance;

- (id)_consumers;
- (BOOL)is2GBOrLargerDevice;
- (void)_setupFeedbackBuilder;
- (void)removeServer:(id)a0;
- (id)_validExperts;
- (void)predictionForCategories:(unsigned long long)a0 consumer:(unsigned long long)a1 criteria:(id)a2 limit:(unsigned long long)a3 backgroundQuery:(BOOL)a4 providesFeedback:(BOOL)a5 reply:(id /* block */)a6;
- (void)predictionForCategories:(unsigned long long)a0 consumer:(unsigned long long)a1 limit:(unsigned long long)a2 providesFeedback:(BOOL)a3 reply:(id /* block */)a4;
- (void)restoreModels;
- (id)_validConsumers;
- (void)userAbandoned:(id)a0 result:(id)a1 metadata:(id)a2 reply:(id /* block */)a3;
- (void).cxx_destruct;
- (void)predictionForCategories:(unsigned long long)a0 consumer:(unsigned long long)a1 criteria:(id)a2 limit:(unsigned long long)a3 providesFeedback:(BOOL)a4 reply:(id /* block */)a5;
- (void)registerClient:(long long)a0 category:(unsigned long long)a1 identifier:(id)a2 reply:(id /* block */)a3;
- (id)init;
- (void)saveModels;
- (id)_experts;
- (void)userEngaged:(id)a0 result:(id)a1 metadata:(id)a2 reply:(id /* block */)a3;
- (void)trainExperts;
- (void)dealloc;
- (void)setPrediction:(id)a0 category:(unsigned long long)a1 consumer:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)addServer:(id)a0;
- (void)prewarmPredictionForCategories:(unsigned long long)a0 consumer:(unsigned long long)a1 reply:(id /* block */)a2;

@end
