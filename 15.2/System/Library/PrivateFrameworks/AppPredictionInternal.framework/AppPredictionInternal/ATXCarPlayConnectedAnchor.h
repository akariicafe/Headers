@interface ATXCarPlayConnectedAnchor : ATXAnchor

+ (Class)supportedDuetDataProviderClass;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (BOOL)isActive;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (id)keyPathForContextStore;
+ (long long)anchorType;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 selector:(SEL)a1;
+ (id)duetEventsPredicates;
+ (double)secondsOfInfluence;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)longDescription;
+ (id)sampleEvent;
+ (id)predicateForContextStoreRegistration;

@end
