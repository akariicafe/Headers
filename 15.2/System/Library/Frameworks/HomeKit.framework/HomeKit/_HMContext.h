@class HMDelegateCaller, NSString, HMFMessageDispatcher, HMXPCClient, NSObject, HMPendingRequests;
@protocol OS_dispatch_queue;

@interface _HMContext : NSObject <HMFLogging>

@property (readonly, copy) NSString *name;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) HMPendingRequests *pendingRequests;
@property (readonly, nonatomic) HMDelegateCaller *delegateCaller;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (readonly, nonatomic) HMXPCClient *xpcClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)contextWithName:(id)a0 xpcClient:(id)a1;
+ (id)contextWithName:(id)a0;
+ (id)contextWithName:(id)a0 xpcClient:(id)a1 delegateCaller:(id)a2;

- (id)subcontextWithName:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)a0 pendingRequests:(id)a1 delegateCaller:(id)a2 messageDispatcher:(id)a3 xpcClient:(id)a4;

@end
