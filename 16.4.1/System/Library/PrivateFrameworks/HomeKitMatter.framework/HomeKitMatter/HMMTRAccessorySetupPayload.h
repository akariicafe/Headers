@class NSNumber, NSString;

@interface HMMTRAccessorySetupPayload : HMFObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasShortDiscriminator;
@property (copy, nonatomic) NSNumber *vendorID;
@property (copy, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *setupPayloadString;
@property (nonatomic) BOOL requiresCustomFlow;
@property (nonatomic) BOOL supportsBLE;
@property (nonatomic) BOOL supportsSoftAP;
@property (nonatomic) BOOL supportsIP;
@property (readonly, copy, nonatomic) NSNumber *setupCode;
@property (readonly, copy, nonatomic) NSNumber *discriminator;
@property (readonly, copy, nonatomic) NSString *setupID;

+ (id)shortDescription;
+ (BOOL)isValidSetupPayloadURLScheme:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)privateDescription;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)attributeDescriptions;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSetupCode:(id)a0 discriminator:(id)a1;
- (id)initWithCHIPSetupPayload:(id)a0;
- (id)initWithSetupCodeString:(id)a0;
- (id)initWithSetupPayloadString:(id)a0;
- (id)initWithCHIPSetupPayload:(id)a0 setupPayloadString:(id)a1;
- (id)initWithSetupCode:(id)a0 discriminator:(id)a1 isShortDiscriminator:(BOOL)a2;

@end
