@class NSString, NSMutableDictionary, NSMutableSet, NSDate;

@interface TPSContextualEvent : TPSSerializableObject

@property (nonatomic) unsigned long long status;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) TPSContextualEvent *state;
@property (retain, nonatomic) NSMutableDictionary *observationMap;
@property (retain, nonatomic) NSMutableSet *observerIdentifiers;
@property (readonly, nonatomic) unsigned int currentObservationCount;
@property (nonatomic) unsigned int minObservationCount;
@property (copy, nonatomic) NSDate *matchedDate;
@property (copy, nonatomic) NSDate *eventSinceDate;
@property (copy, nonatomic) NSString *key;

+ (BOOL)supportsSecureCoding;
+ (id)classSet;
+ (id)identifierFromEventInfoDictionary:(id)a0;
+ (long long)typeFromEventDictionary:(id)a0;

- (unsigned int)currentObservationCount;
- (void)removeOutdatedObservationDates;
- (BOOL)canBeRemoved;
- (void)addObserverIdentifier:(id)a0;
- (BOOL)observedWithResults:(id)a0;
- (void)removeAllObservations;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)removeObserverIdentifiers:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (id)newStateFromStateDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
