@class NSArray, NSString;

@interface ATXAnchor : NSObject <NSCopying>

@property (class, readonly, nonatomic) Class supportedDuetDataProviderClass;
@property (class, readonly, nonatomic) NSArray *duetEventsPredicates;
@property (class, readonly, nonatomic) long long anchorType;
@property (class, readonly, nonatomic) NSString *longDescription;
@property (class, readonly, nonatomic) double secondsOfInfluence;

@property (retain, nonatomic) NSString *anchorEventIdentifier;

+ (BOOL)shouldPredicateOnStartDate;
+ (id)sampleEvent;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1;
+ (BOOL)isActive;
+ (id)predicateForContextStoreRegistration;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (id)keyPathForContextStore;
+ (BOOL)shouldProcessContextStoreNotification;
+ (id)anchorOccurenceDateFromDuetEvent:(id)a0;
+ (id)anchorTypeToString:(long long)a0;
+ (int)pbAnchorEventTypeFromDuetEvent:(id)a0;
+ (Class)anchorClassFromAnchorTypeString:(id)a0;
+ (BOOL)shouldProcessContextStoreNotificationForDict;
+ (id)anchorTypeToAnchorClassName:(long long)a0;
+ (BOOL)shouldProcessContextStoreNotificationForNumber;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)anchorTypeString;

@end
