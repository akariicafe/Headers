@interface RangeDataManager : NSObject

+ (id)collapseRanges:(id)a0;
+ (id)unionOfRangeLists:(id)a0;
+ (id)intersectionOfRanges1:(id)a0 ranges2:(id)a1;
+ (id)unionOfRanges1:(id)a0 ranges2:(id)a1;
+ (id)intersectionOfRangeLists:(id)a0;
+ (id)stringForRanges:(id)a0;
+ (void)unionOfRangeLists:(id)a0 interleavedIntoList1:(id *)a1 andList2:(id *)a2;
+ (id)invertedRanges:(id)a0 duration:(long long)a1;
+ (BOOL)location:(long long)a0 isInRanges:(id)a1 foundRange:(struct { long long x0; long long x1; } *)a2;
+ (void)ranges:(id)a0 addRange:(struct { long long x0; long long x1; })a1 forKey:(id)a2;

@end
