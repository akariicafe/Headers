@class NSXPCConnection, _DECResult, PETScalarEventTracker, NSObject;
@protocol OS_dispatch_queue;

@interface _DECConsumer : NSObject {
    id /* block */ _handler;
    _DECResult *_cachedResult;
    _Atomic unsigned long long _category;
    _Atomic unsigned long long _consumerType;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _startedMonitoring;
    unsigned long long _limit;
    PETScalarEventTracker *_consumerInitTracker;
}

@property unsigned long long category;
@property unsigned long long consumerType;

- (void)fetchPredictionsWithLimit:(unsigned long long)a0 providesFeedback:(BOOL)a1 handler:(id /* block */)a2;
- (id)init;
- (void)handleDaemonStart;
- (void).cxx_destruct;
- (void)fetchPredictionsWithLimit:(unsigned long long)a0 criteria:(id)a1 timeout:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)dealloc;
- (void)stopMonitoringForPredictions;
- (void)receivePrediction:(id)a0 consumer:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)fetchPredictionsWithLimit:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)fetchPredictionsWithLimit:(unsigned long long)a0 criteria:(id)a1 handler:(id /* block */)a2;
- (id)initWithCategory:(unsigned long long)a0 consumerType:(unsigned long long)a1 queue:(id)a2;
- (void)startMonitoringForPredictionsWithLimit:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)fetchPredictionsWithLimit:(unsigned long long)a0 providesFeedback:(BOOL)a1 criteria:(id)a2 handler:(id /* block */)a3;
- (void)fetchPredictionsWithLimit:(unsigned long long)a0 providesFeedback:(BOOL)a1 criteria:(id)a2 timeout:(unsigned long long)a3 handler:(id /* block */)a4;
- (id)initWithCategory:(unsigned long long)a0 consumerType:(unsigned long long)a1;
- (void)invalidate;
- (void)_setupConnection;

@end
