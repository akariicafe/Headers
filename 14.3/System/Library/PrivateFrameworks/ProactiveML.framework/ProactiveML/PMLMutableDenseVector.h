@class NSMutableData;

@interface PMLMutableDenseVector : PMLDenseVector <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) float *mutablePtr;
@property (readonly, nonatomic) NSMutableData *mutableData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)append:(float)a0;
- (void)scaleInPlaceWithFactor:(float)a0;
- (void)scaleInPlaceWithInversedFactor:(float)a0;
- (void)sumInPlaceWithVector:(id)a0;
- (id)initWithMutableData:(id)a0;
- (void)append:(const float *)a0 count:(unsigned long long)a1;
- (void)processValuesInPlaceWithBlock:(id /* block */)a0;

@end
