@interface ATXMicrolocationVisitAnchor : ATXAnchor

+ (BOOL)shouldProcessContextStoreNotification;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
+ (double)secondsOfInfluence;
+ (id)duetEventsPredicates;
+ (id)predicateForContextStoreRegistration;
+ (long long)anchorType;
+ (Class)supportedDuetDataProviderClass;
+ (BOOL)isActive;
+ (id)keyPathForContextStore;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)a0;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (id)sampleEvent;
+ (BOOL)shouldPredicateOnStartDate;
+ (id)longDescription;

@end
