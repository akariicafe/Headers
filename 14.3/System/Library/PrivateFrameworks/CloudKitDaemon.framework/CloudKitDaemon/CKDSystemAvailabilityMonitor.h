@class NSMutableSet;

@interface CKDSystemAvailabilityMonitor : NSObject

@property (retain, nonatomic) NSMutableSet *watcherWrappers;
@property unsigned long long availabilityState;
@property unsigned long long simulatedAvailablityState;

+ (void)initialize;
+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)registerWatcher:(id)a0;
- (void)_systemMayNowBeReady;
- (void)_logAvailabilityDescription;
- (void)simulateBuddyCompletedForUnitTests;
- (id)_init;
- (void)simulateFirstUnlockForUnitTests;
- (unsigned long long)currentAvailabilityState;
- (void)_clearVanishedWatchers;
- (void)removeNotifications;
- (void)resetToUnavailableForUnitTests;

@end
