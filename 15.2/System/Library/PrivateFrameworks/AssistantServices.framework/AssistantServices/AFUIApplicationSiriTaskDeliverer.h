@class AFSiriTaskmaster, NSString, BKSApplicationStateMonitor, BKSProcessAssertion, AFWatchdogTimer, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface AFUIApplicationSiriTaskDeliverer : NSObject <AFSiriTaskDelivering> {
    NSString *_appBundleIdentifier;
    BKSApplicationStateMonitor *_appStateMonitor;
    BKSProcessAssertion *_bKSAssertionForBgLaunch;
    AFWatchdogTimer *_assertionTimer;
    NSObject<OS_dispatch_group> *_bKSAssertionSetupGroup;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) AFSiriTaskmaster *taskmaster;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deliverSiriTask:(id)a0 completionHandler:(id /* block */)a1;
- (void)siriTaskDidFinish;
- (void).cxx_destruct;
- (void)_invalidateAssertionTimer;
- (void)_invalidateBackboardServices;
- (void)_processAssertionWasInvalidatedForRequest:(id)a0;
- (void)_startAppStateMonitoringForRequest:(id)a0;
- (void)_handleSuccessfulAppLaunchToBackground:(BOOL)a0 forRequest:(id)a1 completion:(id /* block */)a2;
- (void)_processAssertionWasAcquired:(BOOL)a0;
- (void)processAssertionWasInvalidatedForRequest:(id)a0;
- (id)initWithAppBundleIdentifier:(id)a0;
- (void)dealloc;

@end
