@class NSNumber, NSString, NSArray;

@interface HMCHIPAccessorySetupPayload : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *vendorID;
@property (copy, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSString *serialNumber;
@property (nonatomic) BOOL requiresCustomFlow;
@property (readonly, copy, nonatomic) NSNumber *setupCode;
@property (readonly, copy, nonatomic) NSNumber *discriminator;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSetupCode:(id)a0 discriminator:(id)a1;

@end
