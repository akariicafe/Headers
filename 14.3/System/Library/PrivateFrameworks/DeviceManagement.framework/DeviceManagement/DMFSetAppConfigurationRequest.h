@class NSDictionary;

@interface DMFSetAppConfigurationRequest : DMFAppRequest

@property (copy, nonatomic) NSDictionary *configuration;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
