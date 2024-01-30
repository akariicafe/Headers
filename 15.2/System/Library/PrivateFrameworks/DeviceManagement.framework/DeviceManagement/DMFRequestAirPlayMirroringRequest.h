@class NSString;

@interface DMFRequestAirPlayMirroringRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *destinationName;
@property (copy, nonatomic) NSString *destinationDeviceID;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) BOOL force;
@property (nonatomic) double scanWaitInterval;

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
