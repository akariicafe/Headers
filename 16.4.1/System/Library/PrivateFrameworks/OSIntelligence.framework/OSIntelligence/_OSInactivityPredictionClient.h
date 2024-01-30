@class NSString, NSXPCConnection;

@interface _OSInactivityPredictionClient : NSObject <_OSInactivityPredictionProtocol_Private, _OSInactivityPredictionProtocol>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)backedUpData;
- (void)restoreInactivityModelWithHandler:(id /* block */)a0;
- (id)longInactivityPredictionResultAtDate:(id)a0 withOptions:(long long)a1 withError:(id *)a2;
- (void)overrideRecommendedWaitTimeTo:(double)a0 withHandler:(id /* block */)a1;
- (void)backedUpDataWithHandler:(id /* block */)a0;
- (void)deviceUsageDiagnosisWithHandler:(id /* block */)a0;
- (BOOL)restoreRecommendedWaitTime;
- (id)modelDescription;
- (void)longInactivityPredictionResultAtDate:(id)a0 withOptions:(long long)a1 withHandler:(id /* block */)a2;
- (void)longInactivityPredictionResultWithOptions:(long long)a0 withHandler:(id /* block */)a1;
- (id)longInactivityPredictionResultWithError:(id *)a0;
- (void)hasEnoughInactivityHistoryWithHandler:(id /* block */)a0;
- (id)unfixModelOutput;
- (id)fixModelOutput:(id)a0;
- (id)longInactivityPredictionResultWithOptions:(long long)a0 withError:(id *)a1;
- (void)inactivityHistoryDiagnosisWithHandler:(id /* block */)a0;
- (void)recommendedWaitTimeWithHandler:(id /* block */)a0;
- (id)deviceUsageDiagnosis;
- (BOOL)forceInactivityTwoStageModel;
- (BOOL)hasEnoughInactivityHistory;
- (double)recommendedWaitTime;
- (void)restoreRecommendedWaitTimeWithHandler:(id /* block */)a0;
- (BOOL)restoreInactivityModel;
- (void)forceInactivityTwoStageModelWithHandler:(id /* block */)a0;
- (void)longInactivityPredictionResultAtDate:(id)a0 withHandler:(id /* block */)a1;
- (id)init;
- (void)longInactivityPredictionResultWithHandler:(id /* block */)a0;
- (void)modelDescriptionWithHandler:(id /* block */)a0;
- (id)longInactivityPredictionResultAtDate:(id)a0 withError:(id *)a1;
- (void)unfixModelOutputWithHandler:(id /* block */)a0;
- (void)fixModelOutput:(id)a0 withHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)inactivityHistoryDiagnosis;
- (BOOL)overrideRecommendedWaitTimeTo:(double)a0;

@end
