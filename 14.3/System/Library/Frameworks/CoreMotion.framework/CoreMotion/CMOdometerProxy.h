@class CMOdometer, NSObject;
@protocol OS_dispatch_queue;

@interface CMOdometerProxy : NSObject {
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fCallbackQueue;
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationdConnection;
    id /* block */ fHandler;
    long long fGpsAvailability;
}

@property (nonatomic) CMOdometer *odometer;
@property double totalDistance;
@property double averageSpeed;
@property double startDate;

- (void)_teardown;
- (void)_stopOdometerUpdates;
- (id)initWithOdometer:(id)a0;
- (void)_startDaemonConnection;
- (void)_startOdometerUpdatesWithHandler:(id /* block */)a0;
- (void)dealloc;

@end
