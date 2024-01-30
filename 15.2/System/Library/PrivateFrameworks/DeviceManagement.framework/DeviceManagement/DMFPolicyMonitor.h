@class NSMutableDictionary, NSXPCConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface DMFPolicyMonitor : NSObject

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) int firstUnlockToken;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *firstUnlockQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *registrationCallbackQueue;
@property (readonly, nonatomic) NSMutableDictionary *notificationTokensByPolicyMonitorIdentifier;
@property (readonly, nonatomic) NSMutableArray *pendingRequests;

+ (const char *)mobileKeyBagFirstUnlockNotificationName;
+ (id)policyMonitor;
+ (id)remoteInterface;
+ (BOOL)hasFirstUnlocked;

- (id)initWithXPCConnection:(id)a0;
- (void)requestPoliciesForTypes:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)requestPoliciesForTypes:(id)a0 withError:(id *)a1;
- (void)addRegistration:(id)a0 forPolicyMonitorIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)_dispatchRequest:(id /* block */)a0;
- (void)invalidatePolicyMonitor:(id)a0;
- (void)dealloc;

@end
