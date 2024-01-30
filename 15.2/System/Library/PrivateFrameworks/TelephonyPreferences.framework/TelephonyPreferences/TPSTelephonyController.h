@class NSOrderedSet, NSDictionary, CTXPCServiceSubscriptionInfo, NSString, NSObject, CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface TPSTelephonyController : TPSController <CoreTelephonyClientDelegate>

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (copy, nonatomic) NSOrderedSet *activeSubscriptions;
@property (retain, nonatomic) CTXPCServiceSubscriptionInfo *subscriptionInfo;
@property (copy, nonatomic) NSOrderedSet *subscriptions;
@property (copy, nonatomic) NSDictionary *systemCapabilities;
@property (readonly, nonatomic) CoreTelephonyClient *telephonyClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)context:(id)a0 capabilitiesChanged:(id)a1;
- (void).cxx_destruct;
- (void)performAtomicAccessorBlock:(id /* block */)a0;
- (id)init;
- (id)fetchSubscriptionInfo;
- (BOOL)isSubscriptionOrderedSet:(id)a0 equivalentToSubscriptionOrderedSet:(id)a1;
- (id)fetchSystemCapabilitiesForSubscriptions:(id)a0;
- (id)systemCapabilitiesForSubscriptionContext:(id)a0;
- (BOOL)supportsSystemCapabilityWithName:(id)a0 subscriptionContext:(id)a1;
- (id)systemCapabilitiesForSubscriptionContext:(id)a0 error:(id *)a1;
- (BOOL)supportsCellularNetworkSelectionForSubscriptionContext:(id)a0;
- (BOOL)supportsSystemCapabilityCallerIDForSubscriptionContext:(id)a0;
- (BOOL)supportsSystemCapabilityCallForwardingForSubscriptionContext:(id)a0;
- (BOOL)supportsSystemCapabilityCallWaitingForSubscriptionContext:(id)a0;

@end
