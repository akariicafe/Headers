@class NSArray;

@interface DMFFetchSecurityInformationRequest : DMFTaskRequest

@property (class, readonly, copy, nonatomic) NSArray *allPlatformSecurityInfoKeys;
@property (class, readonly, copy, nonatomic) NSArray *iOSSecurityInfoKeys;
@property (class, readonly, copy, nonatomic) NSArray *macOSSecurityInfoKeys;
@property (class, readonly, copy, nonatomic) NSArray *tvOSSecurityInfoKeys;
@property (class, readonly, copy, nonatomic) NSArray *watchOSSecurityInfoKeys;
@property (class, readonly, copy, nonatomic) NSArray *currentPlatformSecurityInfoKeys;

@property (copy, nonatomic) NSArray *infoKeys;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
