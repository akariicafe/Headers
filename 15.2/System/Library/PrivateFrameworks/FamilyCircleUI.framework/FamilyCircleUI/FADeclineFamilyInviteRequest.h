@class NSString;

@interface FADeclineFamilyInviteRequest : AAFamilyRequest

@property (copy, nonatomic) NSString *inviteCode;

- (id)urlString;
- (void).cxx_destruct;
- (BOOL)isUserInitiated;
- (id)urlRequest;

@end
