@class NSObject, UNSCriticalAlertAuthorizationAlertController, CRCarPlayAppPolicyEvaluator, UNSDefaultDataProviderFactory, UNSNotificationAuthorizationAlertController;
@protocol OS_dispatch_queue;

@interface UNSNotificationAuthorizationService : NSObject {
    UNSDefaultDataProviderFactory *_dataProviderFactory;
    UNSCriticalAlertAuthorizationAlertController *_criticalAlertAuthorizationAlertController;
    UNSNotificationAuthorizationAlertController *_notificationAuthorizationAlertController;
    NSObject<OS_dispatch_queue> *_queue;
    CRCarPlayAppPolicyEvaluator *_policyEvaluator;
}

- (void)requestAuthorizationWithOptions:(unsigned long long)a0 expirationDate:(id)a1 forNotificationSourceDescription:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestAuthorizationWithOptions:(unsigned long long)a0 forNotificationSourceDescription:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_didForegroundApplicationWithBundleIdentifier:(id)a0;
- (void)_queue_requestAuthorizationWithOptions:(unsigned long long)a0 forNotificationSourceDescription:(id)a1 withExpirationDate:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestRemoveAuthorizationForNotificationSourceDescription:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_queue_isCarPlayAvailableForApplication:(id)a0;
- (BOOL)_queue_isSpokenAvailableForApplication:(id)a0;
- (void)didChangeApplicationState:(unsigned int)a0 forBundleIdentifier:(id)a1;
- (id)initWithDataProviderFactory:(id)a0;
- (void)requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)a0 completionHandler:(id /* block */)a1;
- (void)_queue_requestRemoveAuthorizationForNotificationSourceDescription:(id)a0 completionHandler:(id /* block */)a1;
- (void)_queue_requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)a0 completionHandler:(id /* block */)a1;

@end
