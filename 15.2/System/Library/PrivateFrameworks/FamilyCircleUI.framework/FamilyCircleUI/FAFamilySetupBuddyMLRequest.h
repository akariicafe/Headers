@class NSString, ACAccount;

@interface FAFamilySetupBuddyMLRequest : AAFamilyRequest

@property (retain, nonatomic, setter=setiTunesAccount:) ACAccount *iTunesAccount;
@property (copy, nonatomic) NSString *inviteCode;

- (id)urlString;
- (void).cxx_destruct;
- (BOOL)isUserInitiated;
- (id)urlRequest;

@end
