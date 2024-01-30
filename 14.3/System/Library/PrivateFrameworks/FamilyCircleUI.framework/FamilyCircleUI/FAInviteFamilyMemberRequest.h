@class NSString;

@interface FAInviteFamilyMemberRequest : FAFamilyRequest

@property (copy, nonatomic) NSString *inviteeEmail;
@property (copy, nonatomic) NSString *inviteeCompositeName;
@property (copy, nonatomic) NSString *inviteeShortName;

- (id)_endpoint;
- (void).cxx_destruct;
- (id)_queryString;
- (BOOL)isUserInitiated;

@end
