@interface ATXLocationExitAnchor : ATXAnchor

+ (Class)supportedDuetDataProviderClass;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (BOOL)isActive;
+ (id)keyPathForContextStore;
+ (long long)anchorType;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 selector:(SEL)a1;
+ (id)duetEventsPredicates;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)a0;
+ (double)secondsOfInfluence;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)longDescription;
+ (id)sampleEvent;
+ (id)predicateForContextStoreRegistration;

@end
