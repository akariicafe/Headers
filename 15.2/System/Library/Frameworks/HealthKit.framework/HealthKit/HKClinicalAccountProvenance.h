@class HKClinicalGateway, NSString, HKSignedClinicalDataIssuer, HKClinicalBrand;

@interface HKClinicalAccountProvenance : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) HKClinicalGateway *gateway;
@property (readonly, nonatomic) HKSignedClinicalDataIssuer *signedClinicalDataIssuer;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) HKClinicalBrand *brand;

- (id)initWithGateway:(id)a0;
- (id)initWithSignedClinicalDataIssuer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
