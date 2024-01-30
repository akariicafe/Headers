@class NSString, NSArray, NSDictionary, NSNumber;

@interface DMFMDMv1StartManagingAppRequest : DMFAppRequest

@property (copy, nonatomic) NSString *originator;
@property (nonatomic) unsigned long long managementOptions;
@property (copy, nonatomic) NSString *VPNUUIDString;
@property (copy, nonatomic) NSArray *associatedDomains;
@property (copy, nonatomic) NSNumber *associatedDomainsEnableDirectDownloads;
@property (copy, nonatomic) NSNumber *removable;
@property (copy, nonatomic) NSDictionary *configuration;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
