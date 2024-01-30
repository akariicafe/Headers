@interface ChronoCore.ProcessMonitor : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ processMonitor;
    void /* unknown type, empty encoding */ configurationService;
    void /* unknown type, empty encoding */ extensionManager;
    void /* unknown type, empty encoding */ knownExtensionBundleIdentifiers;
    void /* unknown type, empty encoding */ knownApplicationBundleIdentifiers;
    void /* unknown type, empty encoding */ runningBundleIdentifiersToPIDs;
    void /* unknown type, empty encoding */ runningBundleIdentifiersWithVisibleScenes;
    void /* unknown type, empty encoding */ runningBundleIdentifiersWithExemptions;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ bundleIdentifiersToSuspensionObservers;
}

- (id)init;
- (void).cxx_destruct;

@end
