@class NSSet;

@interface BBSectionIcon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSSet *variants;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_bestVariantForFormat:(long long)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)addVariant:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
