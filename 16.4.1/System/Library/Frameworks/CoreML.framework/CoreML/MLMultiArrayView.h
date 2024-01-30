@class MLMultiArray;

@interface MLMultiArrayView : MLMultiArray

@property (readonly, nonatomic) MLMultiArray *parent;

+ (BOOL)isSqueezableShape:(id)a0;
+ (BOOL)isSqueezableShape:(id)a0 dimensions:(id)a1;
+ (void)squeezeShape:(id)a0 strides:(id)a1 resultingShape:(id *)a2 resultingStrides:(id *)a3;

- (id)initExpandingDimensionsOfMultiArray:(id)a0 axis:(long long)a1;
- (id)initSlicingMultiArray:(id)a0 origin:(id)a1 shape:(id)a2 squeeze:(BOOL)a3 error:(id *)a4;
- (id)initSqueezingMultiArray:(id)a0 dimensions:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
