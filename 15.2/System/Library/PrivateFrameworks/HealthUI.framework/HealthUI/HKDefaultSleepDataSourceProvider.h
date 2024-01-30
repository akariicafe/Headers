@class NSCalendar;

@interface HKDefaultSleepDataSourceProvider : NSObject <HKSleepDataSourceProvider>

@property (retain, nonatomic) NSCalendar *calendar;

- (void).cxx_destruct;
- (id)initWithCalendar:(id)a0;
- (id)makeSleepDataSourceFromHealthStore:(id)a0 representativeDisplayType:(id)a1;

@end
