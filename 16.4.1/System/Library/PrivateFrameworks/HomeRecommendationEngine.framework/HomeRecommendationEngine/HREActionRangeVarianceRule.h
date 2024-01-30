@interface HREActionRangeVarianceRule : HRECharacteristicActionVarianceRule

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } allowedTargetValues;

+ (id)rangeVarianceWithType:(id)a0 max:(unsigned long long)a1;
+ (id)rangeVarianceWithType:(id)a0 min:(unsigned long long)a1;
+ (id)rangeVarianceWithType:(id)a0 min:(unsigned long long)a1 max:(unsigned long long)a2;
+ (id)rangeVarianceWithType:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (id)_initWithType:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)passesForAction:(id)a0;
- (BOOL)passesWithTargetValue:(id)a0;

@end
