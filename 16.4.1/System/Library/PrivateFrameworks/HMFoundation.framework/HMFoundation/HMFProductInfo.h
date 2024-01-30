@class NSString, HMFSoftwareVersion;

@interface HMFProductInfo : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long productPlatform;
@property (readonly) long long productClass;
@property (readonly) long long productVariant;
@property (readonly, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (readonly, nonatomic) long long productColor;
@property (readonly, nonatomic) NSString *modelIdentifier;

+ (id)shortDescription;
+ (id)productInfo;
+ (id)decodeSoftwareVersionWithCoder:(id)a0;
+ (void)encodeSoftwareVersion:(id)a0 withCoder:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)privateDescription;
- (id)initWithCoder:(id)a0;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 variant:(long long)a2 softwareVersion:(id)a3 color:(long long)a4 modelIdentifier:(id)a5;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 softwareVersion:(id)a2 modelIdentifier:(id)a3;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 softwareVersion:(id)a2;
- (id)shortDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 variant:(long long)a2 softwareVersion:(id)a3 color:(long long)a4;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 variant:(long long)a2 softwareVersion:(id)a3;
- (id)attributeDescriptions;
- (id)description;
- (void).cxx_destruct;

@end
