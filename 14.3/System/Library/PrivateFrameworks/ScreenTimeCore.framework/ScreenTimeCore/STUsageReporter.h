@class NSFetchedResultsController, NSSet, NSDateInterval, NSArray, NSDate, NSNumber, NSString;

@interface STUsageReporter : NSObject <NSFetchedResultsControllerDelegate>

@property (readonly, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSNumber *userDSID;
@property (readonly) NSFetchedResultsController *fetchedResultsController;
@property (retain, nonatomic) NSFetchedResultsController *installedAppsController;
@property (copy) NSSet *installedBundleIdentifiers;
@property (readonly) double totalScreenTime;
@property (readonly) long long totalPickups;
@property (readonly) long long totalNotifications;
@property BOOL includeTotalUsageDetailItem;
@property (readonly, copy) NSArray *categoryUsage;
@property (readonly, copy) NSArray *applicationAndWebUsage;
@property (readonly, copy) NSArray *pickups;
@property (readonly, copy) NSArray *notifications;
@property (readonly, copy) NSDate *firstPickup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingNotifications;

- (void).cxx_destruct;
- (void)controllerDidChangeContent:(id)a0;
- (id)_categoryUsageWithoutAllUsageItem;
- (void)_updateInstalledBundleIdentifiers;
- (void)_enumerateUsageBlocksWithUnitGranularity:(unsigned long long)a0 block:(id /* block */)a1;
- (id)_ratiosForCategory:(id)a0 perCalendarUnit:(unsigned long long)a1 useTotalScreenTime:(BOOL)a2;
- (id)_firstPickupFromUsageBlocks:(id)a0;
- (id)initWithUsage:(id)a0 dateInterval:(id)a1;
- (BOOL)generateReport:(id *)a0;
- (id)screenTimeUsagePerCalendarUnit:(unsigned long long)a0;
- (id)categoryRatiosPerCalendarUnit:(unsigned long long)a0 numberOfCategories:(unsigned long long)a1;
- (id)ratiosForCategory:(id)a0 perCalendarUnit:(unsigned long long)a1;
- (id)ratiosForApplication:(id)a0 perCalendarUnit:(unsigned long long)a1;
- (id)ratiosForWebDomain:(id)a0 perCalendarUnit:(unsigned long long)a1;
- (id)pickupsPerCalendarUnit:(unsigned long long)a0;
- (id)pickupRatiosForApplication:(id)a0 perCalendarUnit:(unsigned long long)a1;
- (id)firstPickupOfIntervalWithMostPickups:(unsigned long long *)a0 perCalendarUnit:(unsigned long long)a1;
- (id)notificationsPerCalendarUnit:(unsigned long long)a0;
- (id)notificationRatiosForApplication:(id)a0 perCalendarUnit:(unsigned long long)a1;

@end
