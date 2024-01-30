@class NSArray, NSMutableArray;

@interface HKChartSummaryTrendModel : NSObject

@property (retain, nonatomic) NSMutableArray *observers;
@property (readonly, nonatomic) BOOL selectTrendInitially;
@property (readonly, nonatomic) NSArray *timeScopeTrends;

- (void)addObserver:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithTimeScopeTrends:(id)a0 selectTrendInitially:(BOOL)a1;
- (void)_notifyObserversTrendModelChanged;
- (void)updateChartSummaryTrendModel:(id)a0;

@end
