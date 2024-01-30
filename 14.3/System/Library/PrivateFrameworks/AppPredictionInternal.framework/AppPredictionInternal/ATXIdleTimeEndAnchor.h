@interface ATXIdleTimeEndAnchor : ATXAnchor

+ (id)duetEventsPredicates;
+ (BOOL)shouldPredicateOnStartDate;
+ (id)sampleEvent;
+ (id)longDescription;
+ (double)minimumSecondsForBeingIdle;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (BOOL)isActive;
+ (Class)supportedDuetDataProviderClass;
+ (id)predicateForContextStoreRegistration;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (id)keyPathForContextStore;
+ (double)secondsOfInfluence;
+ (long long)anchorType;
+ (BOOL)shouldProcessContextStoreNotification;

@end
