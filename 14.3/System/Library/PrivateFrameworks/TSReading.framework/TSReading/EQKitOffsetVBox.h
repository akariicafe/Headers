@interface EQKitOffsetVBox : EQKitVBox

@property (readonly, nonatomic) double offset;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithChildBoxes:(id)a0;
- (void)p_cacheDimensionsForHeight:(double *)a0 depth:(double *)a1 width:(double *)a2;
- (id)initWithChildBoxes:(id)a0 pivotIndex:(unsigned long long)a1;
- (id)initWithChildBoxes:(id)a0 pivotIndex:(unsigned long long)a1 offset:(double)a2;

@end
