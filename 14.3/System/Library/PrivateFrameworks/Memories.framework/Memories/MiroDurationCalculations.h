@interface MiroDurationCalculations : NSObject

+ (double)durationForItemCount:(long long)a0 inPickList:(id)a1 withBlueprint:(id)a2 respectTrim:(BOOL)a3 localOnly:(BOOL)a4;
+ (double)rawDurationOfItems:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (long long)itemCountInPickList:(id)a0 forDuration:(double)a1;
+ (double)biasedDurationOfItems:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)_itemsForDuration:(double)a0 inPickList:(id)a1 blueprint:(id)a2 localOnly:(BOOL)a3 respectTrim:(BOOL)a4;
+ (double)maxPleasantDurationOfItems:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (int)durationRangeForFrozenPickList:(id)a0;
+ (double)maxDurationForPickList:(id)a0 withBlueprint:(id)a1;
+ (struct Buckets { long long x0; long long x1; long long x2; double x3; double x4; double x5; int x6; })doAllTheThingsForPickList:(id)a0;
+ (long long)itemCountInPickList:(id)a0 forDuration:(double)a1 withBlueprint:(id)a2 respectTrim:(BOOL)a3 outputResidual:(double *)a4;

@end
