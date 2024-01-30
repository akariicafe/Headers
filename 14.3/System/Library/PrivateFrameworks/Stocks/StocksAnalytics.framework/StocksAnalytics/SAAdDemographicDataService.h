@class NSCalendar;

@interface SAAdDemographicDataService : NSObject

@property (readonly, nonatomic) NSCalendar *calendar;

- (id)init;
- (void).cxx_destruct;
- (void)convertDemoString:(id)a0 result:(id /* block */)a1;
- (void)fetchDemographicData:(id /* block */)a0;

@end
