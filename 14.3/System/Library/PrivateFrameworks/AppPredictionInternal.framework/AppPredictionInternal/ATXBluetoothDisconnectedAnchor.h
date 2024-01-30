@interface ATXBluetoothDisconnectedAnchor : ATXAnchor

+ (id)duetEventsPredicates;
+ (BOOL)shouldPredicateOnStartDate;
+ (id)sampleEvent;
+ (id)longDescription;
+ (BOOL)isActive;
+ (Class)supportedDuetDataProviderClass;
+ (id)predicateForContextStoreRegistration;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (id)keyPathForContextStore;
+ (double)secondsOfInfluence;
+ (long long)anchorType;
+ (BOOL)shouldProcessContextStoreNotification;

@end
