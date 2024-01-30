@interface ATXTripDuetEvent : ATXDuetEvent

@property (readonly, nonatomic) unsigned long long origin;
@property (readonly, nonatomic) unsigned long long destination;
@property (readonly, nonatomic) double durationAtOrigin;

- (id)initWithOrigin:(unsigned long long)a0 destination:(unsigned long long)a1 durationAtOrigin:(double)a2 startDate:(id)a3 endDate:(id)a4;
- (id)initWithCurrentContextStoreValues;
- (id)identifier;
- (id)convertToUpcomingCommuteEventWithWindowDuration:(double)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)rtLocationToBMSemanticLocation:(long long)a0;
- (id)initWithCurrentContextStoreValuesWithOriginLOI:(id)a0 ignoreBeforeDate:(id)a1;
- (BOOL)isEqualToATXTripDuetEvent:(id)a0;
- (id)description;

@end
