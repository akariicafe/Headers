@class NSArray;

@interface PPTripCandidate : NSObject

@property (retain, nonatomic) NSArray *flights;
@property (retain, nonatomic) NSArray *hotels;
@property (retain, nonatomic) NSArray *others;

- (id)allEvents;
- (void).cxx_destruct;
- (id)initWithTripCandidateA:(id)a0 andTripCandidateB:(id)a1;
- (BOOL)canBeMergedWithTripCandidate:(id)a0;
- (BOOL)shouldPromoteToTripEvent;
- (id)tripEventFromCandidate;
- (unsigned char)modeForEventCategory:(unsigned char)a0;
- (double)timeIntervalBetweenEvent:(id)a0 andEvent:(id)a1;
- (id)partFromEvents:(id)a0 tripMode:(unsigned char)a1 takingLocationFromEvent:(id)a2;
- (id)partFromEvents:(id)a0 tripMode:(unsigned char)a1 takingLocationFromEvent:(id)a2 overradingStartDate:(id)a3 endDate:(id)a4;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })eventsTimeRange;
- (id)reverseGeocodedLocation:(id)a0;

@end
