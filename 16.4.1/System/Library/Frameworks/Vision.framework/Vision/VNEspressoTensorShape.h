@interface VNEspressoTensorShape : VNTensorShape

@property (readonly, nonatomic) unsigned long long batchNumber;
@property (readonly, nonatomic) unsigned long long channels;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;

+ (id)shapeForBlobDimensions:(const struct { char *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a0;

@end
