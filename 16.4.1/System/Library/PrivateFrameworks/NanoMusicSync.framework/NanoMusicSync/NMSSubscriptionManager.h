@class NSString, ACAccount, NSObject;
@protocol OS_dispatch_queue;

@interface NMSSubscriptionManager : NSObject <ICEnvironmentMonitorObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    ACAccount *_activeAccount;
    long long _subscriptionType;
    unsigned long long _subscriptionCapabilities;
    unsigned long long _failedGetSubscriptionStatusAttempts;
}

@property (class, readonly) NMSSubscriptionManager *sharedManager;

@property (readonly, nonatomic) long long subscriptionType;
@property (readonly, nonatomic) unsigned long long subscriptionCapabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (BOOL)hasCapability:(unsigned long long)a0;
- (void)_updateSubscriptionStatus;
- (void)_updateActiveAccount;
- (void)_retrySubscriptionStatusRequest;
- (void)_handleAccountStoreDidChangeNotification:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_handleSubscriptionStatusDidChangeNotification:(id)a0;

@end
