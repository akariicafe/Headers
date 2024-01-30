@class NSMutableSet;

@interface CKDSystemAvailabilityMonitor : NSObject

@property (retain, nonatomic) NSMutableSet *watcherWrappers;
@property unsigned long long availabilityState;
@property unsigned long long simulatedAvailabilityState;

+ (void)initialize;
+ (id)sharedMonitor;

- (void)_clearVanishedWatchers;
- (void)_logAvailabilityDescription;
- (void)simulateFirstUnlockForUnitTests;
- (void)assertAvailability:(unsigned long long)a0;
- (void)removeNotifications;
- (id)_init;
- (void)resetToUnavailableForUnitTests;
- (BOOL)registerWatcher:(id)a0;
- (void)simulateBuddyCompletedForUnitTests;
- (void)dealloc;
- (void)_systemMayNowBeReady;
- (unsigned long long)currentAvailabilityState;
- (void).cxx_destruct;

@end
