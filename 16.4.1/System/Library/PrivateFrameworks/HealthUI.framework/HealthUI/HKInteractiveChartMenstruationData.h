@class NSString, NSDate;

@interface HKInteractiveChartMenstruationData : NSObject <HKGraphSeriesChartData>

@property (nonatomic) long long value;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) BOOL startOfCycle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
