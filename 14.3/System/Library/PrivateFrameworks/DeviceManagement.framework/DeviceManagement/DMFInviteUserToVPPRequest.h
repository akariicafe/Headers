@class NSURL, NSString;

@interface DMFInviteUserToVPPRequest : DMFTaskRequest

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *originator;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
