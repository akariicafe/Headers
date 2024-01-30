@class NSString;

@interface DMFDeleteUserRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL forceDeletion;

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
