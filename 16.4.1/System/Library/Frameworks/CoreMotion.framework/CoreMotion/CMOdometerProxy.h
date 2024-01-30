@class CMOdometer, NSObject;
@protocol OS_dispatch_queue;

@interface CMOdometerProxy : NSObject {
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fCallbackQueue;
    void *fLocationdConnection;
    id /* block */ fHandler;
    long long fGpsAvailability;
}

@property (nonatomic) CMOdometer *odometer;
@property double totalDistance;
@property double averageSpeed;
@property double startDate;
@property double totalCyclingDistance;
@property double cyclingStartDate;

- (void)_teardown;
- (void)dealloc;
- (void)_startCyclingWorkoutDistanceUpdatesWithHandler:(id /* block */)a0;
- (void)_startDaemonConnection;
- (void)_startOdometerUpdatesWithHandler:(id /* block */)a0;
- (void)_stopCyclingWorkoutDistanceUpdates;
- (void)_stopOdometerUpdates;
- (id)initWithOdometer:(id)a0;

@end
