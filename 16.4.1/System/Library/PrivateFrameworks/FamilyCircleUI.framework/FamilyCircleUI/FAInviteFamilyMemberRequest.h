@class NSString;

@interface FAInviteFamilyMemberRequest : FAFamilyRequest

@property (copy, nonatomic) NSString *inviteeEmail;
@property (copy, nonatomic) NSString *inviteeCompositeName;
@property (copy, nonatomic) NSString *inviteeShortName;

- (BOOL)isUserInitiated;
- (id)_queryString;
- (void).cxx_destruct;
- (id)_endpoint;

@end
