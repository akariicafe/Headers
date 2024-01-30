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

- (void)contentProtectionStateChanged:(int)a0 previousState:(int)a1;
- (unsigned long long)signpostID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)persistenceDidReconcileProtectedData;
- (void)invalidate;
- (void)resumeForUpdates;
- (id)initWithClientBundleIdentifier:(id)a0 hookRegistry:(id)a1 clientState:(id)a2;

@end
