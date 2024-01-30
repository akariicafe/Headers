@interface DMFSetVoiceRoamingEnabledRequest : DMFTaskRequest

@property (nonatomic) BOOL enabled;

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
