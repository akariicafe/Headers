@class NSString, PKFamilyMember, PKFeatureApplication;

@interface PKInboxMessage : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL shouldBadge;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) PKFeatureApplication *accountUserInvitation;
@property (readonly, nonatomic) PKFamilyMember *familyMember;

+ (id)accountUserInvitationInboxMessageWithAccountUserInvitation:(id)a0 familyMember:(id)a1;

- (id)initWithType:(long long)a0 identifier:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isEqualToInboxMessage:(id)a0;

@end
