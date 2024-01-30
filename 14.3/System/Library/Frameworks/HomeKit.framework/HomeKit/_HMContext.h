@class HMDelegateCaller, NSString, NSDictionary, HMFMessageDispatcher, HMXPCClient, NSObject, HMPendingRequests;
@protocol OS_dispatch_queue;

@interface _HMContext : NSObject

@property (readonly, nonatomic) HMXPCClient *xpcClient;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) HMPendingRequests *pendingRequests;
@property (readonly, nonatomic) HMDelegateCaller *delegateCaller;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (readonly, nonatomic) HMXPCClient *messageTransport;

+ (id)contextWithName:(id)a0;
+ (id)contextWithName:(id)a0 delegateCaller:(id)a1;
+ (id)contextWithName:(id)a0 userInfo:(id)a1 delegateCaller:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)subcontextWithName:(id)a0;
- (id)initWithName:(id)a0 userInfo:(id)a1 pendingRequests:(id)a2 delegateCaller:(id)a3 messageDispatcher:(id)a4;
- (id)initWithName:(id)a0 userInfo:(id)a1 pendingRequests:(id)a2 delegateCaller:(id)a3 messageDispatcher:(id)a4 messageTransport:(id)a5;

@end
