@class CMOdometerSuitabilityManager, NSObject;
@protocol OS_dispatch_queue;

@interface CMOdometerSuitabilityManagerProxy : NSObject {
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fCallbackQueue;
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationdConnection;
    id /* block */ fHandler;
}

@property (nonatomic) CMOdometerSuitabilityManager *odometerSuitabilityManager;
@property double startDate;
@property double suitableForRunning;
@property double suitableForWalking;

- (void)_teardown;
- (void)_startDaemonConnection;
- (void)dealloc;
- (void)_stopOdometerSuitabilityUpdates;
- (id)initWithOdometerSuitability:(id)a0;
- (void)_startOdometerSuitabilityUpdatesWithHandler:(id /* block */)a0;

@end
