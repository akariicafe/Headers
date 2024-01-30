@interface ATXUpcomingCommuteToWorkAnchor : ATXAnchor

+ (id)candidateQueryStartDateFromDuetEvent:(id)a0;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (double)secondsOfInfluence;
+ (id)duetEventsPredicates;
+ (id)predicateForContextStoreRegistration;
+ (long long)anchorType;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (id)anchorOccurenceDateFromDuetEvent:(id)a0;
+ (Class)supportedDuetDataProviderClass;
+ (BOOL)isActive;
+ (id)keyPathForContextStore;
+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (id)sampleEvent;
+ (BOOL)shouldPredicateOnStartDate;
+ (id)longDescription;

@end
