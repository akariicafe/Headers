@class NSString, NSMutableDictionary, NSHashTable, BKSApplicationStateMonitor, NSObject;
@protocol HDApplicationStateMonitorProvider, OS_dispatch_queue;

@interface HDProcessStateManager : NSObject <HDDiagnosticObject> {
    NSMutableDictionary *_processObserversByBundleID;
    NSHashTable *_foregroundClientProcessObservers;
    BKSApplicationStateMonitor *_applicationMonitor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    NSMutableDictionary *_processInfoByBundleID;
}

@property (readonly, weak, nonatomic) id<HDApplicationStateMonitorProvider> applicationStateMonitorProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_lock_unregisterObserver:(id)a0 forBundleIdentifier:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_lock_handleProcessInfoChangedWithAllPreviousProcessInfos:(id)a0;
- (unsigned int)applicationStateForBundleIdentifier:(id)a0;
- (BOOL)applicationIsForeground:(id)a0;
- (void)unregisterForegroundClientProcessObserver:(id)a0;
- (void)dealloc;
- (id)initWithApplicationStateMonitorProvider:(id)a0;
- (BOOL)_lock_registerObserver:(id)a0 forBundleIdentifier:(id)a1;
- (int)processIdentifierForApplicationIdentifier:(id)a0;
- (BOOL)isApplicationInExtendedRuntimeSessionForBundleIdentifier:(id)a0;
- (BOOL)registerObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)unregisterObserver:(id)a0 forBundleIdentifier:(id)a1;
- (BOOL)isApplicationStateSuspendedForBundleIdentifier:(id)a0;
- (BOOL)isApplicationStateForegroundForBundleIdentifier:(id)a0;
- (id)diagnosticDescription;
- (void)_lock_handleBackboardApplicationInfoChanged:(id)a0;
- (void)_lock_notifyObserversProcessWithBundleIdentifier:(id)a0 processIdentifier:(int)a1 applicationStateChanged:(unsigned int)a2 previousApplicationState:(unsigned int)a3;
- (void)_handleBackboardApplicationInfoChanged:(id)a0;
- (void)registerForegroundClientProcessObserver:(id)a0;

@end
