@class NSString, NSDictionary, NSMutableDictionary, NSMutableSet, NSDate, TPSContextualEventBookmark;

@interface TPSContextualEvent : TPSSerializableObject

@property (nonatomic) long long status;
@property (nonatomic) long long type;
@property (nonatomic) long long lookBackDays;
@property (nonatomic) long long daysSinceLastMajorUpdate;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *userInfoQuery;
@property (copy, nonatomic) NSDictionary *userInfoPersistent;
@property (retain, nonatomic) NSMutableDictionary *observationMap;
@property (retain, nonatomic) NSMutableSet *observerIdentifiers;
@property (copy, nonatomic) TPSContextualEvent *state;
@property (readonly, nonatomic) double eventTimeToLiveInterval;
@property (readonly, nonatomic) unsigned int currentObservationCount;
@property (nonatomic) unsigned int minObservationCount;
@property (copy, nonatomic) NSDate *matchedDate;
@property (copy, nonatomic) NSDate *eventSinceDate;
@property (copy, nonatomic) TPSContextualEventBookmark *bookmark;
@property (copy, nonatomic) NSString *key;

+ (BOOL)supportsSecureCoding;
+ (long long)typeFromEventDictionary:(id)a0;
+ (id)identifierFromEventInfoDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (unsigned int)currentObservationCount;
- (id)newStateFromStateDictionary:(id)a0;
- (BOOL)hasLookBackDays;
- (double)eventTimeToLiveInterval;
- (void)removeOutdatedObservationDates;
- (double)lookbackTimeIntervalInSeconds;
- (id)eventSinceLastMajorUpdateDate;
- (BOOL)hasDaysSinceLastMajorUpdate;
- (double)daysSinceLastMajorUpdateTimeIntervalInSeconds;
- (BOOL)canBeRemoved;
- (void)addObserverIdentifier:(id)a0;
- (BOOL)observedWithResults:(id)a0;
- (void)removeObserverIdentifiers:(id)a0;
- (void)removeAllObservations;

@end
