@class NSArray, NSString, AAFamilyMember;

@interface AAFamilyDetailsResponse : AAResponse

@property (readonly, nonatomic) NSArray *members;
@property (readonly, nonatomic) AAFamilyMember *organizer;
@property (readonly, nonatomic) AAFamilyMember *me;
@property (readonly, nonatomic) NSArray *invites;
@property (readonly, nonatomic) NSArray *pendingMembers;
@property (readonly, nonatomic) long long memberCount;
@property (readonly, nonatomic) long long pendingMemberCount;
@property (readonly, nonatomic) long long pendingInviteCount;
@property (readonly, nonatomic) BOOL canAddMembers;
@property (readonly, nonatomic) BOOL canAddChildMembers;
@property (readonly, nonatomic) NSString *addMemberInstructions;
@property (readonly, nonatomic) NSString *childAccountPrompt;
@property (readonly, nonatomic) NSString *childAccountButtonTitle;
@property (readonly, nonatomic) NSArray *firstNames;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
