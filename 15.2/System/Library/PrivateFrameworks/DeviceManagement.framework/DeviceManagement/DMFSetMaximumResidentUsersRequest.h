@interface DMFSetMaximumResidentUsersRequest : DMFTaskRequest

@property (nonatomic) unsigned long long count;

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
