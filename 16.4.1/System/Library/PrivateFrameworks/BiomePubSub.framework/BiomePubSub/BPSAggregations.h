@interface BPSAggregations : NSObject

+ (id)min;
+ (id)max;
+ (id)count;
+ (id)avg;
+ (id)sum;
+ (id)approxPercentile;
+ (id)approxPercentileWithDigestCapacity:(unsigned long long)a0;
+ (id)approximateDistinctCount;

@end
