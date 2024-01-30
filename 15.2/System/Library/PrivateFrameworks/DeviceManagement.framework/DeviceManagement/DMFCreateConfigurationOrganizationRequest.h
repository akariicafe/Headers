@class NSString;

@interface DMFCreateConfigurationOrganizationRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSString *organizationDisplayName;
@property (copy, nonatomic) NSString *organizationType;

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
