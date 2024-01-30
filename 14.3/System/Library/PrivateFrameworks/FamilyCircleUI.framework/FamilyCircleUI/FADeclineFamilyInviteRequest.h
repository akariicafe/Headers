@class NSString;

@interface FADeclineFamilyInviteRequest : AAFamilyRequest

@property (copy, nonatomic) NSString *inviteCode;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (BOOL)isUserInitiated;

@end
