@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface UNSAuthorizationAlertController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_bundleIdentifersForActiveAlerts;
    NSMutableDictionary *_bundleIdentifiersToResultBlocks;
}

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)_presentAuthorizationAlertForBundleIdentifier:(id)a0 displayName:(id)a1 usageDescription:(id)a2 withResult:(id /* block */)a3;
- (void)_queue_addAlertActiveForBundleIdentifier:(id)a0;
- (void)_queue_addResultBlock:(id /* block */)a0 forBundleIdentifier:(id)a1;
- (BOOL)_queue_isAlertActiveForBundleIdentifier:(id)a0;
- (void)_queue_removeAlertActiveForBundleIdentifier:(id)a0;
- (void)_queue_sendResponse:(long long)a0 forBundleIdentifier:(id)a1;
- (void)presentAuthorizationAlertForBundleIdentifier:(id)a0 displayName:(id)a1 usageDescription:(id)a2 withResult:(id /* block */)a3;
- (void)requestAuthorizationForBundleIdentifier:(id)a0 displayName:(id)a1 usageDescription:(id)a2 withResult:(id /* block */)a3;

@end
