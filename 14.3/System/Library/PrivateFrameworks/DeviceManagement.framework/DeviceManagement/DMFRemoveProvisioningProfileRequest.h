@class NSString;

@interface DMFRemoveProvisioningProfileRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *profileIdentifier;
@property (copy, nonatomic) NSString *managingProfileIdentifier;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
