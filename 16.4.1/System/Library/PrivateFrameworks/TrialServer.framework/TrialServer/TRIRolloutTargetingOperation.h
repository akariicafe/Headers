@class TRIRolloutDatabase;
@protocol TRIRolloutTargeting;

@interface TRIRolloutTargetingOperation : NSObject

@property (readonly, nonatomic) id<TRIRolloutTargeting> targeter;
@property (readonly, nonatomic) TRIRolloutDatabase *rolloutDatabase;

- (BOOL)_targetRolloutDeployment:(id)a0 appendingTelemetryToSupport:(id)a1 reportTelemetryToServer:(BOOL *)a2 factorPackSetIdToActivate:(id *)a3 shouldDisenroll:(BOOL *)a4 error:(id *)a5;
- (id)initWithRolloutTargeter:(id)a0 rolloutDatabase:(id)a1;
- (BOOL)targetRolloutDeployment:(id)a0 appendingTelemetryToSupport:(id)a1 reportTelemetryToServer:(BOOL *)a2 factorPackSetIdToActivate:(id *)a3 shouldDisenroll:(BOOL *)a4 error:(id *)a5;
- (void).cxx_destruct;

@end
