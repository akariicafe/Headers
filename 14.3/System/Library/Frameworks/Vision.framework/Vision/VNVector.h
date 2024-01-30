@class VNPoint;

@interface VNVector : NSObject <NSCopying, NSSecureCoding> {
    VNPoint *_vectorProjections;
}

@property (class, readonly) VNVector *zeroVector;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double x;
@property (readonly) double y;
@property (readonly) double r;
@property (readonly) double theta;
@property (readonly) double length;
@property (readonly) double squaredLength;

+ (id)unitVectorForVector:(id)a0;
+ (id)vectorByMultiplyingVector:(id)a0 byScalar:(double)a1;
+ (id)vectorByAddingVector:(id)a0 toVector:(id)a1;
+ (id)vectorBySubtractingVector:(id)a0 fromVector:(id)a1;
+ (double)dotProductOfVector:(id)a0 vector:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithR:(double)a0 theta:(double)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithXComponent:(double)a0 yComponent:(double)a1;
- (id)initWithVectorHead:(id)a0 tail:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
