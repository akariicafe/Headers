@class VNPoint;

@interface VNCircle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) VNCircle *zeroCircle;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) VNPoint *center;
@property (readonly) double radius;
@property (readonly) double diameter;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCenter:(id)a0 radius:(double)a1;
- (id)initWithCenter:(id)a0 diameter:(double)a1;
- (BOOL)containsPoint:(id)a0 inCircumferentialRingOfWidth:(double)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)containsPoint:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
