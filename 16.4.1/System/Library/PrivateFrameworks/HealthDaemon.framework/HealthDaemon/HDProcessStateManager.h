@class NSString, NSMutableDictionary, NSHashTable, NSSet, BKSApplicationStateMonitor, NSObject;
@protocol HDApplicationStateMonitorProvider, OS_dispatch_queue;

@interface HDProcessStateManager : NSObject <HDDiagnosticObject> {
    NSMutableDictionary *_processObserversByBundleID;
    NSHashTable *_foregroundClientProcessObservers;
    NSSet *_foregroundClientBundleIdentifiers;
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

- (id)diagnosticDescription;
- (BOOL)isApplicationInExtendedRuntimeSessionForBundleIdentifier:(id)a0;
- (BOOL)isApplicationStateForegroundForBundleIdentifier:(id)a0;
- (void)unregisterForegroundClientProcessObserver:(id)a0;
- (int)processIdentifierForApplicationIdentifier:(id)a0;
- (void)dealloc;
- (BOOL)applicationIsForeground:(id)a0;
- (BOOL)registerObserver:(id)a0 forBundleIdentifier:(id)a1;
- (id)initWithApplicationStateMonitorProvider:(id)a0;
- (id)init;
- (void)unregisterObserver:(id)a0 forBundleIdentifier:(id)a1;
- (BOOL)isApplicationStateSuspendedForBundleIdentifier:(id)a0;
- (void)registerForegroundClientProcessObserver:(id)a0;
- (unsigned int)applicationStateForBundleIdentifier:(id)a0;
- (void).cxx_destruct;

@end
