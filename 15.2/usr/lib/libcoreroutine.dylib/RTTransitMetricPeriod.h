@class NSDateInterval;

@interface RTTransitMetricPeriod : NSObject

@property (readonly, nonatomic) NSDateInterval *journeyPeriod;
@property (readonly, nonatomic) NSDateInterval *homeStayPeriod;

- (void).cxx_destruct;
- (id)initWithJourneyPeriod:(id)a0 homeStayPeriod:(id)a1;
- (BOOL)travelTogether:(id)a0;
- (BOOL)stayAtHomeTogether:(id)a0;

@end
