@interface PPTTimeIntervalSet : NSObject <NSCopying, NSFastEnumeration, PPTTimeIntervalSet>

@property (readonly) double duration;
@property (readonly) double endTimestamp;
@property (readonly) double startTimestamp;
@property (readonly) unsigned long long count;
@property (readonly) double mean;
@property (readonly) double timeWeightedMean;
@property (readonly) double timeWeightedSum;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)intersect:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)subtract:(id)a0;
- (id)JSONRepresentation;
- (id)init;
- (id)initWithTimeInterval:(id)a0;
- (void)addTimeInterval:(id)a0;
- (void)filterUsingPredicate:(id)a0;
- (void)unionWith:(id)a0;
- (BOOL)doesIntersect:(id)a0;
- (id)filteredTimeIntervalSetUsingPredicate:(id)a0;
- (id)initWithTimeIntervalSet:(id)a0;
- (id)intervalSetFromIntersecting:(id)a0;
- (id)intervalSetFromSubtracting:(id)a0;
- (id)intervalSetFromUnionWith:(id)a0;
- (BOOL)isEqualToTimeIntervalSet:(id)a0;
- (void)removeAllIntervals;

@end
