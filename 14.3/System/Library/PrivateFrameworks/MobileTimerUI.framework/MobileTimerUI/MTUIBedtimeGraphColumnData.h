@class NSMutableSet, NSDate;

@interface MTUIBedtimeGraphColumnData : NSObject <NSFastEnumeration>

@property (retain, nonatomic) NSMutableSet *intervals;
@property (readonly, nonatomic) long long intervalCount;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)init;
- (void).cxx_destruct;
- (void)addInterval:(id)a0;
- (id)orderedIntervals;

@end
