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
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
