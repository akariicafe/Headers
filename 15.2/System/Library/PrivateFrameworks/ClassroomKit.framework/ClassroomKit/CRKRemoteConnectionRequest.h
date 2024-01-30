@interface CRKRemoteConnectionRequest : CATTaskRequest

@property (nonatomic) double notificationDuration;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
