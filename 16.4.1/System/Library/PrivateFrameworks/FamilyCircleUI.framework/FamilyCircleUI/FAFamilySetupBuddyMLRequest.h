@class NSString, ACAccount;

@interface FAFamilySetupBuddyMLRequest : AAFamilyRequest

@property (retain, nonatomic, setter=setiTunesAccount:) ACAccount *iTunesAccount;
@property (copy, nonatomic) NSString *inviteCode;

- (BOOL)isUserInitiated;
- (id)urlRequest;
- (id)urlString;
- (void).cxx_destruct;

@end
