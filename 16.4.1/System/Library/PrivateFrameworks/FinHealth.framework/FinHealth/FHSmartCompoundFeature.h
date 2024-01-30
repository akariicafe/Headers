@class NSString, NSArray;

@interface FHSmartCompoundFeature : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *featureKey;
@property (readonly, copy, nonatomic) NSString *compoundFeatureKey;
@property (readonly, copy, nonatomic) NSArray *rankedValues;
@property (readonly, copy, nonatomic) NSString *locale;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCompoundFeatureKey:(id)a0 smartCompoundFeatures:(id)a1 locale:(id)a2;

@end
