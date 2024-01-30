@class NSString, NSNotificationCenter, HMDAppleAccountManager, NSObject;
@protocol OS_dispatch_queue;

@interface HMDDefaultResidentDeviceManagerLegacyDataSource : NSObject <HMDResidentDeviceManagerLegacyDataSource>

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDAppleAccountManager *appleAccountManager;
@property (readonly) BOOL isResidentCapable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)createElectionAddOnWithContext:(id)a0;
- (id)createInitialReachabilityManagerWithUUID:(id)a0;
- (id)createResidentDeviceWithModel:(id)a0;
- (id)logIdentifierForHome:(id)a0;

@end
