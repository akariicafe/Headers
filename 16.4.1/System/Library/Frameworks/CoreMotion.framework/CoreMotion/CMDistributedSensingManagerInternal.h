@class CMDistributedSensingManager, NSObject;
@protocol OS_dispatch_queue, CMDistributedSensingDelegate;

@interface CMDistributedSensingManagerInternal : NSObject {
    void *_locationdConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id<CMDistributedSensingDelegate> _delegate;
    CMDistributedSensingManager *_manager;
}

- (void)_teardown;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_registerForVehicleStateUpdates;
- (void)_handleDaemonMessage:(id)a0 data:(id)a1;
- (void)_unregisterForVehicleStateUpdates;

@end
