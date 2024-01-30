@class NSString, NSArray, NSDate, NSNumber;

@interface PHCloudInvitation : PHObject

@property (readonly, nonatomic) NSString *albumGUID;
@property (readonly, nonatomic) NSString *cloudGUID;
@property (readonly, nonatomic) int invitationStateLocal;
@property (readonly, nonatomic) NSNumber *inviteeEmailKey;
@property (readonly, nonatomic) NSString *inviteeHashedPersonID;
@property (readonly, nonatomic) int invitationState;
@property (readonly, nonatomic) NSString *inviteeFirstName;
@property (readonly, nonatomic) NSString *inviteeLastName;
@property (readonly, nonatomic) NSString *inviteeFullName;
@property (readonly, nonatomic) BOOL isMine;
@property (readonly, nonatomic) NSDate *inviteeSubscriptionDate;
@property (readonly, nonatomic) NSArray *inviteeEmails;
@property (readonly, nonatomic) NSArray *inviteePhones;
@property (readonly, nonatomic) NSString *invitationStateDescription;

+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)fetchType;
+ (id)managedEntityName;

- (id)personInfoManager;
- (void).cxx_destruct;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (id)inviteeDisplayNameIncludingEmail:(BOOL)a0;

@end
