@interface HKBiologicalSexObject : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long biologicalSex;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithBiologicalSex:(long long)a0;
- (unsigned long long)hash;

@end
