@class NSString, NSArray, NSDictionary, NSNumber;

@interface DMFMDMv1UpdateAppRequest : DMFUpdateAppRequest

@property (copy, nonatomic) NSString *originator;
@property (nonatomic) unsigned long long managementOptions;
@property (copy, nonatomic) NSString *VPNUUIDString;
@property (copy, nonatomic) NSArray *associatedDomains;
@property (copy, nonatomic) NSNumber *associatedDomainsEnableDirectDownloads;
@property (copy, nonatomic) NSNumber *removable;
@property (copy, nonatomic) NSDictionary *configuration;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
