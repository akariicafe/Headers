@class NSString, NSNumber, NSArray;

@interface DMFAssignUserRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *fullScreenImageURL;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *passcodeType;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSArray *enrolledGroupIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
