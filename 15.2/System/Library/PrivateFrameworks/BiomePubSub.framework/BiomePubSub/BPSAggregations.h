@interface BPSAggregations : NSObject

+ (id)sum;
+ (id)avg;
+ (id)min;
+ (id)count;
+ (id)max;
+ (id)approximateDistinctCount;
+ (id)approxPercentile;
+ (id)approxPercentileWithDigestCapacity:(unsigned long long)a0;

@end
