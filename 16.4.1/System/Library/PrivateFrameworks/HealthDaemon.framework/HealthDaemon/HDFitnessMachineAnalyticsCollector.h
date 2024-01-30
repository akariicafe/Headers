@class HKPersistentTimer, HDGymKitWorkoutAnalyticEvent;

@interface HDFitnessMachineAnalyticsCollector : NSObject {
    HKPersistentTimer *_authorizationTimer;
}

@property (retain, nonatomic) HDGymKitWorkoutAnalyticEvent *gymKitWorkoutEvent;

- (void)userIsAuthorized;
- (void)setFitnessMachineType:(unsigned long long)a0 manufacturer:(id)a1;
- (void)userBeganPairing;
- (void)workoutEndedSubmitMetricsWith:(id)a0;
- (id)init;
- (void)workoutFailedWithError:(id)a0;
- (void).cxx_destruct;

@end
