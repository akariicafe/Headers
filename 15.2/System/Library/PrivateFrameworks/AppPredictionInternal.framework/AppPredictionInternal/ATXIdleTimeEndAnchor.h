@interface ATXIdleTimeEndAnchor : ATXAnchor

+ (Class)supportedDuetDataProviderClass;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (BOOL)isActive;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (id)keyPathForContextStore;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (long long)anchorType;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 selector:(SEL)a1;
+ (id)duetEventsPredicates;
+ (double)secondsOfInfluence;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)longDescription;
+ (double)minimumSecondsForBeingIdle;
+ (id)sampleEvent;
+ (id)predicateForContextStoreRegistration;

@end
