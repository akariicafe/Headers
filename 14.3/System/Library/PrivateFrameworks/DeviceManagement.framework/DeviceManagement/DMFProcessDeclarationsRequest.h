@class NSString;

@interface DMFProcessDeclarationsRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *organizationIdentifier;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
