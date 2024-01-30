@class NSDictionary;

@interface TPSMonitoringEvents : TPSSerializableObject

@property (readonly, nonatomic) BOOL hasEvents;
@property (copy, nonatomic) NSDictionary *initialDisplayEventMap;
@property (copy, nonatomic) NSDictionary *displayEventMap;
@property (copy, nonatomic) NSDictionary *restartTrackingTriggerEventMap;
@property (copy, nonatomic) NSDictionary *restartTrackingDisplayEventMap;
@property (copy, nonatomic) NSDictionary *dismissalEventMap;
@property (copy, nonatomic) NSDictionary *desiredOutcomeEventMap;

+ (BOOL)supportsSecureCoding;

- (BOOL)hasRegistrableContextualEventsForEventOptions:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)clientContextEventsForMap:(id)a0;
- (id)clientContextKeysForMap:(id)a0;
- (BOOL)hasEvents;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasClientContextKeysForEventOptions:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0 desiredOutcomeDictionary:(id)a1;
- (id)clientContextKeysForEventOptions:(unsigned long long)a0;
- (id)debugDescription;
- (id)registrableContextualEventsForMap:(id)a0 type:(long long)a1;
- (id)autoDismissEvents;
- (id)eventMapFromMonitoringEventsDictionary:(id)a0;
- (unsigned long long)eventOptionsForEventIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)registrableContextualEventsForEventOptions:(unsigned long long)a0 type:(long long)a1;

@end
