@interface MPSMatrixUnaryKernel : MPSKernel

@property (nonatomic) struct { unsigned long long x; unsigned long long y; unsigned long long z; } sourceMatrixOrigin;
@property (nonatomic) struct { unsigned long long x; unsigned long long y; unsigned long long z; } resultMatrixOrigin;
@property (nonatomic) unsigned long long batchStart;
@property (nonatomic) unsigned long long batchSize;

- (id)initWithDevice:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;

@end
