@class NSString, NSPersonNameComponents;

@interface CPLMomentShareParticipant : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (nonatomic) BOOL hasiCloudAccount;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) short type;
@property (nonatomic) short status;

+ (id)momentShareParticipantsFromParticipants:(id)a0;
+ (id)shareParticipantsFromMomentShareParticipants:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithShareParticipant:(id)a0;
- (id)asShareParticipant;

@end
