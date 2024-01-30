@class NSString;

@interface FAAcceptFamilyInviteRequest : AAFamilyRequest

@property (copy, nonatomic) NSString *inviteCode;

- (BOOL)isUserInitiated;
- (id)urlRequest;
- (id)urlString;
- (void).cxx_destruct;

@end
