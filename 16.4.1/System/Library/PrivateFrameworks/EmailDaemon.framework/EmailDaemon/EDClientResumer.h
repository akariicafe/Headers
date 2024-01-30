@class NSString, BKSProcessAssertion, EDPersistenceHookRegistry, NSObject;
@protocol OS_dispatch_queue, EDClientStateReporting, EFScheduler;

@interface EDClientResumer : NSObject <EDProtectedDataReconciliationHookResponder, EFContentProtectionObserver, EDResumable> {
    NSString *_bundleID;
    BKSProcessAssertion *_assertion;
    id<EDClientStateReporting> _clientState;
    EDPersistenceHookRegistry *_hookRegistry;
    NSObject<OS_dispatch_queue> *_queue;
    id<EFScheduler> _scheduler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)signpostLog;

- (unsigned long long)signpostID;
- (void)dealloc;
- (void)persistenceDidReconcileProtectedData;
- (void)invalidate;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (void).cxx_destruct;
- (id)initWithClientBundleIdentifier:(id)a0 hookRegistry:(id)a1 clientState:(id)a2;
- (void)resumeForUpdates;

@end
