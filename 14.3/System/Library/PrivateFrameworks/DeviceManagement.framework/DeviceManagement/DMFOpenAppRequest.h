@class NSString, NSData;

@interface DMFOpenAppRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSData *activityData;
@property (nonatomic) BOOL lockInApp;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
