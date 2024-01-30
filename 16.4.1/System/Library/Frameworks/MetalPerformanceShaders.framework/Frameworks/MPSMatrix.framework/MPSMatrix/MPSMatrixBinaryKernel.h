@interface MPSMatrixBinaryKernel : MPSKernel

@property (nonatomic) struct { unsigned long long x; unsigned long long y; unsigned long long z; } primarySourceMatrixOrigin;
@property (nonatomic) struct { unsigned long long x; unsigned long long y; unsigned long long z; } secondarySourceMatrixOrigin;
@property (nonatomic) struct { unsigned long long x; unsigned long long y; unsigned long long z; } resultMatrixOrigin;
@property (nonatomic) unsigned long long batchStart;
@property (nonatomic) unsigned long long batchSize;

- (id)initWithDevice:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0 device:(id)a1;

@end
