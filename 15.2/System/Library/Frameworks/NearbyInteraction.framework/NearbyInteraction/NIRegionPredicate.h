@class NSString;

@interface NIRegionPredicate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;
@property (readonly) float radius;
@property long long preferredUpdateRate;
@property BOOL requiresUserIntent;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)descriptionInternal;
- (id)initWithName:(id)a0 radius:(float)a1 preferredUpdateRate:(long long)a2;
- (id)initWithName:(id)a0 radius:(float)a1 preferredUpdateRate:(long long)a2 requiresUserIntent:(BOOL)a3;
- (id)initWithName:(id)a0 radius:(float)a1;

@end
