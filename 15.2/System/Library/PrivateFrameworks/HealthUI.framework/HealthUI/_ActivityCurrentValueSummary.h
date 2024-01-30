@class NSDateComponents;

@interface _ActivityCurrentValueSummary : HKActivitySummary

@property (nonatomic) long long timeScope;
@property (nonatomic) double collatedSummaryCount;
@property (retain, nonatomic) NSDateComponents *collationDateComponents;

- (id)dateComponentsForCalendar:(id)a0;
- (id)_divideQuantity:(id)a0 divisor:(double)a1;
- (void).cxx_destruct;
- (id)initWithTimeScope:(long long)a0;
- (void)finishCollatingSummaryWithGraphView:(id)a0;
- (id)_addQuantity:(id)a0 toQuantity:(id)a1;
- (void)combineWithActivitySummary:(id)a0;
- (id)_maxQuantity:(id)a0 otherQuantity:(id)a1;

@end
