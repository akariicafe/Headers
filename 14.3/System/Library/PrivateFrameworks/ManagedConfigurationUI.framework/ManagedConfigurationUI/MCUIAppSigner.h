@class NSString, NSArray;

@interface MCUIAppSigner : NSObject

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *identity;
@property (retain, nonatomic) NSArray *applications;
@property (retain, nonatomic) NSArray *profiles;
@property (nonatomic) BOOL hasFreeDeveloperProvisioningProfile;
@property (nonatomic) BOOL hasUniversalProvisioningProfile;
@property (nonatomic) BOOL appsRequireTrust;
@property (nonatomic) BOOL appsRequireVerification;
@property (nonatomic) BOOL appsRequireVerificationSoon;
@property (nonatomic) long long numberOfAppsRequiringVerification;
@property (nonatomic) long long numberOfAppsRequiringVerificationSoon;

+ (id)enterpriseAppSignersWithOutDeveloperAppSigners:(id *)a0;
+ (void)_addProfile:(id)a0 toSignerIdentity:(id)a1 inDictionary:(id)a2;
+ (id)_uppProfilesBySignerIDWithOutFreeDevProfilesBySignerID:(id *)a0;

- (void)addApplication:(id)a0;
- (void)removeApplication:(id)a0;
- (void).cxx_destruct;
- (BOOL)isTrusted;
- (id)_displayNameFromIdentity:(id)a0 hasFreeDev:(BOOL)a1 hasUPP:(BOOL)a2;
- (BOOL)_isTrustRequiredForBundleIDs:(id)a0 outNotVerifiedAppCount:(long long *)a1 outExpiringSoonAppCount:(long long *)a2;
- (void)refreshApplications;
- (id)initWithIdentity:(id)a0 applications:(id)a1 profiles:(id)a2 hasUPP:(BOOL)a3 hasFreeDeveloper:(BOOL)a4;
- (void)removeApplications:(id)a0;

@end
