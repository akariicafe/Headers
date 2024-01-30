@interface ChronoCore.ProcessMonitor : NSObject {
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _calloutQueue;
    void /* unknown type, empty encoding */ _configurationService;
    void /* unknown type, empty encoding */ _extensionManager;
    void /* unknown type, empty encoding */ _subscriptions;
    void /* unknown type, empty encoding */ _lock;
    void /* unknown type, empty encoding */ _lock_processMonitor;
    void /* unknown type, empty encoding */ _lock_knownExtensionBundleIdentifiers;
    void /* unknown type, empty encoding */ _lock_knownApplicationBundleIdentifiers;
    void /* unknown type, empty encoding */ _lock_runningBundleIdentifiersToPIDs;
    void /* unknown type, empty encoding */ _lock_runningBundleIdentifiersWithVisibleScenes;
    void /* unknown type, empty encoding */ _lock_runningBundleIdentifiersWithExemptions;
    void /* unknown type, empty encoding */ _lock_formerlyVisibleBundleIdentifiers;
    void /* unknown type, empty encoding */ _lock_bundleIdentifiersToSuspensionObservers;
    void /* unknown type, empty encoding */ _lock_graceExpirationTimer;
    void /* unknown type, empty encoding */ _lock_observers;
}

- (id)init;
- (void).cxx_destruct;

@end
