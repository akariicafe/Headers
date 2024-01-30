@class NSUUID, NSString, HMDHome, NSObject;
@protocol OS_dispatch_queue;

@interface HMDApplicationDataPlugIn : HMCContextProvider <HMFMessageReceiver>

@property (readonly, weak) HMDHome *home;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)applicationDataModelIDForOwnerModelID:(id)a0;
+ (void)updateApplicationDataWithParentModelID:(id)a0 applicationData:(id)a1;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)dispatchContextForMessage:(id)a0;
- (id)applicationDataFor:(id)a0 bundleIsEntitled:(BOOL)a1 bundleID:(id)a2 error:(id *)a3;
- (id)initWithMessageDispatcher:(id)a0 context:(id)a1 home:(id)a2;
- (void)_handleHomeAppData:(id)a0;
- (void)_handleHomeManagerAppData:(id)a0;
- (void)applicationDataChanged:(id)a0;

@end
