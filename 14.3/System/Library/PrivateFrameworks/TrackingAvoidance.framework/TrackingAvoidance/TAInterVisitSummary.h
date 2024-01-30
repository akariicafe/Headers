@class NSArray, TASPAdvertisement, NSDateInterval;

@interface TAInterVisitSummary : NSObject

@property (readonly, nonatomic) NSDateInterval *deviceObservationInterval;
@property (readonly, nonatomic) NSArray *deviceLocationHistory;
@property (readonly, nonatomic) TASPAdvertisement *latestObservation;

- (void).cxx_destruct;
- (id)initWithObservationInterval:(id)a0 andLocationHistory:(id)a1 andLastObservation:(id)a2;

@end
