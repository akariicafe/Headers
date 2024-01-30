@class HMDHomeManager, NSString, NSSet, NSBackgroundActivityScheduler, HMDAppleAccountManager, NSObject;
@protocol OS_dispatch_queue, HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate;

@interface HMDIDSActivityMonitorHomeManagerDataSource : NSObject <HMFLogging, HMDIDSActivityMonitorDataSource> {
    NSSet *_pushTokens;
    HMDAppleAccountManager *_appleAccountManager;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSBackgroundActivityScheduler *_updateTask;
}

@property (readonly) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> delegate;

+ (id)logCategory;

- (id)initWithHomeManager:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)_handleHomeAdded:(id)a0;
- (void)pushTokensForDevicesObservingSubjectDevice:(id)a0 subActivity:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)startObservingDevice:(id)a0 subActivity:(id)a1;
- (void)startWithNotificationCenter:(id)a0;
- (void)stopObservingDevice:(id)a0 subActivity:(id)a1;
- (void)_handleCurrentDeviceOrAccountUpdated:(id)a0;
- (void)_handleDeviceAdded:(id)a0;
- (void)_handleDeviceRemoved:(id)a0;

@end
