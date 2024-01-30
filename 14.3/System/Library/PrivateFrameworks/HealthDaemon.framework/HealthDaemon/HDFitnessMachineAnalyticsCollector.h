@class HKPersistentTimer, HDGymKitWorkoutAnalyticEvent;

@interface HDFitnessMachineAnalyticsCollector : NSObject

@property (retain, nonatomic) HKPersistentTimer *authorizationTimer;
@property (retain, nonatomic) HDGymKitWorkoutAnalyticEvent *gymKitWorkoutEvent;

- (void)_reset;
- (void)workoutFailedWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)_failureReasonForError:(id)a0;
- (void)userBeganPairing;
- (void)_recordTimeToAuthorize;
- (void)workoutEndedSubmitMetricsWith:(id)a0;
- (void)userIsAuthorized;
- (void)setFitnessMachineType:(unsigned long long)a0 manufacturer:(id)a1;

@end
