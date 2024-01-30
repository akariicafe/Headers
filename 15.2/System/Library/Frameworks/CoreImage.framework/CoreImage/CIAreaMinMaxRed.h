@interface CIAreaMinMaxRed : CIAreaReductionFilter

+ (id)customAttributes;

- (id)_reduceCrop;
- (id)_reduce2X2;
- (id)_reduce1X4;
- (id)_reduce4X1;
- (id)_reduce4x4;

@end
