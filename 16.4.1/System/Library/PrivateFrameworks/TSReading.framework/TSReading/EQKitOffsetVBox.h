@interface EQKitOffsetVBox : EQKitVBox

@property (readonly, nonatomic) double offset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (id)initWithChildBoxes:(id)a0;
- (id)initWithChildBoxes:(id)a0 pivotIndex:(unsigned long long)a1;
- (id)initWithChildBoxes:(id)a0 pivotIndex:(unsigned long long)a1 offset:(double)a2;
- (void)p_cacheDimensionsForHeight:(double *)a0 depth:(double *)a1 width:(double *)a2;

@end
