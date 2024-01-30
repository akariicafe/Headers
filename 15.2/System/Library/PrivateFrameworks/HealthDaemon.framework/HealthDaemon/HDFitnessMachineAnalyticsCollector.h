@class HKPersistentTimer, HDGymKitWorkoutAnalyticEvent;

@interface HDFitnessMachineAnalyticsCollector : NSObject {
    HKPersistentTimer *_authorizationTimer;
}

@property (retain, nonatomic) HDGymKitWorkoutAnalyticEvent *gymKitWorkoutEvent;

- (void).cxx_destruct;
- (id)init;
- (void)setFitnessMachineType:(unsigned long long)a0 manufacturer:(id)a1;
- (void)workoutEndedSubmitMetricsWith:(id)a0;
- (void)workoutFailedWithError:(id)a0;
- (void)userIsAuthorized;
- (void)userBeganPairing;

@end
