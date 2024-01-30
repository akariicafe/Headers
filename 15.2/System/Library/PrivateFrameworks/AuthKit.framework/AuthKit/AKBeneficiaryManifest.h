@class NSArray, NSDictionary;

@interface AKBeneficiaryManifest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *accessibleBundleInformation;
@property (readonly, nonatomic) long long manifestOptions;
@property (readonly, nonatomic) NSDictionary *parsableRepresentation;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_bundleTypeFrom:(unsigned long long)a0;
- (BOOL)_isAllOptionsSelected;
- (id)initWithBundleInformation:(id)a0 manifestOptions:(long long)a1;

@end
