@class NSMutableDictionary, NSXPCConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface DMFPolicyMonitor : NSObject

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) int firstUnlockToken;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *firstUnlockQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *registrationCallbackQueue;
@property (readonly, nonatomic) NSMutableDictionary *notificationTokensByPolicyMonitorIdentifier;
@property (readonly, nonatomic) NSMutableArray *pendingRequests;

+ (id)remoteInterface;
+ (BOOL)hasFirstUnlocked;
+ (id)policyMonitor;
+ (const char *)mobileKeyBagFirstUnlockNotificationName;

- (void)_dispatchRequest:(id /* block */)a0;
- (id)initWithXPCConnection:(id)a0;
- (id)requestPoliciesForTypes:(id)a0 withError:(id *)a1;
- (void)addRegistration:(id)a0 forPolicyMonitorIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)requestPoliciesForTypes:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)invalidatePolicyMonitor:(id)a0;
- (void).cxx_destruct;

@end
