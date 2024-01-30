@class NSString, NSDictionary;

@interface DMFInstallConfigurationRequest : DMFTaskRequest

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *managingProfileIdentifier;
@property (copy, nonatomic) NSDictionary *profile;

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
