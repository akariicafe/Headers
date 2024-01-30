@class CMOdometerSuitabilityManager, NSObject;
@protocol OS_dispatch_queue;

@interface CMOdometerSuitabilityManagerProxy : NSObject {
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fCallbackQueue;
    void *fLocationdConnection;
    id /* block */ fHandler;
}

@property (nonatomic) CMOdometerSuitabilityManager *odometerSuitabilityManager;
@property double startDate;
@property double suitableForRunning;
@property double suitableForWalking;

- (void)_teardown;
- (void)dealloc;
- (void)_stopOdometerSuitabilityUpdates;
- (void)_startDaemonConnection;
- (void)_startOdometerSuitabilityUpdatesWithHandler:(id /* block */)a0;
- (id)initWithOdometerSuitability:(id)a0;

@end
