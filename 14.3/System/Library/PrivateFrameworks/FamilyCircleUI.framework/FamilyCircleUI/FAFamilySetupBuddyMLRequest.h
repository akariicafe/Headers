@class NSString, ACAccount;

@interface FAFamilySetupBuddyMLRequest : AAFamilyRequest

@property (retain, nonatomic, setter=setiTunesAccount:) ACAccount *iTunesAccount;
@property (copy, nonatomic) NSString *inviteCode;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (BOOL)isUserInitiated;

@end
