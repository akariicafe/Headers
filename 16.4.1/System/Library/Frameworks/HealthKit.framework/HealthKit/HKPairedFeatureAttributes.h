@class HKFeatureAttributes;

@interface HKPairedFeatureAttributes : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKFeatureAttributes *localAttributes;
@property (readonly, copy, nonatomic) HKFeatureAttributes *pairedAttributes;
@property (readonly, copy, nonatomic) HKFeatureAttributes *companionAttributes;
@property (readonly, copy, nonatomic) HKFeatureAttributes *watchAttributes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithLocalAttributes:(id)a0 pairedAttributes:(id)a1;

@end
