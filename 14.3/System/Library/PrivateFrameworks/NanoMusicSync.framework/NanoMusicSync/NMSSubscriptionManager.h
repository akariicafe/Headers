@class NSString, ACAccount, NSObject;
@protocol OS_dispatch_queue;

@interface NMSSubscriptionManager : NSObject <ICEnvironmentMonitorObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    long long _icStatusType;
    ACAccount *_activeAccount;
    unsigned long long _subscriptionStatus;
    unsigned long long _subscriptionSupport;
    unsigned long long _failedGetSubscriptionStatusAttempts;
}

@property (class, readonly) NMSSubscriptionManager *sharedManager;

@property (readonly, nonatomic) unsigned long long subscriptionStatus;
@property (readonly, nonatomic) unsigned long long subscriptionSupport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)_handleAccountStoreDidChangeNotification:(id)a0;
- (unsigned long long)_statusWithActiveAccount:(id)a0 icStatusType:(long long)a1;
- (void)_updateICSubscriptionStatusType;
- (void)_handleICSubscriptionStatusDidChangeNotification:(id)a0;
- (void)_updateSubscriptionSupport;
- (void)_updateActiveAccount;
- (void)_updateSubscriptionStatus;

@end
