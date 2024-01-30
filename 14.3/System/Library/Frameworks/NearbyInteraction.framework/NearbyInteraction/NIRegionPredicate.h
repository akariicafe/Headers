@class NSString;

@interface NIRegionPredicate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;
@property (readonly) float radius;
@property long long preferredUpdateRate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)initWithName:(id)a0 radius:(float)a1 preferredUpdateRate:(long long)a2;
- (id)initWithName:(id)a0 radius:(float)a1;

@end
