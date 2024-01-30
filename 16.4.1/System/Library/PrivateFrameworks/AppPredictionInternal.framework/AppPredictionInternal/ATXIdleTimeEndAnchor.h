@interface ATXIdleTimeEndAnchor : ATXAnchor

+ (BOOL)shouldProcessContextStoreNotification;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (double)secondsOfInfluence;
+ (id)duetEventsPredicates;
+ (id)predicateForContextStoreRegistration;
+ (long long)anchorType;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (Class)supportedDuetDataProviderClass;
+ (BOOL)isActive;
+ (id)keyPathForContextStore;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (id)sampleEvent;
+ (double)minimumSecondsForBeingIdle;
+ (BOOL)shouldPredicateOnStartDate;
+ (id)longDescription;

@end
