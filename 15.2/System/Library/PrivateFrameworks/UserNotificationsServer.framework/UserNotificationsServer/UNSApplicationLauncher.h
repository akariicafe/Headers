@class UNSLocationMonitor, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface UNSApplicationLauncher : NSObject {
    UNSLocationMonitor *_locationMonitor;
    NSMutableDictionary *_bundleIdentifierToAssertions;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)_queue_willPresentNotification:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)willPresentNotification:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)initWithLocationMonitor:(id)a0;
- (void)foregroundLaunchApplication:(id)a0 withResponse:(id)a1 launchImageName:(id)a2 origin:(id)a3 endpoint:(id)a4 completionHandler:(id /* block */)a5;
- (void)backgroundLaunchApplication:(id)a0 withResponse:(id)a1 completionHandler:(id /* block */)a2;
- (void)_removeAllProcessAssertionsAndInvalidate:(BOOL)a0;
- (void)_queue_foregroundLaunchApplication:(id)a0 withResponse:(id)a1 launchImageName:(id)a2 origin:(id)a3 endpoint:(id)a4 completionHandler:(id /* block */)a5;
- (id)_queue_actionForNotificationResponse:(id)a0 bundleIdentifier:(id)a1 withHandler:(id /* block */)a2;
- (void)_queue_backgroundLaunchApplication:(id)a0 withResponse:(id)a1 completionHandler:(id /* block */)a2;
- (void)_queue_removeProcessAssertion:(id)a0 forBundleID:(id)a1 invalidate:(BOOL)a2;
- (id)_queue_newProcessAssertionForBundleID:(id)a0 PID:(int)a1 flags:(unsigned int)a2 reason:(unsigned int)a3 name:(id)a4 watchdogInterval:(double)a5 acquisitionHandler:(id /* block */)a6 invalidationHandler:(id /* block */)a7;
- (void)_queue_removeProcessAssertionsHavingReason:(unsigned int)a0 forBundleID:(id)a1 invalidate:(BOOL)a2;
- (void)_queue_addProcessAssertion:(id)a0 forBundleID:(id)a1;
- (void)_queue_removeAllProcessAssertionsAndInvalidate:(BOOL)a0;

@end
