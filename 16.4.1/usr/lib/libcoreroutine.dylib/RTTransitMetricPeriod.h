@class NSDateInterval;

@interface RTTransitMetricPeriod : NSObject

@property (readonly, nonatomic) NSDateInterval *journeyPeriod;
@property (readonly, nonatomic) NSDateInterval *homeStayPeriod;

- (void).cxx_destruct;
- (BOOL)travelTogether:(id)a0;
- (id)initWithJourneyPeriod:(id)a0 homeStayPeriod:(id)a1;
- (BOOL)stayAtHomeTogether:(id)a0;

@end
