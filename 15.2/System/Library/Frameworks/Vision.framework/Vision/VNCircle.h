@class VNPoint;

@interface VNCircle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) VNCircle *zeroCircle;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) VNPoint *center;
@property (readonly) double radius;
@property (readonly) double diameter;

- (void)encodeWithCoder:(id)a0;
- (BOOL)containsPoint:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCenter:(id)a0 radius:(double)a1;
- (id)initWithCenter:(id)a0 diameter:(double)a1;
- (BOOL)containsPoint:(id)a0 inCircumferentialRingOfWidth:(double)a1;

@end
