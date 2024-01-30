@class HMFSoftwareVersion;

@interface HMFProductInfo : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long productPlatform;
@property (readonly) long long productClass;
@property (readonly) long long productVariant;
@property (readonly, nonatomic) HMFSoftwareVersion *softwareVersion;

+ (id)decodeSoftwareVersionWithCoder:(id)a0;
+ (id)shortDescription;
+ (void)encodeSoftwareVersion:(id)a0 withCoder:(id)a1;
+ (id)productInfo;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)shortDescription;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 variant:(long long)a2 softwareVersion:(id)a3;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 softwareVersion:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
