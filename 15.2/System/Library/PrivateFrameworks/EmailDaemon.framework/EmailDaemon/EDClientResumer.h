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

+ (id)signpostLog;
+ (id)log;

- (void)contentProtectionStateChanged:(int)a0 previousState:(int)a1;
- (void)persistenceDidReconcileProtectedData;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (unsigned long long)signpostID;
- (void)resumeForUpdates;
- (id)initWithClientBundleIdentifier:(id)a0 hookRegistry:(id)a1 clientState:(id)a2;

@end
