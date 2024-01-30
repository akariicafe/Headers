@interface DMFFetchProvisioningProfilesRequest : DMFTaskRequest

@property (nonatomic) BOOL managedOnly;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
+ (BOOL)isPermittedOnSystemConnection;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
