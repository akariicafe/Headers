@interface ATXCarPlayConnectedAnchor : ATXAnchor

+ (BOOL)shouldProcessContextStoreNotification;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 enterSelector:(SEL)a1 exitSelector:(SEL)a2;
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
+ (BOOL)shouldPredicateOnStartDate;
+ (id)longDescription;

@end
