@class NSString, NSSet, HKFHIRVersion, NSArray, NSURL, HKClinicalBrand;

@interface HDClinicalGateway : HDClinicalProviderServiceModel

@property (readonly, copy, nonatomic) NSString *externalID;
@property (readonly, copy, nonatomic) NSString *batchID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *displayableDescription;
@property (readonly, copy, nonatomic) HKFHIRVersion *FHIRVersion;
@property (readonly, copy, nonatomic) NSString *clientID;
@property (readonly, copy, nonatomic) NSString *clientSecret;
@property (readonly, copy, nonatomic) NSSet *pinset;
@property (readonly, copy, nonatomic) NSArray *authSchemaDefinitions;
@property (readonly, copy, nonatomic) NSArray *resourceSchemaDefinitions;
@property (readonly, copy, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long lastReportedStatus;
@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, copy, nonatomic) NSURL *informationURL;
@property (readonly, copy, nonatomic) NSURL *signupURL;
@property (readonly, copy, nonatomic) NSURL *passwordResetURL;
@property (readonly, copy, nonatomic) NSURL *patientPortalURL;
@property (readonly, copy, nonatomic) HKClinicalBrand *brand;
@property (readonly, copy, nonatomic) NSString *country;

+ (id)schemaName;
+ (BOOL)validateContent:(id)a0 error:(id *)a1;
+ (long long)_statusForRawStatus:(id)a0;
+ (long long)_typeForRawType:(id)a0;

- (id)description;
- (id)initWithContent:(id)a0;
- (id)initWithoutValidatingContent:(id)a0;
- (id)initWithRawContent:(id)a0;
- (id)authScopeWithError:(id *)a0;
- (id)authorizeSchemaWithError:(id *)a0;
- (id)_URLForKey:(id)a0;

@end
