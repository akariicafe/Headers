@class UNSNotificationAuthorizationAlertController, UNSNotificationDeliveryAuthorizationAlertController, UNSCriticalAlertAuthorizationAlertController, NSObject, CRCarPlayAppPolicyEvaluator, UNSDefaultDataProviderFactory, UNSNotificationSettingsService;
@protocol OS_dispatch_queue;

@interface UNSNotificationAuthorizationService : NSObject {
    UNSDefaultDataProviderFactory *_dataProviderFactory;
    UNSNotificationSettingsService *_settingsService;
    UNSCriticalAlertAuthorizationAlertController *_criticalAlertAuthorizationAlertController;
    UNSNotificationAuthorizationAlertController *_notificationAuthorizationAlertController;
    UNSNotificationDeliveryAuthorizationAlertController *_notificationDeliveryAuthorizationAlertController;
    NSObject<OS_dispatch_queue> *_queue;
    CRCarPlayAppPolicyEvaluator *_policyEvaluator;
}

- (void)requestAuthorizationWithOptions:(unsigned long long)a0 expirationDate:(id)a1 forNotificationSourceDescription:(id)a2 completionHandler:(id /* block */)a3;
- (void)_queue_requestRemoveAuthorizationForNotificationSourceDescription:(id)a0 completionHandler:(id /* block */)a1;
- (void)didChangeApplicationState:(unsigned int)a0 forBundleIdentifier:(id)a1;
- (void)_queue_requestAuthorizationWithOptions:(unsigned long long)a0 forNotificationSourceDescription:(id)a1 withExpirationDate:(id)a2 completionHandler:(id /* block */)a3;
- (void)_queue_requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDataProviderFactory:(id)a0 settingsService:(id)a1;
- (void).cxx_destruct;
- (void)requestAuthorizationWithOptions:(unsigned long long)a0 forNotificationSourceDescription:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)a0 completionHandler:(id /* block */)a1;
- (void)_didForegroundApplicationWithBundleIdentifier:(id)a0;
- (void)requestRemoveAuthorizationForNotificationSourceDescription:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_queue_isCarPlayAvailableForApplication:(id)a0;

@end
