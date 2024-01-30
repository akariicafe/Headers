@interface DMFSetPasscodeLockGracePeriodRequest : DMFTaskRequest

@property (nonatomic) double seconds;

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
