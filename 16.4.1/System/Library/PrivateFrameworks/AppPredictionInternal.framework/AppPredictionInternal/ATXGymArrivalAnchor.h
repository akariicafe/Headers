@interface ATXGymArrivalAnchor : ATXAnchor

+ (BOOL)shouldProcessContextStoreNotification;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (double)secondsOfInfluence;
+ (id)duetEventsPredicates;
+ (long long)anchorType;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (Class)supportedDuetDataProviderClass;
+ (BOOL)isActive;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)a0;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (id)sampleEvent;
+ (BOOL)shouldPredicateOnStartDate;
+ (id)longDescription;

@end
