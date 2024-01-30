@interface DMFFetchRestrictionsRequest : DMFTaskRequest

@property (nonatomic) BOOL includeProfileRestrictions;
@property (nonatomic) unsigned long long profileFilterFlags;

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
