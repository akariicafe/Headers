@class NSData, NSMutableData;

@interface PMLDenseVector : NSObject <NSCopying, NSMutableCopying> {
    NSMutableData *_data;
}

@property (readonly, nonatomic) const float *ptr;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSData *data;

+ (id)denseVectorFromNumbers:(id)a0;

- (float)density;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCount:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (float)maxValue;
- (float)l1norm;
- (float)l2norm;
- (float)minValue;
- (void)enumerateValuesWithBlock:(id /* block */)a0;
- (id)initWithFloats:(const float *)a0 count:(unsigned long long)a1;
- (float)valueAt:(unsigned long long)a0;
- (float)cosineDistanceFrom:(id)a0;
- (id)initWithNumbers:(id)a0;
- (id)initWithFloatsNoCopy:(float *)a0 count:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithFloatsNoCopy:(float *)a0 count:(unsigned long long)a1 deallocator:(id /* block */)a2;
- (id)sliceFrom:(int)a0 to:(int)a1;
- (id)vecByAppendingVec:(id)a0;
- (void)enumerateNonZeroValuesWithBlock:(id /* block */)a0;

@end
