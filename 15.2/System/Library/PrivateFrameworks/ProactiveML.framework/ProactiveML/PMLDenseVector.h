@class NSData, NSMutableData;

@interface PMLDenseVector : NSObject <NSCopying, NSMutableCopying> {
    NSMutableData *_data;
}

@property (readonly, nonatomic) const float *ptr;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSData *data;

+ (id)denseVectorFromNumbers:(id)a0;

- (float)minValue;
- (float)maxValue;
- (id)initWithData:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)enumerateValuesWithBlock:(id /* block */)a0;
- (id)initWithCount:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)density;
- (float)l1norm;
- (float)l2norm;
- (float)valueAt:(unsigned long long)a0;
- (id)initWithNumbers:(id)a0;
- (id)initWithFloats:(const float *)a0 count:(unsigned long long)a1;
- (float)cosineDistanceFrom:(id)a0;
- (id)initWithFloatsNoCopy:(float *)a0 count:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithFloatsNoCopy:(float *)a0 count:(unsigned long long)a1 deallocator:(id /* block */)a2;
- (id)sliceFrom:(int)a0 to:(int)a1;
- (id)vecByAppendingVec:(id)a0;
- (void)enumerateNonZeroValuesWithBlock:(id /* block */)a0;

@end
