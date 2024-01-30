@class NSString, NSArray, NSURL, HKClinicalBrand, HKFHIRVersion;

@interface HKClinicalGateway : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *externalID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *displayableDescription;
@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, copy, nonatomic) NSURL *informationURL;
@property (readonly, copy, nonatomic) NSURL *passwordResetURL;
@property (readonly, copy, nonatomic) NSURL *patientPortalURL;
@property (readonly, copy, nonatomic) NSURL *signupURL;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) HKClinicalBrand *brand;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy, nonatomic) HKFHIRVersion *FHIRVersion;
@property (readonly, copy, nonatomic) NSArray *authSchemas;
@property (readonly, copy, nonatomic) NSArray *resourceSchemas;
@property (readonly, copy, nonatomic) NSArray *features;
@property (readonly, copy, nonatomic) NSArray *gatewayVersions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithExternalID:(id)a0 title:(id)a1 subtitle:(id)a2 displayableDescription:(id)a3 phoneNumber:(id)a4 informationURL:(id)a5 passwordResetURL:(id)a6 patientPortalURL:(id)a7 signupURL:(id)a8 status:(long long)a9 type:(long long)a10 brand:(id)a11 country:(id)a12 FHIRVersion:(id)a13 authSchemas:(id)a14 resourceSchemas:(id)a15 features:(id)a16 gatewayVersions:(id)a17;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
