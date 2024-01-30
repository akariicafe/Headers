@class NSNumber, NSString;

@interface CHIPPluginAccessorySetupPayload : HMFObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *vendorID;
@property (copy, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSNumber *category;
@property (nonatomic) BOOL requiresCustomFlow;
@property (readonly, copy, nonatomic) NSNumber *setupCode;
@property (readonly, copy, nonatomic) NSNumber *discriminator;
@property (readonly, copy, nonatomic) NSString *setupID;

+ (id)shortDescription;
+ (BOOL)isValidSetupPayloadURLScheme:(id)a0;

- (id)shortDescription;
- (id)attributeDescriptions;
- (id)privateDescription;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSetupCode:(id)a0 discriminator:(id)a1;
- (id)initWithSetupCodeString:(id)a0;
- (id)initWithSetupPayloadString:(id)a0;
- (id)initWithCHIPSetupPayload:(id)a0;
- (void)_updateCategory;

@end
