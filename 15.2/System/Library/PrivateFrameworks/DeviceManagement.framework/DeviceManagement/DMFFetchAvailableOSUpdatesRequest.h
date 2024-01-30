@class NSString;

@interface DMFFetchAvailableOSUpdatesRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *productVersion;
@property (nonatomic) BOOL useDelay;

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
