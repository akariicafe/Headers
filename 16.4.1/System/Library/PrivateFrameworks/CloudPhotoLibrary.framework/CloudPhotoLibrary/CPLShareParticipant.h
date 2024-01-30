@class NSString, NSPersonNameComponents;

@interface CPLShareParticipant : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) long long role;
@property (nonatomic) long long acceptanceStatus;
@property (nonatomic) long long permission;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *participantID;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (nonatomic) BOOL hasiCloudAccount;

+ (void)initialize;
+ (id)descriptionForAcceptanceStatus:(long long)a0;
+ (id)descriptionForPermission:(long long)a0;
+ (id)descriptionForRole:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPhoneNumber:(id)a0;
- (id)initWithEmail:(id)a0;
- (id)initWithUserIdentifier:(id)a0 participantID:(id)a1 phoneNumber:(id)a2 email:(id)a3;
- (id)initWithParticipantID:(id)a0;
- (id)initWithUserIdentifier:(id)a0;

@end
