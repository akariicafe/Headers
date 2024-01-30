@class NSMutableSet;

@interface CKDSystemAvailabilityMonitor : NSObject

@property (retain, nonatomic) NSMutableSet *watcherWrappers;
@property unsigned long long availabilityState;
@property unsigned long long simulatedAvailablityState;

+ (void)initialize;
+ (id)sharedMonitor;

- (void)simulateBuddyCompletedForUnitTests;
- (unsigned long long)currentAvailabilityState;
- (BOOL)registerWatcher:(id)a0;
- (void)resetToUnavailableForUnitTests;
- (void)_logAvailabilityDescription;
- (void)_systemMayNowBeReady;
- (void).cxx_destruct;
- (void)_clearVanishedWatchers;
- (void)removeNotifications;
- (id)_init;
- (void)assertAvailability:(unsigned long long)a0;
- (void)simulateFirstUnlockForUnitTests;
- (void)dealloc;

@end
