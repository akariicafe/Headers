@class NSCountedSet, CLInUseAssertion, NSMutableSet, BKSApplicationStateMonitor;

@interface SFLocationManager : NSObject {
    CLInUseAssertion *_assertion;
    NSCountedSet *_clients;
    NSMutableSet *_foregroundApplications;
    BKSApplicationStateMonitor *_stateMonitor;
}

+ (void)setDefaultEffectiveBundleIdentifier:(id)a0;
+ (id)sharedLocationManager;

- (id)init;
- (void)_updateApplicationsToMonitor;
- (void)addClientForApplication:(id)a0;
- (void)removeClientForApplication:(id)a0;
- (void).cxx_destruct;
- (void)_handleApplicationStateChange:(id)a0;
- (void)_setApplication:(id)a0 isForeground:(BOOL)a1;
- (void)_updateAssertion;

@end
