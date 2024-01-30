@class CMDistributedSensingManager, NSObject;
@protocol OS_dispatch_queue, CMDistributedSensingDelegate;

@interface CMDistributedSensingManagerInternal : NSObject {
    void *_locationdConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
    id<CMDistributedSensingDelegate> _delegate;
    CMDistributedSensingManager *_manager;
}

- (void)_handleDaemonMessage:(id)a0 data:(id)a1;
- (void)_unregisterForVehicleStateUpdates;
- (void)_registerForVehicleStateUpdates;
- (void).cxx_destruct;
- (id)init;
- (void)_teardown;
- (void)dealloc;

@end
