@class HMFSoftwareVersion;

@interface HMFProductInfo : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long productPlatform;
@property (readonly) long long productClass;
@property (readonly) long long productVariant;
@property (readonly, nonatomic) HMFSoftwareVersion *softwareVersion;

+ (id)shortDescription;
+ (id)productInfo;
+ (id)decodeSoftwareVersionWithCoder:(id)a0;
+ (void)encodeSoftwareVersion:(id)a0 withCoder:(id)a1;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 softwareVersion:(id)a2;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 variant:(long long)a2 softwareVersion:(id)a3;

@end
