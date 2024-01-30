@class NSArray, NSString;

@interface ATXAnchor : NSObject <NSCopying>

@property (class, readonly, nonatomic) Class supportedDuetDataProviderClass;
@property (class, readonly, nonatomic) NSArray *duetEventsPredicates;
@property (class, readonly, nonatomic) long long anchorType;
@property (class, readonly, nonatomic) NSString *longDescription;
@property (class, readonly, nonatomic) double secondsOfInfluence;

@property (retain, nonatomic) NSString *anchorEventIdentifier;

+ (BOOL)usesContextStoreForRealTimeNotifications;
+ (BOOL)isActive;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (id)keyPathForContextStore;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)a0 selector:(SEL)a1;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)a0;
+ (BOOL)shouldPredicateOnStartDate;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)sampleEvent;
+ (id)predicateForContextStoreRegistration;
+ (id)anchorOccurenceDateFromDuetEvent:(id)a0;
+ (void)registerWithContextStoreForAnchorEntranceWithCallback:(id /* block */)a0 notificationId:(id)a1 registrationPersistenceContext:(id)a2;
+ (void)registerWithContextStoreForAnchorExitWithCallback:(id /* block */)a0 notificationId:(id)a1 registrationPersistenceContext:(id)a2;
+ (id)anchorTypeToString:(long long)a0;
+ (int)pbAnchorEventTypeFromDuetEvent:(id)a0;
+ (Class)anchorClassFromAnchorTypeString:(id)a0;
+ (BOOL)shouldProcessContextStoreNotificationForDict;
+ (long long)stringToAnchorType:(id)a0;
+ (id)anchorTypeToAnchorClassName:(long long)a0;
+ (BOOL)shouldProcessContextStoreNotificationForNumber;
+ (double)durationOfAnchorEvent:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)anchorTypeString;

@end
