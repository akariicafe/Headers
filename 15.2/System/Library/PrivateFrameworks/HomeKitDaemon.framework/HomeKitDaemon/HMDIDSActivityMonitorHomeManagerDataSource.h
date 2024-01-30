@class NSString, HMDHomeManager;
@protocol HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate;

@interface HMDIDSActivityMonitorHomeManagerDataSource : NSObject <HMFLogging, HMDIDSActivityMonitorDataSource>

@property (readonly) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> delegate;

+ (id)logCategory;

- (id)currentDevice;
- (id)initWithHomeManager:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)pushTokensForDevicesObservingSubjectDevice:(id)a0 subActivity:(id)a1;
- (void)stopObservingDevice:(id)a0 subActivity:(id)a1;
- (void)startObservingDevice:(id)a0 subActivity:(id)a1;
- (void)startWithNotificationCenter:(id)a0;
- (BOOL)homeHasCamera:(id)a0;
- (void)handleDeviceAdded:(id)a0;
- (void)handleDeviceRemoved:(id)a0;
- (void)handleRegistrationUpdated:(id)a0;

@end
