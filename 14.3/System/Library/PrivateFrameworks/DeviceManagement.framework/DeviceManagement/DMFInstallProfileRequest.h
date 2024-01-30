@class NSString, NSData;

@interface DMFInstallProfileRequest : DMFTaskRequest

@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *managingProfileIdentifier;
@property (copy, nonatomic) NSData *profileData;
@property (copy, nonatomic) NSString *personaID;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
